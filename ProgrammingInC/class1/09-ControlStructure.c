# include <stdio.h>

void func1(){
    int x = 5, y = 10;
    if(x != 5){
        if (y == 10){
            printf("Hi");
        }
    } else{
        printf("Hello");
    }
}

void func2(){
    int i = 1;
    while( i <= 10){
        printf("%d", i);
        i++;
    }
}

void func3(){
    int i = 1;
    do{
        printf("%d", i);
        i++;
    } while(i <= 10);
}

void func4(){
    int i;
    for(i = 1; i <= 10; printf("%d", i++));
}

void func5(){
    int x = 5;
    while(x++ <= 7);
    printf("%d",x);
}

void func6(){
    int i = 1;
    do{
        while(i++ < 1);
    } while(i++ <= 2);
    printf("%d", i);
}

int main(){
    
    return 0;
}