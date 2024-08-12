# include <stdio.h>

void func2(int* p, int* q){
    p = q;
    *p = 25;
    *q = 50;
}

int a = 10, b = 20;

void func1(){
    func2(&a, &b);
    printf("%s = %d, %s = %d \n", "a", a, "b", b);
}

int x;

void Q(int z){
    z = z + x;
    printf("%s = %d \n", "z", z);
}

void P(int* y){
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    printf("%s = %d \n", "x", x);
}

void func3(){
    x = 5;
    P(&x);
    printf("%s = %d \n", "x", x);
}

int a1 = 3;
void n(int x){
    x = x + a;
    printf("%s = %d \n", "x", x);
}

void m(int y){
    a1 = 1;
    a1 = y - a1;
    n(a1);
    printf("%s = %d \n", "a1", a1);
}

void gate(){
    m(a1);
}
int main(){
    func1();
    func3();
    gate(); // getting output differently
    return 0;
}