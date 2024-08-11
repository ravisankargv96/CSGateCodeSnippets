# include <stdio.h>

// find maximum of 3 nos using ternary operators
int max_of_three(int a, int b, int c){
    printf("\nmax_of_three\n");
    int maxi = a > b ? a > c ? a : c : b > c ? b : c;
    return maxi; 
}

int gate(int x, int y, int z){
    return x > y ? x > z ? x : z : y > z ? y : z ;
}

void gate2(){
    printf("\ngate2()\n");
    int m = 10;
    int n, n1;
    n = ++m;
    n1 = m++;
    n--;
    --n1;
    n -= n1;
    printf("%d", n);
}


void func1(){
    int a = 5;
    // getting output error.
    // printf("%d", ++(a++));
    // printf("%d", (a+1)++);
    
}

int func2(int a){
    return a;
}

void short_circuit_evaluation(){
    int a =1, b = 1, c = 1, d = 1;
    a = (b++ > 1 || c++ > 1) && d++ > 1;
    printf("%s = %d, %s = %d, %s = %d, %s = %d", "a", a, "b", b, "c", c, "d", d);
}

void short_circuit_evaluation2(){
    int i = 1, j = -1, k = -1, l = 3, m;
    m = ((i++ && j++ && k++) || (l++));
    printf("%s = %d, %s = %d, %s = %d, %s = %d, %s = %d", "i", i, "j", j, "k", k, "l", l);

    i = 1, j = -1, k = 0, l = 3, m;
    m = ((i++ && j++ && k++) || (l++));
    printf("%s = %d, %s = %d, %s = %d, %s = %d, %s = %d", "i", i, "j", j, "k", k, "l", l);

    i = 0, j = -1, k = -1, l = 3, m;
    m = ((i++ && j++ && k++) || (l++));
    printf("%s = %d, %s = %d, %s = %d, %s = %d, %s = %d", "i", i, "j", j, "k", k, "l", l);

}

void short_circuit_evaluation3(){
    int i = 1, j = 2, k = 3, m;
    m = i++ && ++j || ++k;
    printf("%s = %d, %s = %d, %s = %d, %s = %d", "i", i, "j", j, "k", k, "m", m);
}

void short_circuit_evaluation4(){
    int i = 2, j = 3, k = 4, m;
    m = ++i || (++j && ++k);
    printf("%s = %d, %s = %d, %s = %d, %s = %d", "i", i, "j", j, "k", k, "m", m);
}



int main(){
    int a = 3 > 4 ? 10 : 8 > 7 ? 20 : 30;
    int b = 5 > 4 ? 6 > 7 ? 10 : 20 : 30;
    int c = 2 > 3 ? 5 > 4 ? 10: 30 : 8 > 7 ? 30 : 40;
    int d = 6 > 7 ? 2 > 3 ? 10 : 6 > 8 ? -2 : 3 : 0 ? -1 : 6 > 8 ? 10 : 3 > 4 ? 10 : 20;
    printf("%s = %d", "a = ", a);
    printf("%s = %d", "b = ", b);
    printf("%s = %d", "c = ", c);
    printf("%s = %d", "d = ", d);

    //get the right values of x,y,z
    max_of_three(1, 2, 3);
    //pre & post increment.
    // increment
    a = 10;
    printf("%s = %d \n", "a", a);
    printf("%s = %d \n", "++a", ++a);

    a = 10;
    printf("%s = %d \n", "a", a);
    printf("%s = %d \n", "a++", a++);

    // decrement
    a = 10;
    printf("%s = %d \n", "a", a);
    printf("%s = %d \n", "--a", --a);

    a = 10;
    printf("%s = %d \n", "a", a);
    printf("%s = %d \n", "a--", a--);

    gate2();

    a = 5;
    printf("%s = %d, %s = %d, %s = %d", "++a", ++a,"++a", ++a,"++a", ++a); //not getting expected output
    a = 5;
    printf("%s = %d, %s = %d, %s = %d", "a+1", a+1,"a+2", a+2,"a+3", a+3);
    
    // need to code prev, afv in pg. 25

    return 0;
}