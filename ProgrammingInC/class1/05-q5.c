# include <stdio.h>

void func1(){
    int i, j, k, m;
    printf("\nEnter i, j, k values\n");
    m = scanf("%d %d %d", &i, &j, &k);
    printf("%d", m);
}

void func2(){
    int x, y, p;
    printf("\nEnter two proper integers\n");
    p = scanf("%d %d", &x, &y);
    if (p == 2){
        printf("Proper input given i.e. %d %d", x, y);
    } else{
        printf("Wrong input given");
    }
}

int main(){

    func1();
    func2();

    return 0;
}