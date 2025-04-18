#include <iostream>
using namespace std;

int sum(int a, int b)
{
    __asm__(
        // "mov %rsp, %rbp\n"
        // "mov %edi, -0x4(%rbp)\n"
        // "mov %esi, -0x8(%rbp)\n"
        // "mov -0x4(%rbp), %edx\n"
        // "mov -0x8(%rbp), %edx\n"
        // "add %edx, %eax"

        "add %esi, %edi\n"
        "mov %edi, %eax"
    );
}

int main()
{
    int a, b, c;
    a = 3; b = 5;
    c = sum(a, b);
    cout << "c: " << c << endl;
    return 0;
}