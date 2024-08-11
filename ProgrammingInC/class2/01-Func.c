# include <stdio.h> // HeaderFile - Func reutilization.


//function - code reutilization.
void sum(){
    int a, b, sum= 0;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n",sum);
}

/**
 * Declaration:
 * Functions whose definitions are written after main() block should provide declaration.
 * Here it's add
 */
int add(int, int); // declaration
int main(){
    sum();
    sum();

    int x = 10, y = 20, z;
    z = add(x, y); // calling
    printf("%d", z); 
    return 0;
}

int add(int a, int b){ // definition
    int c;
    c = a + b;
    return c;
}