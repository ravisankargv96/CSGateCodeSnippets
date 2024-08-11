# include <stdio.h>

/**
 * Operator, meaning
 * & , Bitwise AND
 * | , Bitwise OR
 * ^ , Bitwise XOR
 * << , Left Shift
 * >> , Right Shift
 * ~ , Bitwise Not (Compliment)
 */
void func(){
    printf("\nExecuting func()\n");
    int a = 25, b = 12;
    printf("%d", a & b);
    printf("%d", a | b);
}

void func2(){
    int i = 2;
    i = ~i;
    printf("%d", i);

    i = 5;
    i = ~i;
    printf("%d", i);
}

//left shift (<<)

void func3(){
    printf("\n func3() \n");
    int x = 2;
    printf(" %s = %d, %s = %d, %s = %d", "x", x, "x<<1", x<<1, "x<<2", x<<2);

    x = 5;
    printf(" %s = %d, %s = %d, %s = %d", "x", x, "x<<1", x<<1, "x<<2", x<<2);

    /**
     * x = x << k
     * x = x * 2^k
     * */

    x = 2;
    int k = 3;
    printf("%s = %d", "x << k", x<<k);
}

//right shift (>>)

void func3(){
    printf("\n func3() \n");
    int x = 20;
    printf(" %s = %d, %s = %d, %s = %d", "x", x, "x>>1", x>>1, "x>>2", x>>2);

    /**
     * x = x >> k
     * x = x / 2^k
     * */

    x = 20;
    int k = 3;
    printf("%s = %d", "x >> k", x>>k);
}

void func4(){
    // How many times string "GATECSE2025" will print
    printf("\n func4() \n");
    int x = 4096;
    while(x){
        if (x & 1){
            printf("GATECSE2025");
            x >> 1;
        }
    }
}


int main(){
    
    return 0;
}