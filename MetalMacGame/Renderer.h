//
//  Renderer.h
//  MetalMacGame
//
//  Created by Matthew Lintlop on 11/21/17.
//  Copyright © 2017 Matthew Lintlop. All rights reserved.
//

#import <MetalKit/MetalKit.h>

// Our platform independent renderer class.   Implements the MTKViewDelegate protocol which
//   allows it to accept per-frame update and drawable resize callbacks.
@interface Renderer : NSObject <MTKViewDelegate>

-(nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)view;

@end

