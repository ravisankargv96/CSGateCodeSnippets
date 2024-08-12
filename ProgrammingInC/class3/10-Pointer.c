# include <stdio.h>

void func2(){
    int a = 10;
    int* b = &a;
    printf("%s = %d\n", "a", a);
    printf("%s = %u\n", "&a", &a);
    printf("%s = %d\n", "*&a", *&a);
    
    printf("%s = %u\n", "b", b);
    printf("%s = %d\n", "*b", *b);
    // printf("%s = %d\n", "**b", **b); // error, only valid for >= 2-d arrays
    
}
void func1(){
    int a = 10;
    int* b = &a;
    printf("%s = %d\n", "b", *b);
    printf("%s = %d\n", "a*b", a**b);
}

int main(){
    func1();
    func2();
    return 0;
}