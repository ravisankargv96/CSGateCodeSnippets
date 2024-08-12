int a = 20;

void B(){
    static int c = 10;
    a = 10;
}

int main(){
    int a = 10;
    int b;
    b = 20;
    B();
}