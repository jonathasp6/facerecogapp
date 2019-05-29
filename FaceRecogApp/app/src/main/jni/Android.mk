LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

#openCV
OPENCVROOT := /home/jonathas/nova/facerecogapp/opencv-3.4.6-android-sdk/OpenCV-android-sdk
OPENCV_CAMERA_MODULES := on
OPENCV_INSTALL_MODULES := on
OPENCV_LIB_TYPE := SHARED

include $(OPENCVROOT)/sdk/native/jni/OpenCV.mk

LOCAL_SRC_FILES := br_com_jonathas_facerecog_tool_OpenCVTool.cpp

LOCAL_LDLIBS += -llog
LOCAL_MODULE := MyLib


include $(BUILD_SHARED_LIBRARY)