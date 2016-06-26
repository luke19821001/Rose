// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base\android\jni_generator\jni_generator.py
// For
//     org/webrtc/JniHelper

#ifndef org_webrtc_JniHelper_JNI
#define org_webrtc_JniHelper_JNI

#include "sdk/android/src/jni/jni_generator_helper.h"

// Step 1: forward declarations.
JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_JniHelper[];
const char kClassPath_org_webrtc_JniHelper[] = "org/webrtc/JniHelper";

// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_webrtc_JniHelper_clazz =
    0;
#ifndef org_webrtc_JniHelper_clazz_defined
#define org_webrtc_JniHelper_clazz_defined
inline jclass org_webrtc_JniHelper_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_JniHelper,
      &g_org_webrtc_JniHelper_clazz);
}
#endif

// Step 2: method stubs.

static base::subtle::AtomicWord g_org_webrtc_JniHelper_getStringBytes = 0;
static base::android::ScopedJavaLocalRef<jbyteArray>
    Java_JniHelper_getStringBytes(JNIEnv* env, const
    base::android::JavaRef<jstring>& s) {
  CHECK_CLAZZ(env, org_webrtc_JniHelper_clazz(env),
      org_webrtc_JniHelper_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, org_webrtc_JniHelper_clazz(env),
      "getStringBytes",
"("
"Ljava/lang/String;"
")"
"[B",
      &g_org_webrtc_JniHelper_getStringBytes);

  jbyteArray ret =
static_cast<jbyteArray>(env->CallStaticObjectMethod(org_webrtc_JniHelper_clazz(env),
          method_id, s.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

static base::subtle::AtomicWord g_org_webrtc_JniHelper_getStringClass = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_JniHelper_getStringClass(JNIEnv* env) {
  CHECK_CLAZZ(env, org_webrtc_JniHelper_clazz(env),
      org_webrtc_JniHelper_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, org_webrtc_JniHelper_clazz(env),
      "getStringClass",
"("
")"
"Ljava/lang/Object;",
      &g_org_webrtc_JniHelper_getStringClass);

  jobject ret =
      env->CallStaticObjectMethod(org_webrtc_JniHelper_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_org_webrtc_JniHelper_getKey = 0;
static base::android::ScopedJavaLocalRef<jstring> Java_JniHelper_getKey(JNIEnv*
    env, const base::android::JavaRef<jobject>& entry) {
  CHECK_CLAZZ(env, org_webrtc_JniHelper_clazz(env),
      org_webrtc_JniHelper_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, org_webrtc_JniHelper_clazz(env),
      "getKey",
"("
"Ljava/util/Map$Entry;"
")"
"Ljava/lang/String;",
      &g_org_webrtc_JniHelper_getKey);

  jstring ret =
static_cast<jstring>(env->CallStaticObjectMethod(org_webrtc_JniHelper_clazz(env),
          method_id, entry.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_org_webrtc_JniHelper_getValue = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_JniHelper_getValue(JNIEnv* env, const base::android::JavaRef<jobject>&
    entry) {
  CHECK_CLAZZ(env, org_webrtc_JniHelper_clazz(env),
      org_webrtc_JniHelper_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, org_webrtc_JniHelper_clazz(env),
      "getValue",
"("
"Ljava/util/Map$Entry;"
")"
"Ljava/lang/String;",
      &g_org_webrtc_JniHelper_getValue);

  jstring ret =
static_cast<jstring>(env->CallStaticObjectMethod(org_webrtc_JniHelper_clazz(env),
          method_id, entry.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

#endif  // org_webrtc_JniHelper_JNI
