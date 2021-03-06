//
//  TDMultiLineCommentState.h
//  TDParseKit
//
//  Created by Todd Ditchendorf on 12/28/08.
//  Copyright 2008 Todd Ditchendorf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TDParseKit/TDTokenizerState.h>

@interface TDMultiLineCommentState : TDTokenizerState {
    NSMutableArray *startSymbols;
    NSMutableArray *endSymbols;
    NSString *currentStartSymbol;
}

@end
