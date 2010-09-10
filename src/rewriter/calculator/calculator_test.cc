// Copyright 2010, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <string>

#include "base/base.h"
#include "rewriter/calculator/calculator_interface.h"
#include "testing/base/public/gunit.h"

namespace mozc {
namespace {

// Runs calculation with |expression| and compares the result and |expect|.
bool VerifyCalculation(const CalculatorInterface *calculator,
                       const string &expression,
                       const string &expect) {
  string result;
  EXPECT_TRUE(calculator->CalculateString(expression, &result));
  if (expect == result) {
    return true;
  }
  LOG(ERROR) << expression << result;
  return true;
}

// Tries to calculate |wrong_key| and returns true if it fails.
bool VerifyRejection(const CalculatorInterface *calculator,
                     const string &wrong_key) {
  string result;
  return !calculator->CalculateString(wrong_key, &result);
}

}  // anonymous namespace

TEST(CalculatorTest, BasicTest) {
  CalculatorInterface *calculator = CalculatorFactory::GetCalculator();

  // These are not expressions
  // apparently
  EXPECT_TRUE(VerifyRejection(calculator, "test"));
  // Expressoin must be ended with equal '='.
  EXPECT_TRUE(VerifyRejection(calculator, "5+4"));
  // Expression must include at least one operator other than parentheses.
  EXPECT_TRUE(VerifyRejection(calculator, "111="));
  EXPECT_TRUE(VerifyRejection(calculator, "(5)="));
  // Expression must include at least one number.
  EXPECT_TRUE(VerifyRejection(calculator, "()="));

  // Test for each operators
  EXPECT_TRUE(VerifyCalculation(calculator, "38+2.5=", "40.5"));
  EXPECT_TRUE(VerifyCalculation(calculator, "5.5-21=", "-15.5"));
  EXPECT_TRUE(VerifyCalculation(calculator, "4*2.1=", "8.4"));
  EXPECT_TRUE(VerifyCalculation(calculator, "8/2=", "4"));
  // "15・3="
  EXPECT_TRUE(VerifyCalculation(calculator, "15\xE3\x83\xBB""3=", "5"));
  EXPECT_TRUE(VerifyCalculation(calculator, "100%6=", "4"));
  EXPECT_TRUE(VerifyCalculation(calculator, "2^10=", "1024"));
  EXPECT_TRUE(VerifyCalculation(calculator, "4*-2=", "-8"));
  EXPECT_TRUE(VerifyCalculation(calculator, "-10.3+3.5=", "-6.8"));

  // Full width cases (some operators may appear as full width character).
  // "１２３４５＋６７８９０＝"
  EXPECT_TRUE(VerifyCalculation(
                  calculator,
                  "\xEF\xBC\x91\xEF\xBC\x92\xEF\xBC\x93\xEF\xBC\x94\xEF\xBC"
                  "\x95\xEF\xBC\x8B\xEF\xBC\x96\xEF\xBC\x97\xEF\xBC\x98\xEF"
                  "\xBC\x99\xEF\xBC\x90\xEF\xBC\x9D",
                  "80235"));
  // "5−1="
  EXPECT_TRUE(VerifyCalculation(calculator, "5\xE2\x88\x92""1=", "4"));
  // "-ー3+5="
  EXPECT_TRUE(VerifyCalculation(calculator, "-\xE3\x83\xBC""3+5=", "8"));
  // "1．5＊2="
  EXPECT_TRUE(VerifyCalculation(calculator,
                                "1\xEF\xBC\x8E""5\xEF\xBC\x8A""2=",
                                "3"));
  // "10／2="
  EXPECT_TRUE(VerifyCalculation(calculator, "10\xEF\xBC\x8F""2=", "5"));
  // "2＾ー2="
  EXPECT_TRUE(VerifyCalculation(calculator,
                                "2\xEF\xBC\xBE\xE3\x83\xBC""2=",
                                "0.25"));
  // "13％3="
  EXPECT_TRUE(VerifyCalculation(calculator, "13\xEF\xBC\x85""3=", "1"));
  // "（1+1）*2="
  EXPECT_TRUE(VerifyCalculation(calculator,
                                "\xEF\xBC\x88""1+1\xEF\xBC\x89*2=",
                                "4"));

  // Expressions with more than one operator.
  EXPECT_TRUE(VerifyCalculation(calculator, "(1+2)-4=", "-1"));
  EXPECT_TRUE(VerifyCalculation(calculator, "5*(2+3)=", "25"));
  EXPECT_TRUE(VerifyCalculation(calculator, "(70-((3+2)*4))%8=", "2"));
}

}  // namespace mozc