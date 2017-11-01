//
//  MozcEngine.m
//  Mozc
//
//  Created by SoleilPQD on 04/10/2017.
//  Copyright © 2017 GMO-Z.com RunSystem. All rights reserved.
//

#import "MozcComposer.h"

#include <string>

using namespace std;

#include "base/system_util.h"
#include "base/logging.h"
#include "composer/composer.h"
#include "composer/table.h"
#include "converter/converter_interface.h"
#include "converter/segments.h"
#include "data_manager/data_manager.h"
#include "data_manager/oss/oss_data_manager.h"
#include "engine/engine.h"
#include "prediction/predictor.h"

#include "engine/engine_factory.h"
#include "engine/engine_interface.h"

using mozc::composer::Composer;
using mozc::composer::Table;
using mozc::commands::Request;
using mozc::config::Config;
using mozc::ConverterInterface;
using mozc::Segments;
using mozc::SystemUtil;
using mozc::Logging;
using mozc::oss::OssDataManager;
using mozc::DataManagerInterface;
using mozc::DataManager;
using mozc::Engine;
using mozc::MobilePredictor;

using mozc::EngineFactory;
using mozc::EngineInterface;

@interface MozcComposer() {
    Table table;
    Composer *composer;
    unique_ptr<Engine> engine;
}

@end

@implementation MozcComposer

-( instancetype )init {
    if ( self = [ super init ]) {
        FLAGS_logtostderr = true;
        Logging::SetVerboseLevel(9);
//        SystemUtil::SetUserProfileDirectory(string([ NSHomeDirectory() stringByAppendingPathComponent:@"Library/Caches" ].UTF8String));
//        unique_ptr<const DataManagerInterface> dataManPtr(new OssDataManager());
//        dataManPtr.reset(&dataManager);
//        if ( status == DataManager::Status::OK ) {
//        Engine *e = Engine::CreateMobileEngine(unique_ptr<const OssDataManager>(new OssDataManager())).release();

//        }
//        NSLog( @"DEBUG %@: %@", @( status == DataManager::Status::OK ), dataPath );

//        const char kDefaultPreeditTableFile[] = "system://romanji-hiragana.tsv";
//        table.LoadFromFile(kDefaultPreeditTableFile);
//        composer = new mozc::composer::Composer(&table, &Request::default_instance(), &Config::default_instance());
//        composer->InsertCharacter("k");
//        composer->InsertCharacter("a");
//        composer->InsertCharacter("n");
//        composer->InsertCharacter("j");
//        composer->InsertCharacter("i");
//        string output;
//        composer->GetStringForPreedit(&output);
//        NSLog(@"PreEdit: %@", [ NSString stringWithUTF8String:output.c_str()]);
//        composer->GetQueryForPrediction(&output);
//        NSLog(@"Query for predict: %@", [ NSString stringWithUTF8String:output.c_str()]);

//        NSBundle *myBundle = [ NSBundle bundleForClass:[ self class ]];
//        NSString *dataPath = [ myBundle pathForResource:@"mozc" ofType:@"data" ];
//        OssDataManager dataManager;
//        DataManager::Status status = dataManager.InitFromFile([ dataPath UTF8String ]);
//        if ( status == DataManager::Status::OK ) {
//            Engine e;
//            e.Init(&dataManager, &MobilePredictor::CreateMobilePredictor, false);
//            NSLog( @"%@", dataPath );
//        }
//        std::unique_ptr<mozc::EngineInterface> engine;
//        mozc::commands::Request request;
        engine.reset(EngineFactory::Create());
//        Engine *engine = EngineFactory::Create();
//        ConverterInterface *converter = engine->GetConverter();
//        Segments segments;
//        converter->StartPrediction(&segments, output);
//        NSLog(@"Predict count: %@", @( segments.segments_size() ));
//        for (size_t i = 0; i < segments.segments_size(); ++i) {
//
//        }
    }
    return self;
}

-( void )dealloc {
    delete composer;
}

@end
