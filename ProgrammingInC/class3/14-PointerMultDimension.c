# include <stdio.h>

void func(){
    int a = 10, *b, **c, ***d;
    b = &a;
    c = &b;
    d = &c;
    printf("%s = %d\t%s = %d\t%s = %d\t%s = %d\t", "a", a, "b", b, "c", c, "d", d);
    printf("%s = %d\t%s = %d\t%s = %d\t", "*b", *b, "*c", *c, "*d", *d);
    printf("%s = %d\t%s = %d\t%s = %d\t", "**c", **c, "**d", **d, "***d", ***d);
}

int f(int x, int *py, int **ppz){
    int y, z;
    **ppz = **ppz + 1;
    z = **ppz;
    *py = *py + 2;
    y = *py;
    x = x + 3;
    return x + y + z;
}

void gate(){
    printf("\nExecuting gate()\n");
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    printf("%d", f(c, b, a));
}

void func2(){
    printf("\nExecuting func2()\n");
    int a;
    int* b = &a;
    scanf("%d", b);
    printf("%d", *b + 10);
}

int main(){
    func();
    gate();
    func2();
    return 0;
}