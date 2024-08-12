# include <stdio.h>

// Not understood pg 21 code
void func(int* x, int* y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main(){
    int a = 10, b = 20;
    func(&a, &b);
    // swapRef2(a, b);
    printf("%s = %d, %s = %d \n", "a", a, "b", b);
}