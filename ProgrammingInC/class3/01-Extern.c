# include <stdio.h>

// comment other section of main, since some of them are error.
int main5();
int a = 8;
int main(){
    extern int a;
    extern int a;
    extern int a;
    printf("%d", a);
    printf("\nHello\n");
    a = 20;
    printf("%d", a);
    main5();
    return 0;
}

int main1(){
    extern int a1;
    printf("%d", a1);
    a1 = 20;
    printf("%d", a1);
}

int main2(){
    extern int a;
    printf("Hello");
}

int main3(){
    extern int a1;
    printf("%d",a1); //error
}

int a4 = 5;
int main4(){
    extern int a4;
    extern int a4;
    extern int a4;
    printf("%d",a4);
    return 0;
}

int main5(){
    extern int a5;
    printf("%d",a5);
}

int a5 = 10;

int main6(){
    // error
    int a6;
    int a6;
    int a6;
}

int main7(){
    extern int a = 10; // error
    printf("%d", a);
}

int a8;
int main8(){
    extern int a8;
    printf("%d", a8);
}