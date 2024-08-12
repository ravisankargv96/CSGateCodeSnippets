// Not sure is it the same code return in form of procedure.
int x, y;

void P(int n){
    x = (n + 2)*(n - 3);    
}

void Q(){
    int x,y;
    x = 3;
    y = 4;
    P(y);
    printf("%d", x);
}

int main(){
    int x = 7, y = 8;
    Q();
    return 0;
}