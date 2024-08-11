# include <stdio.h>

void gfg(int x){
    printf("%d", x);
    if (x <= 2){
        gfg(x+1);
    }
    printf("%d", x);
}


void foo(int n, int *psum){
    int k = 0, j = 0;
    if(n == 0){
        return;
    } 
    k = n%10; 
    j = n/10;
    *psum = *psum + k;
    foo(j, psum);
}

void A(int n){
    if(n <= 1){
        return;
    } else{
        A(n-2);
        printf("%d",n);
        A(n-1);
        printf("%d",n-2);
    }
}

int gate(int p){
    if (p > 100){
        return p - 10;
    } else{
        return gate(gate(p + 11));
    }
}

int main(){
    gfg(1);

    printf("\nDigits Sum in Recursive approach\n");
    int a = 2048, sum = 0;
    foo(a, &sum);
    printf("%d", sum);

    printf("\nWhat is the Output of A(4)?\n");
    A(4);

    printf("\nWhat is the return value of gate(95)?\n");
    printf("%s = %d", "gate(95)", gate(95));

    return 0;
}