#include <iostream>
using namespace std;

int main()
{
    int a(0), b(0), c(0);
    int result_max(0);
    int result_min(0);

    cout << "Podaj a b c: ";
    //     11    3    7
    cin >> a >> b >> c;

    if (a < b) {
        if (b < c) {
            result_max = c;
        }
        else {
            result_max = b;
        }
    }
    else {
        if (a < c) {
            result_max = c;
        }
        else {
            result_max = a;
        }
    }

    if (a > b) {
        if (b > c) {
            result_min = c;
        }
        else {
            result_min = b;
        }
    }
    else {
        if (a > c) {
            result_min = c;
        }
        else {
            result_min = a;
        }
    }

    cout << "Max:" << result_max << endl;
    cout << "Min:" << result_min << endl;
}