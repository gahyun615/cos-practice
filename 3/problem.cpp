#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
    int a{};
    int b{};
    int result=0;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    if (a<b) {
        while (a<b+1) {
            result += a;
            a++;
        }
    
        cout << "Sum: " << result << endl;

    } else {
        cout << "Unvaild input" << endl;
    }

    return 0;
}