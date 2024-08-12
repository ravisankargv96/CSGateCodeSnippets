# include <stdio.h>

double x;

void show(){
    printf("\n%d\n",x);
}

void small(){
    double x;
    x = 0.125;
    show();
}

int main(){
    x = 0.25;
    show();
    small();
    return 0;
}