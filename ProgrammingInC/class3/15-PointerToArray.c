# include <stdio.h>

void func(){
    printf("\nExecuting func()\n");
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = a; //&a[0]
    ++ptr;
    ++ptr;
    --*ptr;
    printf("%s = %d", "*ptr", *ptr);
}

void func2(){
    printf("\nExecuting func2()\n");
    int a[5] = {10, 20, 30, 40, 50};
    int *p1 = a;
    int *p2 = a + 4;
    printf("%s = %d", "p2 - p1", p2 - p1);
}

void func3(){
    printf("\nExecuting func3()\n");
    int a[5] = {10, 20, 30, 40, 50};
    printf("%s = %u \n", "&a", &a);
    printf("%s = %u \n", "*&a", *&a);
    printf("%s = %u \n", "a", a);
    printf("%s = %d \n", "*a", *a);

    // printf("%s = %d", "**a", **a); // error
    printf("%s = %u \n", "&a+1", &a+1);
    printf("%s = %u \n", "a+1", a+1);
    printf("%s = %d \n", "*a+1", *a+1);
    printf("%s = %d \n", "*(a+3)", *(a+3));
    printf("%s = %d \n", "a[2]", a[2]);
    printf("%s = %d \n", "*(a+2)", *(a+2));
    printf("%s = %d \n", "*(2 + a)", *(2 + a));
    printf("%s = %d \n", "**&a", **&a);
}

void func4(){
    printf("\nExecuting func4()\n");
    int a[5] = {10, 20, 30, 40, 50};
    printf("%s = %d","*(&a + 1) - a", *(&a + 1) - a);
    printf("%s = %d", "((&a + 1) - &a)", ((&a + 1) - &a));
}

void display(int* p, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d \t", p[i]);
    }
}

void func5(){
    printf("\nExecuting func5()\n");
    int a[5] = {10, 20, 30, 40, 50};
    display(a, 5);
}

int f(int* a, int n){
    if(n <= 0) return 0;
    else if(*a % 2 == 0) return *a + f(a+1, n-1);
    else return *a - f(a+1, n-1);
}

void gate(){
    int a[6] = {12, 7, 13, 4, 11, 6};
    printf("%s = %d", "f(a, 6)", f(a, 6));
}



int main(){
    func();
    func2();
    func3();
    func4();
    func5();
    gate();
    return 0;
}