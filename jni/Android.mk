LOCAL_PATH := $(call my-dir)
ROOT_PATH := $(LOCAL_PATH)

include $(call all-subdir-makefiles)
include $(CLEAR_VARS)

LOCAL_PATH = $(ROOT_PATH)
LOCAL_CFLAGS := -Wall -Wextra

LOCAL_MODULE    := fourier

LOCAL_LDLIBS := -L$(SYSROOT)/usr/lib -llog
LOCAL_STATIC_LIBRARIES := fftw3
LOCAL_SRC_FILES := com_jh_lim_FourierTest_Main.c

include $(BUILD_SHARED_LIBRARY)