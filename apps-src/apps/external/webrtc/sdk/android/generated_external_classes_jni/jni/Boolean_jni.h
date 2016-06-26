// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     java/lang/Boolean

#ifndef java_lang_Boolean_JNI
#define java_lang_Boolean_JNI

#include "sdk/android/src/jni/jni_generator_helper.h"

// Step 1: forward declarations.
JNI_REGISTRATION_EXPORT extern const char kClassPath_java_lang_Boolean[];
const char kClassPath_java_lang_Boolean[] = "java/lang/Boolean";

// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_java_lang_Boolean_clazz = 0;
#ifndef java_lang_Boolean_clazz_defined
#define java_lang_Boolean_clazz_defined
inline jclass java_lang_Boolean_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_java_lang_Boolean,
      &g_java_lang_Boolean_clazz);
}
#endif

namespace JNI_Boolean {

// Step 2: method stubs.

static base::subtle::AtomicWord g_java_lang_Boolean_parseBoolean = 0;
static jboolean Java_Boolean_parseBoolean(JNIEnv* env, const
    base::android::JavaRef<jstring>& p0) __attribute__ ((unused));
static jboolean Java_Boolean_parseBoolean(JNIEnv* env, const
    base::android::JavaRef<jstring>& p0) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "parseBoolean",
      "(Ljava/lang/String;)Z",
      &g_java_lang_Boolean_parseBoolean);

  jboolean ret =
      env->CallStaticBooleanMethod(java_lang_Boolean_clazz(env),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_booleanValue = 0;
static jboolean Java_Boolean_booleanValue(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static jboolean Java_Boolean_booleanValue(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Boolean_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_lang_Boolean_clazz(env),
      "booleanValue",
      "()Z",
      &g_java_lang_Boolean_booleanValue);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_valueOfJLB_Z = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_Boolean_valueOfJLB_Z(JNIEnv* env, jboolean p0) __attribute__
    ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_Boolean_valueOfJLB_Z(JNIEnv* env, jboolean p0) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "valueOf",
      "(Z)Ljava/lang/Boolean;",
      &g_java_lang_Boolean_valueOfJLB_Z);

  jobject ret =
      env->CallStaticObjectMethod(java_lang_Boolean_clazz(env),
          method_id, p0);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_lang_Boolean_valueOfJLB_JLS = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_Boolean_valueOfJLB_JLS(JNIEnv* env, const
    base::android::JavaRef<jstring>& p0) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_Boolean_valueOfJLB_JLS(JNIEnv* env, const
    base::android::JavaRef<jstring>& p0) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "valueOf",
      "(Ljava/lang/String;)Ljava/lang/Boolean;",
      &g_java_lang_Boolean_valueOfJLB_JLS);

  jobject ret =
      env->CallStaticObjectMethod(java_lang_Boolean_clazz(env),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_lang_Boolean_toStringJLS_Z = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_Boolean_toStringJLS_Z(JNIEnv* env, jboolean p0) __attribute__
    ((unused));
static base::android::ScopedJavaLocalRef<jstring>
    Java_Boolean_toStringJLS_Z(JNIEnv* env, jboolean p0) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "toString",
      "(Z)Ljava/lang/String;",
      &g_java_lang_Boolean_toStringJLS_Z);

  jstring ret =
static_cast<jstring>(env->CallStaticObjectMethod(java_lang_Boolean_clazz(env),
          method_id, p0));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_java_lang_Boolean_toStringJLS = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_Boolean_toStringJLS(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jstring>
    Java_Boolean_toStringJLS(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Boolean_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_lang_Boolean_clazz(env),
      "toString",
      "()Ljava/lang/String;",
      &g_java_lang_Boolean_toStringJLS);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_java_lang_Boolean_hashCodeI = 0;
static jint Java_Boolean_hashCodeI(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static jint Java_Boolean_hashCodeI(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Boolean_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_lang_Boolean_clazz(env),
      "hashCode",
      "()I",
      &g_java_lang_Boolean_hashCodeI);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_hashCodeI_Z = 0;
static jint Java_Boolean_hashCodeI_Z(JNIEnv* env, jboolean p0) __attribute__
    ((unused));
static jint Java_Boolean_hashCodeI_Z(JNIEnv* env, jboolean p0) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "hashCode",
      "(Z)I",
      &g_java_lang_Boolean_hashCodeI_Z);

  jint ret =
      env->CallStaticIntMethod(java_lang_Boolean_clazz(env),
          method_id, p0);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_equals = 0;
static jboolean Java_Boolean_equals(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) __attribute__ ((unused));
static jboolean Java_Boolean_equals(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Boolean_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_lang_Boolean_clazz(env),
      "equals",
      "(Ljava/lang/Object;)Z",
      &g_java_lang_Boolean_equals);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_getBoolean = 0;
static jboolean Java_Boolean_getBoolean(JNIEnv* env, const
    base::android::JavaRef<jstring>& p0) __attribute__ ((unused));
static jboolean Java_Boolean_getBoolean(JNIEnv* env, const
    base::android::JavaRef<jstring>& p0) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "getBoolean",
      "(Ljava/lang/String;)Z",
      &g_java_lang_Boolean_getBoolean);

  jboolean ret =
      env->CallStaticBooleanMethod(java_lang_Boolean_clazz(env),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_compareToI_JLB = 0;
static jint Java_Boolean_compareToI_JLB(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) __attribute__ ((unused));
static jint Java_Boolean_compareToI_JLB(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Boolean_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_lang_Boolean_clazz(env),
      "compareTo",
      "(Ljava/lang/Boolean;)I",
      &g_java_lang_Boolean_compareToI_JLB);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_compare = 0;
static jint Java_Boolean_compare(JNIEnv* env, jboolean p0,
    jboolean p1) __attribute__ ((unused));
static jint Java_Boolean_compare(JNIEnv* env, jboolean p0,
    jboolean p1) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "compare",
      "(ZZ)I",
      &g_java_lang_Boolean_compare);

  jint ret =
      env->CallStaticIntMethod(java_lang_Boolean_clazz(env),
          method_id, p0, p1);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_logicalAnd = 0;
static jboolean Java_Boolean_logicalAnd(JNIEnv* env, jboolean p0,
    jboolean p1) __attribute__ ((unused));
static jboolean Java_Boolean_logicalAnd(JNIEnv* env, jboolean p0,
    jboolean p1) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "logicalAnd",
      "(ZZ)Z",
      &g_java_lang_Boolean_logicalAnd);

  jboolean ret =
      env->CallStaticBooleanMethod(java_lang_Boolean_clazz(env),
          method_id, p0, p1);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_logicalOr = 0;
static jboolean Java_Boolean_logicalOr(JNIEnv* env, jboolean p0,
    jboolean p1) __attribute__ ((unused));
static jboolean Java_Boolean_logicalOr(JNIEnv* env, jboolean p0,
    jboolean p1) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "logicalOr",
      "(ZZ)Z",
      &g_java_lang_Boolean_logicalOr);

  jboolean ret =
      env->CallStaticBooleanMethod(java_lang_Boolean_clazz(env),
          method_id, p0, p1);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_logicalXor = 0;
static jboolean Java_Boolean_logicalXor(JNIEnv* env, jboolean p0,
    jboolean p1) __attribute__ ((unused));
static jboolean Java_Boolean_logicalXor(JNIEnv* env, jboolean p0,
    jboolean p1) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, java_lang_Boolean_clazz(env),
      "logicalXor",
      "(ZZ)Z",
      &g_java_lang_Boolean_logicalXor);

  jboolean ret =
      env->CallStaticBooleanMethod(java_lang_Boolean_clazz(env),
          method_id, p0, p1);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_compareToI_JLO = 0;
static jint Java_Boolean_compareToI_JLO(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) __attribute__ ((unused));
static jint Java_Boolean_compareToI_JLO(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_lang_Boolean_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_lang_Boolean_clazz(env),
      "compareTo",
      "(Ljava/lang/Object;)I",
      &g_java_lang_Boolean_compareToI_JLO);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_lang_Boolean_ConstructorJLB_Z = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_Boolean_ConstructorJLB_Z(JNIEnv* env, jboolean p0) __attribute__
    ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_Boolean_ConstructorJLB_Z(JNIEnv* env, jboolean p0) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_lang_Boolean_clazz(env),
      "<init>",
      "(Z)V",
      &g_java_lang_Boolean_ConstructorJLB_Z);

  jobject ret =
      env->NewObject(java_lang_Boolean_clazz(env),
          method_id, p0);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_lang_Boolean_ConstructorJLB_JLS = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_Boolean_ConstructorJLB_JLS(JNIEnv* env, const
    base::android::JavaRef<jstring>& p0) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject>
    Java_Boolean_ConstructorJLB_JLS(JNIEnv* env, const
    base::android::JavaRef<jstring>& p0) {
  CHECK_CLAZZ(env, java_lang_Boolean_clazz(env),
      java_lang_Boolean_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, java_lang_Boolean_clazz(env),
      "<init>",
      "(Ljava/lang/String;)V",
      &g_java_lang_Boolean_ConstructorJLB_JLS);

  jobject ret =
      env->NewObject(java_lang_Boolean_clazz(env),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace JNI_Boolean

#endif  // java_lang_Boolean_JNI