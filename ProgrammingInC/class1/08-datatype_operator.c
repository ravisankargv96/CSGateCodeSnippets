# include <stdio.h>

void func1(){
    char c = 125;
    c = c + 10;
    printf("%d", c);
}

void func2(){
    char i;
    for(i = 0; i <= 127; i++){
        printf("%d", i);
    }
}

void func3(){
    char i;
    for(i = 0; ++i; i > 0){
        printf("%d", i);
    }
}

void func4(){
    // size of double >= size of float
    float a = 0.5, b = 0.7;
    if (b < 0.7){
        if (a < 0.5){
            printf("Hi");
        } else{
            printf("Hello");
        }
    } else{
        printf("Bye");
    }
}

int main(){

    return 0;
}