#include <stdio.h>

int x  = 20; 

void func() {
    int x = 5;
    printf("x inside func = %d\n", x);
}

int func2() {
    static int y = 10;
    printf("y    inside func2 = %d\n", y);
    return y++;
}

int main() {

    x=33;
    func();
    func2();
    func2();
    printf("x    inside main = %d\n", x);
    printf("y    inside main = %d\n", func2());
    printf("y    inside main = %d\n", func2());
}