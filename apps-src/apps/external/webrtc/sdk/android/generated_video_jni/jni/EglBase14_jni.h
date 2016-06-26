// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base\android\jni_generator\jni_generator.py
// For
//     org/webrtc/EglBase14

#ifndef org_webrtc_EglBase14_JNI
#define org_webrtc_EglBase14_JNI

#include "sdk/android/src/jni/jni_generator_helper.h"

// Step 1: forward declarations.
JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_EglBase14[];
const char kClassPath_org_webrtc_EglBase14[] = "org/webrtc/EglBase14";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_EglBase14_00024Context[];
const char kClassPath_org_webrtc_EglBase14_00024Context[] =
    "org/webrtc/EglBase14$Context";

// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_webrtc_EglBase14_clazz =
    0;
#ifndef org_webrtc_EglBase14_clazz_defined
#define org_webrtc_EglBase14_clazz_defined
inline jclass org_webrtc_EglBase14_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_EglBase14,
      &g_org_webrtc_EglBase14_clazz);
}
#endif

// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_webrtc_EglBase14_00024Context_clazz = 0;
#ifndef org_webrtc_EglBase14_00024Context_clazz_defined
#define org_webrtc_EglBase14_00024Context_clazz_defined
inline jclass org_webrtc_EglBase14_00024Context_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_EglBase14_00024Context,
      &g_org_webrtc_EglBase14_00024Context_clazz);
}
#endif

// Step 2: method stubs.

static base::subtle::AtomicWord
    g_org_webrtc_EglBase14_00024Context_isEgl14Context = 0;
static jboolean Java_Context_isEgl14Context(JNIEnv* env, const
    base::android::JavaRef<jobject>& context) {
  CHECK_CLAZZ(env, org_webrtc_EglBase14_00024Context_clazz(env),
      org_webrtc_EglBase14_00024Context_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, org_webrtc_EglBase14_00024Context_clazz(env),
      "isEgl14Context",
"("
"Lorg/webrtc/EglBase$Context;"
")"
"Z",
      &g_org_webrtc_EglBase14_00024Context_isEgl14Context);

  jboolean ret =
      env->CallStaticBooleanMethod(org_webrtc_EglBase14_00024Context_clazz(env),
          method_id, context.obj());
  jni_generator::CheckException(env);
  return ret;
}

#endif  // org_webrtc_EglBase14_JNI
