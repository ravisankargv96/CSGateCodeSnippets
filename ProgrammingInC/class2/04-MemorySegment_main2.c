# include <stdio.h>

int main(){
    int i = 5;
    printf("%d", --i);
    if(i){
        main(); //leads an infinite loop
    }
    return 0;
}