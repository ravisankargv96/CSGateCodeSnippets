# include <stdio.h>
int x = 1;
int reset(){
    return x;
}

int next(int y){
    return (y = x++);
}

int last(int y){
    static int x = 10;
    return (y = x--);
}

int new(int x){
    static int y = 1;
    return (x += y++);
}

void gate(){
    int x, y;
    x = reset();
    for(y = 1; y <= 3; y++){
        printf("%s = %d, %s = %d", "x", x, "y", y);
        printf("%s = %d", "next(x)", next(x));
        printf("%s = %d", "last(x)", last(x));
        printf("%s = %d", "new(x + y)", new(x + y));
    }
}

int funcf(int x){
    int y;
    y = funcg(x);
    return y;
}

int funcg(int x){
    static int y = 10;
    y += 1;
    return x + y;
}

void gate2(){
    static int y  = 10, x = 5, c;
    for(c = 1; c <= 2; c++){
        y += funcf(x) + funcg(x);
        printf(y);
    }
}


int main(){
    printf("\n What's the output\n");
    gate();
    printf("\n What's the output\n");
    gate2();
    return 0;
}