#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    if (n > 0)
        cout << n << " la so duong.\n";
    else if (n < 0)
        cout << n << " la so am.\n";
    else
        cout << "Day la so 0.\n";

    return 0;
}