#include <iostream>
#include <cstdlib>
using namespace std;

int mod(int a, int b);
int slen(char *snum);
int convert(char *snum);

int main(int argc, char *argv[])
{
    int a, b, c;
    if (argc != 3)
    {
        cout << "Please inset two numbers" << endl;
        return 0;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = a % b;
    cout << a << " mod " << b << " = " << c << endl;
    return 0;
}

int mod(int a, int b)
{
    if (a >= 0)
        return a % b;
    else
        return a / b * b - a;
}

int slen(char *snum)
{
    int ret;
    char *p;
    ret = 0;

    p = snum;
    while (*p != 0)
    {
        ret += 1;
        p++;
    }

    return ret;
}

int convert(char *snum)
{
    int len;
    int i, ret;
    int sign;
    char *p;

    ret = 0;
    p = snum;
    sign = 1;

    if (*p == '-')
    {
        sign = -1;
        p++;
    }

    len = slen(p);

    for (i=0; i<len; i++)
    {
        ret *= 10;
        ret = ret + (*(p+i) - 0x30);
    }

    ret *= sign;
    return ret;
}