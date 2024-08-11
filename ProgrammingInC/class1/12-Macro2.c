/**
 * 12 macros in c
 * # include, 
 * # define, # if, # else, # elif, # endif
 * # if def, # ifndef, # undef
 * # pragma, # error, # line
 * examples are taken from chatGPT
 */

// # include
# include <stdio.h>
void func1(){
    printf("Hello, world! \n");
}

// # define, # if, # else, # elif, # endif
#define LEVEL 2

void func2() {
#if LEVEL == 1
    printf("Level 1\n");
#elif LEVEL == 2
    printf("Level 2\n");
#else
    printf("Other Level\n");
#endif
}

// # if def
#define VERSION_2

void func3() {
#ifdef VERSION_2
    printf("Version 2 is defined.\n");
#endif
}

// #ifndef
#ifndef FEATURE
#define FEATURE
#endif

void func4() {
    printf("Feature is defined.\n");
}

// #undef
#define TEMP 100

void func5() {
    printf("Temp: %d\n", TEMP);
#undef TEMP
    // TEMP is now undefined
    return 0;
}

// #pragma
#pragma message("Compiling this program...")

void func6(){
    printf("Hello, world!");
}

// #error
#if __STDC_VERSION__ < 199901L
#error "This program requires C99 or later."
#endif

void func7() {
    printf("C99 features are supported.\n");
    return 0;
}

#line 45 "11-Macro.c"
void func8() {
    printf("This line is marked as line 45 in 11-Macro.c\n");
    return 0;
}


int main(){
    func();
    func2();
    func3();
    func4();

    func5();
    func6();
    func7();
    func8();
}





