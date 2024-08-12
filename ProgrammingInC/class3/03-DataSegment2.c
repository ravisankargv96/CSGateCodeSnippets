int a = 20;

void C(){
    extern int a;
}
void B(){
    static int a = 40;
    C();
}

int main(){
    static int a = 30;
    B();
    printf("%d", a);
}