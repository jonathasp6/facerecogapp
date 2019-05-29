/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <opencv2/opencv.hpp>
#include <android/log.h>

#define  LOG_TAG    "FACE RECOG"

#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

/* Header for class br_com_jonathas_facerecog_tool_OpenCVTool */

#ifndef _Included_br_com_jonathas_facerecog_tool_OpenCVTool
#define _Included_br_com_jonathas_facerecog_tool_OpenCVTool
#ifdef __cplusplus
extern "C" {
#endif

using namespace cv;
using namespace std;
/*
 * Class:     br_com_jonathas_facerecog_tool_OpenCVTool
 * Method:    faceDetection
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_br_com_jonathas_facerecog_tool_OpenCVTool_faceDetection
  (JNIEnv *, jclass, jlong);

void detect(Mat& frame);

#ifdef __cplusplus
}
#endif
#endif