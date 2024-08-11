# include <stdio.h>

int sample(int n){
    static int s;
    if (n == 2) return s;
    s += 5;
    n++;
    return sample(n);
}

int gate(int n){
    static int i = 1;
    if(n >= 5){
        return n;
    }
    n = n + i;
    i++;
    return gate(n);
}

int gate2(int n){
    static int r;
    if(n <= 0) return 1;
    if (n > 3){
        r = n;
        return f(n-2) + 2;
    }
    return f(n-1) + r;
}

int incr_gate3(int i){
    static int count;
    count = count + i;
    return count;
}

void func_gate(){
    printf("\nExecuting func_gate()\n");
    int i, j;
    for(i = 0; i <= 4; i++){
        j = incr_gate3(i);
    }
    printf("%d", j);
}

int f_gate(int x){
    int y;
    y = g_gate(x);
    return x + y;
}

int g_gate(int x){
    static int y = 5;
    y = y + 7;
    return x + y;
}

void func_gate2(){
    int i, x = 5, y = 10;
    for(i = 1; i <= 2; i++){
        y = y + f_gate(x) + g_gate(x);
        printf("%s = %d", "y", y);
    }
}

int r(){
    static int num = 7;
    return num--;
}

void func3(){
    for(r(); r(); r()){
        printf("%d", r());
    }
}

void count(int n){
    static int d = 1;
    printf("%d", n);
    printf("%d", d);
    d++;
    if(n > 1) count(n-1);
    printf("%d", d);
}

void func4(){
    count(3);
}

int main(){
    printf("%s = %d", "sample(-1)", sample(-1));
    printf("%s = %d", "gate(7)", gate(7));
    printf("%s = %d", "gate2(5)", gate2(5));
    func_gate();
    func_gate2();
    printf("\nWhat's output printed?\n");
    func3();
    printf("\nWhat output printed?\n");
    func4();
    return 0;
}