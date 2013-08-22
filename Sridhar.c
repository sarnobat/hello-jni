#include "Sridhar.h"
#include <jni.h>
#include <stdio.h>
#include <sys/time.h>

JNIEXPORT void JNICALL Java_Sridhar_printx (JNIEnv *env, jobject obj) {
	printf(".c :: Java_Sridhar_print() :: begin\n");
	struct timeval te; 
	gettimeofday(&te, NULL); // get current time
	long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // caculate milliseconds
	printf("milliseconds: %lld\n", milliseconds);
}

