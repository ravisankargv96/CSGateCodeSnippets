# include <stdio.h>

void display(int* p, int n){
    int i;
    for(i = 0; i<n; i++){
        printf("%d", p[i]);
    }
}

void func(){
    int a[5] = {10, 20, 30, 40, 50};
    display(a,5);
}

int f(int* a, int n){
    if(n <= 0) return 0;
    else if(*a %2 == 0){
        return *a + f(a+1, n-1);
    } else{
        return *a - f(a+1, n-1);
    }

}

void gate(){
    int a[6] = {12, 7, 13, 4, 11, 6};
    printf("%d", f(a, 6));
}

void func2(){
    printf("\nExecuting func2()\n");
    int a[5] = {10, 20, 30, 40, 50};
    int* p[5] = {a, a+1, a+2, a+3, a+4};
    int** ptr;
    ptr = p;

    printf("%s = %u \n", "a", a);
    printf("%s = %u \n", "p", p);
    printf("%s = %u \n", "ptr", ptr);
    printf("%s = %u \n", "a+1", a+1);
    printf("%s = %u \n", "p+1", p+1);
    printf("%s = %u \n", "ptr+1", ptr+1);
    printf("%s = %d \n", "*a", *a);
    printf("%s = %u \n", "*p", *p);
    printf("%s = %u \n", "*ptr", *ptr);
    printf("%s = %u \n", "*ptr-a", *ptr-a);
}

void func3(){
    int a[5] = {0, 1, 2, 3, 4};
    int* p[5] = {a, a+1, a+2, a+3, a+4};
    int** ptr = p;
    ptr++;
    printf("%s = %u, \t %s = %u, \t %s = %u, \t", ptr-p, "ptr-p",*ptr-a, "*ptr-a",**ptr, "**ptr");
    *ptr++;
    printf("%s = %u, \t %s = %u, \t %s = %u, \t", ptr-p, "ptr-p",*ptr-a, "*ptr-a",**ptr, "**ptr");
    *++ptr;
    printf("%s = %u, \t %s = %u, \t %s = %u, \t", ptr-p, "ptr-p",*ptr-a, "*ptr-a",**ptr, "**ptr");
    ++*ptr;
    printf("%s = %u, \t %s = %u, \t %s = %u, \t", ptr-p, "ptr-p",*ptr-a, "*ptr-a",**ptr, "**ptr");
}

void func4(){
    int a[5] = {10, 20, 30, 40, 50};
    int* p[5] = {a + 2, a + 1, a+ 3, a, a+4};
    int** ptr = p;
    **ptr++;
    printf("%s = %u, \t %s = %u, \t %s = %u, \t", ptr-p, "ptr-p",*ptr-a, "*ptr-a",**ptr, "**ptr");
    *++*ptr;
    printf("%s = %u, \t %s = %u, \t %s = %u, \t", ptr-p, "ptr-p",*ptr-a, "*ptr-a",**ptr, "**ptr");
    ++**ptr;
    printf("%s = %u, \t %s = %u, \t %s = %u, \t", ptr-p, "ptr-p",*ptr-a, "*ptr-a",**ptr, "**ptr");
}

void func5(){
    int a[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    printf("%s = %u", "&a", &a);
    printf("%s = %u", "a", a);
    printf("%s = %u", "*a", *a);
    printf("%s = %d", "**a", **a);

    // printf("%s = %u", "***a", ***a); // error
    printf("%s = %d", "***&a", ***&a);
    printf("%s = %u", "&a+1", &a+1);
    printf("%s = %u", "a+1", a+1);
    
    printf("%s = %u", "*(a+1)", *(a+1));
    printf("%s = %d", "*(*(a+1))", *(*(a+1)));
    printf("%s = %u", "*a+1", *a+1);
    printf("%s = %d", "**a+1", **a+1);
    
    printf("%s = %u", "*(a+2)+1", *(a+2)+1);
}

int main(){
    func();
    gate();
    func2();
    func3();
    func4();
    func5();
    return 0;
}