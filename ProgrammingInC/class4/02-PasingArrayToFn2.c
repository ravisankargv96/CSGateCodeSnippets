# include <stdio.h>

void func(){
    int a[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    printf("%s = %d", "a[1][1]", a[1][1]);
    printf("%s = %d", "*(a+1)[1]", *(a+1)[1]);
    printf("%s = %d", "*(*(a+1)+1)", *(*(a+1)+1));

    printf("%s = %d", "a[2][1]", a[2][1]);
    printf("%s = %d", "*(a+2)[1]", *(a+2)[1]);
    printf("%s = %d", "*(*(a+2)+1)", *(*(a+2)+1));

    int (*p)[3][3] = &a;
    printf("%s = %d", "p + 1", p + 1);
    printf("%s = %d", "*(&a + 1) - a", *(&a + 1) - a);
    printf("%s = %d", "**(&a + 1) - *a", **(&a + 1) - *a);

}

void gate(){
    printf("\nExecuting gate()\n");
    int a[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    printf("%s = %d \n", "*(*(a + **a + 2)+ 3)",*(*(a + **a + 2)+ 3));
}

void gate2(){
    printf("\nExecuting gate2()\n");
    int a[5][3];
    // initalizing values
    int val = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            val += 10;
            a[i][j] = val;
        }
    }

    printf("%s = %d", "( (a == a[0]) && (a[0] == *a) )", ( (a == a[0]) && (a[0] == *a) ));
}

void func4(){
    printf("\nExecuting func4()\n");
    int a[2][3][4];
    //initializing values
    int val = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                a[i][j][k] = val;
                val += 1;
            }
        }
    }

    printf("%s = %u \n", "&a", &a);
    printf("%s = %u \n", "a", a);
    printf("%s = %d \n", "*a", *a);
    printf("%s = %d \n", "**a", **a);
    
    printf("%s = %d \n", "***a", ***a);
    // printf("%s = %d", "****a", ****a);
    printf("%s = %d \n", "&a + 1", &a + 1);
    printf("%s = %d \n", "a + 1", a + 1);

    printf("%s = %d \n", "*(a + 1)", *(a + 1));
    printf("%s = %d \n", "**(a + 1)", **(a + 1));
    printf("%s = %d \n", "*a + 1", *a + 1);
    printf("%s = %d \n", "**a + 1", **a + 1);

    printf("%s = %d \n", "*(a + 1) + 1", *(a + 1) + 1);
    printf("%s = %d \n", "*(*(a + 1) + 2) + 2", *(*(a + 1) + 2) + 2);

    //Questions
    printf("\nExecuting Questions()\n");

    printf("%s = %d \n", "*(&a + 1) - a", *(&a + 1) - a);
    printf("%s = %d \n", "**(&a + 1) - *a", **(&a + 1) - *a);
    printf("%s = %d \n", "***(&a + 1) - **a", ***(&a + 1) - **a);

    printf("%s = %d \n", "a[1][1][1]", a[1][1][1]);
    printf("%s = %d \n", "*(a + 1)[1][1]", *(a + 1)[1][1]);
    printf("%s = %d \n", "*(*(a + 1) + 1)[1]", *(*(a + 1) + 1)[1]);
    printf("%s = %d \n", "*(*(*(a + 1) + 1) + 1)", *(*(*(a + 1) + 1) + 1));
}

void func5(){
    int a[2][3][2] = {
        {
            {1, 2},
            {9, 8},
            {3, 7}
        },
        {
            {2, 2},
            {1, 4},
            {2, 4}
        }
    };

    printf("%s = %d \n%s = %d \n%s = %d",
    "(a[1] - a[0])", (a[1] - a[0]), 
    "(a[1][0] - a[0][0])", (a[1][0] - a[0][0]), 
    "(a[1][0][0] - a[0][0][0])", (a[1][0][0] - a[0][0][0])
    );
}

void func6(){
    unsigned int x[4][3];

    // intializing values; Unable to initialize x = 2000 as address
    unsigned int val = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            x[i][j] = val;
            val += 1;
        }
    }

    printf("%s = %u \n %s = %u \n %s = %u \n", "x+3", x+3, "*(x + 3)", *(x + 3), "*(x + 2) + 3", *(x + 2) + 3);
}

int main(){
    func();
    gate();
    gate2();
    func4();
    func5();
    func6();
    return 0;
}