# include <stdio.h>

int a = 1, b = 2;
void E(){
    int b = 6;
    printf("%s = %d, %s = %d", "a", a, "b", b);
    a = 7, b = 8;
}
void D(){
    printf("%s = %d, %s = %d", "a", a, "b", b);
    a = 3, b = 4;
    printf("%s = %d, %s = %d", "a", a, "b", b);
    E();
}
void C(){
    int a = 50;
    printf("%s = %d, %s = %d", "a", a, "b", b);
    D();
    printf("%s = %d, %s = %d", "a", a, "b", b);
}
int main(){
    int a = 20, b = 30;
    printf("%s = %d, %s = %d", "a", a, "b", b);
    C();
    printf("%s = %d, %s = %d", "a", a, "b", b);
    D();
}