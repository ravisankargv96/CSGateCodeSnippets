# include <stdio.h>

int a = 5;
void B();
void C();
void D();

int main(){
    int a = 10;
    B();
}

void B(){
    int a = 20;
    C();
}

void C(){
    int a = 30;
    D();
}

void D(){
    int a = 10;
    printf("%d", a);
}
