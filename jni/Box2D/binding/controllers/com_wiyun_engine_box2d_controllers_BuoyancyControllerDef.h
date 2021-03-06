/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_controllers_BuoyancyControllerDef */

#ifndef _Included_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
#define _Included_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_nativeInit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_destroy
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    setNormal
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_setNormal
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    nativeGetNormal
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_nativeGetNormal
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    getOffset
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_getOffset
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    setOffset
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_setOffset
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    getDensity
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_getDensity
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    setDensity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_setDensity
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    setVelocity
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_setVelocity
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    nativeGetVelocity
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_nativeGetVelocity
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    getLinearDrag
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_getLinearDrag
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    setLinearDrag
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_setLinearDrag
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    getAngularDrag
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_getAngularDrag
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    setAngularDrag
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_setAngularDrag
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    isUseDensity
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_isUseDensity
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    setUseDensity
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_setUseDensity
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    isUseWorldGravity
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_isUseWorldGravity
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    setUseWorldGravity
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_setUseWorldGravity
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    setGravity
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_setGravity
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_controllers_BuoyancyControllerDef
 * Method:    nativeGetGravity
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_controllers_BuoyancyControllerDef_nativeGetGravity
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
