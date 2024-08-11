# include <stdio.h>

# define sqr(x) x*x;

# define X 3 // change the value of x to see highlighted portion
void func2(){
    printf("\n Executing func2() \n");
#if X == 3
    #define Y 3
#else
    #define Y 7
#endif
    printf("%d", Y);
}

# define ONE
void func3(){
    printf("\n Executing func3() \n");
#ifdef ONE
    printf("GATE");
#else
    printf("CSE");
#endif
}

# define fun func##4

void fun(){
    printf("\n Executing fun() \n");
    printf("Hi");
}


void func(){
    int a;
    a = sqr(3 + 2); // 3 + 2 * 3 +2 = 11
    printf("%s = %d", "a", a);
}





int main(){
    func();
    func2();
    func3();
    func4();
    return 0;
}