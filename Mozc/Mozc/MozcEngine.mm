//
//  MozcEngine.m
//  Mozc
//
//  Created by SoleilPQD on 04/10/2017.
//  Copyright © 2017 GMO-Z.com RunSystem. All rights reserved.
//

#import "MozcEngine.h"

#include <iostream>
#include <string>

using namespace std;

#include "composer/composer.h"
#include "composer/table.h"

using ::mozc::commands::Request;
using ::mozc::config::Config;

@interface MozcEngine() {
    mozc::composer::Table table;
    mozc::composer::Composer *composer;
}

@end

@implementation MozcEngine

-( instancetype )init {
    if ( self = [ super init ]) {
        const char kDefaultPreeditTableFile[] = "system://romanji-hiragana.tsv";
        table.LoadFromFile(kDefaultPreeditTableFile);
        composer = new mozc::composer::Composer(&table, &Request::default_instance(), &Config::default_instance());
    }
    return self;
}

-( void )dealloc {
    delete composer;
}

@end
