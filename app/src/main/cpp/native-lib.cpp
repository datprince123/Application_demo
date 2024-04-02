#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

extern "C" jstring
Java_com_example_final_1app_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    TodoItem todoItem;
    todoItem.create("Sample Todo"); // Create a sample TodoItem
    std::string todoDescription = todoItem.getDescription();
    return env->NewStringUTF(todoDescription.c_str());
}