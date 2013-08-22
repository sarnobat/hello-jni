rm *class *jnilib
javac Sridhar.java
javah -jni Sridhar
gcc -dynamiclib Sridhar.c -I/System/Library/Frameworks/JavaVM.framework/Headers -o libSridhar.jnilib
java -Djava.library.path=. Sridhar
