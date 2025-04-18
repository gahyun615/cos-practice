#include <iostream>
using namespace std;

void decode1(long *xp, long *yp, long *zp)
{
    __asm__(
        "movq (%rdi), %r8\n"
        "movq (%rsi), %rcx\n"
        "movq (%rdx), %rax\n"
        "movq %r8, (%rsi)\n"
        "movq %rcx, (%rdx)\n"
        "movq %rax, (%rdi)\n"
    );
}

int main()
{
    long x, y, z;
    x = 10000; y = 20000; z = 30000;
    cout << "before decode1(): " << "x: " << x << "y: " << y << "z: " << z << endl;
    decode1(&x, &y, &x);
    cout << "after decode1(): " << "x: " << x << "y: " << y << "z: " << z << endl;
}