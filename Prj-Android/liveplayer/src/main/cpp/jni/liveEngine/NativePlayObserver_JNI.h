// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     io/anyrtc/live/internal/NativePlayObserver

#ifndef io_anyrtc_live_internal_NativePlayObserver_JNI
#define io_anyrtc_live_internal_NativePlayObserver_JNI

#include <jni.h>
#include "webrtc/sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_io_anyrtc_live_internal_NativePlayObserver[];
const char kClassPath_io_anyrtc_live_internal_NativePlayObserver[] =
    "io/anyrtc/live/internal/NativePlayObserver";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_io_anyrtc_live_internal_NativePlayObserver_clazz(nullptr);
#ifndef io_anyrtc_live_internal_NativePlayObserver_clazz_defined
#define io_anyrtc_live_internal_NativePlayObserver_clazz_defined
inline jclass io_anyrtc_live_internal_NativePlayObserver_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_io_anyrtc_live_internal_NativePlayObserver,
      &g_io_anyrtc_live_internal_NativePlayObserver_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID> g_io_anyrtc_live_internal_NativePlayObserver_onError(nullptr);
static void Java_NativePlayObserver_onError(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper code,
    const base::android::JavaRef<jstring>& msg,
    const base::android::JavaRef<jstring>& extraInfo) {
  jclass clazz = io_anyrtc_live_internal_NativePlayObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      io_anyrtc_live_internal_NativePlayObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onError",
          "(ILjava/lang/String;Ljava/lang/String;)V",
          &g_io_anyrtc_live_internal_NativePlayObserver_onError);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(code), msg.obj(), extraInfo.obj());
}

static std::atomic<jmethodID> g_io_anyrtc_live_internal_NativePlayObserver_onWarning(nullptr);
static void Java_NativePlayObserver_onWarning(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, JniIntWrapper code,
    const base::android::JavaRef<jstring>& msg,
    const base::android::JavaRef<jstring>& extraInfo) {
  jclass clazz = io_anyrtc_live_internal_NativePlayObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      io_anyrtc_live_internal_NativePlayObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onWarning",
          "(ILjava/lang/String;Ljava/lang/String;)V",
          &g_io_anyrtc_live_internal_NativePlayObserver_onWarning);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(code), msg.obj(), extraInfo.obj());
}

static std::atomic<jmethodID>
    g_io_anyrtc_live_internal_NativePlayObserver_onVodPlaybackProcess(nullptr);
static void Java_NativePlayObserver_onVodPlaybackProcess(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper allDuration,
    JniIntWrapper currentPlaybackTime,
    JniIntWrapper bufferDuration) {
  jclass clazz = io_anyrtc_live_internal_NativePlayObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      io_anyrtc_live_internal_NativePlayObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onVodPlaybackProcess",
          "(III)V",
          &g_io_anyrtc_live_internal_NativePlayObserver_onVodPlaybackProcess);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(allDuration), as_jint(currentPlaybackTime),
              as_jint(bufferDuration));
}

static std::atomic<jmethodID>
    g_io_anyrtc_live_internal_NativePlayObserver_onVideoPlayStatusUpdate(nullptr);
static void Java_NativePlayObserver_onVideoPlayStatusUpdate(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper status,
    JniIntWrapper reason,
    const base::android::JavaRef<jstring>& extraInfo) {
  jclass clazz = io_anyrtc_live_internal_NativePlayObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      io_anyrtc_live_internal_NativePlayObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onVideoPlayStatusUpdate",
          "(IILjava/lang/String;)V",
          &g_io_anyrtc_live_internal_NativePlayObserver_onVideoPlayStatusUpdate);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(status), as_jint(reason), extraInfo.obj());
}

static std::atomic<jmethodID>
    g_io_anyrtc_live_internal_NativePlayObserver_onAudioPlayStatusUpdate(nullptr);
static void Java_NativePlayObserver_onAudioPlayStatusUpdate(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper status,
    JniIntWrapper reason,
    const base::android::JavaRef<jstring>& extraInfo) {
  jclass clazz = io_anyrtc_live_internal_NativePlayObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      io_anyrtc_live_internal_NativePlayObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onAudioPlayStatusUpdate",
          "(IILjava/lang/String;)V",
          &g_io_anyrtc_live_internal_NativePlayObserver_onAudioPlayStatusUpdate);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(status), as_jint(reason), extraInfo.obj());
}

static std::atomic<jmethodID>
    g_io_anyrtc_live_internal_NativePlayObserver_onPlayoutVolumeUpdate(nullptr);
static void Java_NativePlayObserver_onPlayoutVolumeUpdate(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper volume) {
  jclass clazz = io_anyrtc_live_internal_NativePlayObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      io_anyrtc_live_internal_NativePlayObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onPlayoutVolumeUpdate",
          "(I)V",
          &g_io_anyrtc_live_internal_NativePlayObserver_onPlayoutVolumeUpdate);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(volume));
}

static std::atomic<jmethodID>
    g_io_anyrtc_live_internal_NativePlayObserver_onStatisticsUpdate(nullptr);
static void Java_NativePlayObserver_onStatisticsUpdate(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper appCpu,
    JniIntWrapper systemCpu,
    JniIntWrapper width,
    JniIntWrapper height,
    JniIntWrapper fps,
    JniIntWrapper videoBitrate,
    JniIntWrapper audioBitrate) {
  jclass clazz = io_anyrtc_live_internal_NativePlayObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      io_anyrtc_live_internal_NativePlayObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onStatisticsUpdate",
          "(IIIIIII)V",
          &g_io_anyrtc_live_internal_NativePlayObserver_onStatisticsUpdate);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(appCpu), as_jint(systemCpu), as_jint(width),
              as_jint(height), as_jint(fps), as_jint(videoBitrate), as_jint(audioBitrate));
}

static std::atomic<jmethodID>
    g_io_anyrtc_live_internal_NativePlayObserver_onRenderVideoFrame(nullptr);
static void Java_NativePlayObserver_onRenderVideoFrame(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper pixelFormat,
    JniIntWrapper bufferType,
    const base::android::JavaRef<jbyteArray>& data,
    const base::android::JavaRef<jobject>& buffer,
    JniIntWrapper width,
    JniIntWrapper height,
    JniIntWrapper rotation) {
  jclass clazz = io_anyrtc_live_internal_NativePlayObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      io_anyrtc_live_internal_NativePlayObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onRenderVideoFrame",
          "(II[BLjava/nio/ByteBuffer;III)V",
          &g_io_anyrtc_live_internal_NativePlayObserver_onRenderVideoFrame);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(pixelFormat), as_jint(bufferType),
              data.obj(), buffer.obj(), as_jint(width), as_jint(height), as_jint(rotation));
}

static std::atomic<jmethodID>
    g_io_anyrtc_live_internal_NativePlayObserver_onReceiveSeiMessage(nullptr);
static void Java_NativePlayObserver_onReceiveSeiMessage(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper payloadType,
    const base::android::JavaRef<jbyteArray>& data) {
  jclass clazz = io_anyrtc_live_internal_NativePlayObserver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      io_anyrtc_live_internal_NativePlayObserver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onReceiveSeiMessage",
          "(I[B)V",
          &g_io_anyrtc_live_internal_NativePlayObserver_onReceiveSeiMessage);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, as_jint(payloadType), data.obj());
}

#endif  // io_anyrtc_live_internal_NativePlayObserver_JNI