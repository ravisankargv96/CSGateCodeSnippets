# include <stdio.h>

void func(){
    printf("\noutput: func()\n");
    int a = 5;
    if (a = 8){
        printf("Hi");
    } else{
        printf("Hello");
    }
    printf("%d", a);
}

// printf() always returns integer i.e. No. of symbols displayed on the screen.
void func2(){
    printf("\noutput: func2()\n");
    int x;
    x = printf("Hello");
    printf("%d", x);
}

void func3(){
    printf("\noutput: func3()\n");
    int x;
    x = (printf("Hello"), printf("friends"));
    printf("%d", x);
}

int main(){
    /**
     * Format specifiers
     * %d - int
     * %f - float
     * %c - char
     * %s - string
     * %u - address
     */
    //eg1.
    printf("%f \n",2 * 3 /4 + 2.0/ 5 + 8 / 5);

    func();
    func2();
    func3();

    return 0;
}