# include <stdio.h>

void func1(){
    int x;
    scanf("%d", &x); //x = 0, 1, 2
    switch(x){
        case 0: x = x + 1;
        case 1:{
            x = x + 2;
        }
        default: x = x + 3;
    }
    printf("%d", x);
}

void func2(){
    int x;
    scanf("%d", &x); // x = 0,1,2,3
    switch(x){
        case 0:{
            x = x + 1;
            break;
        }
        default: x = x - 1;
        case 1:{
            x = x + 10;
            break;
        }
        case 2:{
            x = x + 100;
        }
        printf("%d", x);
    }
}

void gate(){
    int i;
    for(i = 1; i<= 25; i++){
        switch(i){
            case 0: i += 5;
            case 1: i += 3;
            case 2: i += 4;
            default: {
                i += 5;
                break;
            }
            printf("%d", i);
        }
    }
}

int main() {

    return 0;
}