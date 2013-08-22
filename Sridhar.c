#include "Sridhar.h"
#include <jni.h>
#include <stdio.h>
#include <sys/time.h>

JNIEXPORT void JNICALL Java_Sridhar_printx (JNIEnv *env, jobject obj) {
	// Simple print statement
	printf(".c :: Java_Sridhar_print() :: begin\n");
	
	// Call an existing library (from time.h)
	struct timeval te; 
	gettimeofday(&te, NULL); // get current time
	long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // caculate milliseconds
	printf(".c :: Java_Sridhar_print() :: current time is %lld milliseconds\n", milliseconds);
}

