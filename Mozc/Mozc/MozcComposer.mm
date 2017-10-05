//
//  MozcEngine.m
//  Mozc
//
//  Created by SoleilPQD on 04/10/2017.
//  Copyright © 2017 GMO-Z.com RunSystem. All rights reserved.
//

#import "MozcComposer.h"

#include <iostream>
#include <string>

using namespace std;

#include "composer/composer.h"
#include "composer/table.h"

using ::mozc::commands::Request;
using ::mozc::config::Config;

@interface MozcComposer() {
    mozc::composer::Table table;
    mozc::composer::Composer *composer;
}

@end

@implementation MozcComposer

-( instancetype )init {
    if ( self = [ super init ]) {
        const char kDefaultPreeditTableFile[] = "system://romanji-hiragana.tsv";
        table.LoadFromFile(kDefaultPreeditTableFile);
        composer = new mozc::composer::Composer(&table, &Request::default_instance(), &Config::default_instance());
        composer->InsertCharacter("k");
        composer->InsertCharacter("a");
        composer->InsertCharacter("t");
        composer->InsertCharacter("a");
        composer->InsertCharacter("k");
        composer->InsertCharacter("a");
        composer->InsertCharacter("n");
        composer->InsertCharacter("a");
        string output;
        composer->GetStringForPreedit(&output);
        NSLog(@"PreEdit: %@", [ NSString stringWithUTF8String:output.c_str()]);
        composer->GetQueryForPrediction(&output);
        NSLog(@"Query for predict: %@", [ NSString stringWithUTF8String:output.c_str()]);
    }
    return self;
}

-( void )dealloc {
    delete composer;
}

@end
