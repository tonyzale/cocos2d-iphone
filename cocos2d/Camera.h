//
//  Camera.h
//  cocos2d
//

#import <UIKit/UIKit.h>

#import "CocosNode.h"

/** 
    A Camera is used in every `CocosNode`.
    Useful to look at the object from different views.
    The OpenGL gluLookAt() function is used to locate the
    camera.

    If the object is transformed by any of the scale, rotation or
    position attributes, then they will override the camera.
*/

@interface Camera : NSObject {
    float eyeX;
    float eyeY;
    float eyeZ;

    float centerX;
    float centerY;
    float centerZ;

    float upX;
    float upY;
    float upZ;
	
	BOOL dirty;
	BOOL once;
}

/** returns the Z eye */
+(float) getZEye;

/** sets the camera in the defaul position */
-(void) restore;
/** Sets the camera using gluLookAt using its eye, center and up_vector */
-(void) locate;
/** sets the eye values */
-(void) setEyeX: (float)x eyeY:(float)y eyeZ:(float)z;
/** sets the center values */
-(void) setCenterX: (float)x centerY:(float)y centerZ:(float)z;
/** sets the up values */
-(void) setUpX: (float)x upY:(float)y upZ:(float)z;

/** get the eye vector values */
-(void) eyeX:(float*)x eyeY:(float*)y eyeZ:(float*)z;
/** get the center vector values */
-(void) centerX:(float*)x centerY:(float*)y centerZ:(float*)z;
/** get the up vector values */
-(void) upX:(float*)x upY:(float*)y upZ:(float*)z;


@end