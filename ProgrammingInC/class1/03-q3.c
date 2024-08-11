# include <stdio.h>
# include <stdbool.h>

// expressions evaluate left to right.
int main(){
    printf("exp: 9 * 3 / 2 % 5 = %d \n", 9*3/2%5);
    printf("exp: 9 - 5 + 4 = %d \n", 9-5+4);
    
    /**
     * if both are integers then output will be integer,
     * if any one is float then output will be float
     */ 
    
    printf("exp: 5/2 = %d \n", 5/2);
    printf("exp: 5.0/2 = %f \n", 5.0/2);
    printf("exp: 5.0/2.0 = %f \n",5.0/2.0);
    printf("exp: 2/5 = %d \n",2/5);
    printf("exp: 2.0/5 = %f \n",2.0/5);
    printf("exp: 2.0/5.0 = %f \n",2.0/5.0);

    printf("exp: 5/2 = %d \n", (int)(5/2));
    printf("exp: 5.0/2 = %d \n", (int)(5.0/2));
    printf("exp: 5.0/2.0 = %d \n",(int)(5.0/2.0));
    printf("exp: 2/5 = %d \n",(int)(2/5));
    printf("exp: 2.0/5 = %d \n",(int)(2.0/5));
    printf("exp: 2.0/5.0 = %d \n",(int)(2.0/5.0));

    printf("exp: 5/2 = %f \n", (float)(5/2));
    printf("exp: 5.0/2 = %f \n", (float)(5.0/2));
    printf("exp: 5.0/2.0 = %f \n",(float)(5.0/2.0));
    printf("exp: 2/5 = %f \n",(float)(2/5));
    printf("exp: 2.0/5 = %f \n",(float)(2.0/5));
    printf("exp: 2.0/5.0 = %f \n",(float)(2.0/5.0));

    /**
     * Relation & logical operators
     * 1, 10, -10, 6.5, -3.5, 0.6
     * 0, 0.0, \0 Null
     * Here 1 = true, 0 = false
     */

    printf("exp: 1 = %d \t 10 = %d \t -10 = %d \t 6.5 = %d \t -3.5 = %d \t 0.6 = %d \n", (bool)1, (bool)10, (bool)-10, (bool)6.5, (bool)-3.5, (bool)0.6);
    printf("0 = %d, 0.0 = %d, \\0 = %d, NULL = %d",0, 0.0, '\0', NULL);

    /**
     * Modulus Operator(%)
     * Modulus always gives numerator sign
     * Modulus doesn't work on float values, it works only on the integers
     * If the value is small without sign, then it gives same value as output. Since it's quotient is 0
     * */
    printf("%s = %d", "15%7", 15%7);
    printf("%s = %d", "-15%+7", -15%+7);
    printf("%s = %d", "+15%-7", +15%-7);
    printf("%s = %d", "-15%-7", 15%7);
    // printf("%s = %d", "-15.5%+7", -15.5%+7); // throws error
    // printf("%s = %d", "+15.5%+7", +15.5%+7);
    printf("%s = %d", "-7 % 15", -7 % 15);
    printf("%s = %d", "+7 % -15", +7 % -15);

    return 0;
}