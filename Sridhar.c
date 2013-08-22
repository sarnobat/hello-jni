#include "Sridhar.h"
#include <jni.h>
#include <stdio.h>

JNIEXPORT void JNICALL Java_Sridhar_print (JNIEnv *env, jobject obj) {
  printf(".c :: Java_Sridhar_print() :: begin\n");
}

