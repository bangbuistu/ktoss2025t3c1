#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap 1 so nguyen: ";
    cin >> n;
    if (n > 0)
        cout << "So duong\n";
    else if (n < 0)
        cout << "So am\n";
    else
        cout << "So bang 0\n";
    return 0;
}
