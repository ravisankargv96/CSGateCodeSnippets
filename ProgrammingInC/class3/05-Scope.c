int a = 50, b = 60;

void swap(){
    int t;
    t = a;
    a = b;
    b = t;
    printf("\n%s = %d, %s = %d\n", "a", a, "b", b);
}

int main(){
    int a, b;
    a = 10, b = 20;
    swap();
    printf("\n%s = %d, %s = %d\n", "a", a, "b", b);
}