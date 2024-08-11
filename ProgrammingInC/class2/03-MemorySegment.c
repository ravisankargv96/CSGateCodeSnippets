# include <stdio.h>

void test(){
    auto int x = 10;
    printf("%d", x);
    x++;
}

/**
 * register variables are allocated in register memory
 * they are faster as compared to auto variables, 
 * hence they will be used in loops & functions
 * */

void func(){
    register int i;
    for(i = 1; i <= 10; i++){
        printf("%d", i);
    }
}

// static

void test2(){
    static int x = 10;
    printf("%d", x);
    x++;
}

int main(){
    test();
    test();
    test();

    printf("\nOutput of Registry\n");
    func();

    printf("\nOutput of Static\n");
    test2();
    test2();
    test2();
    return 0;
}