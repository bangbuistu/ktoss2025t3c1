#include "iostream"
using namespace std;
int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    if (!(cin >> n)) {
        cout << "Vui long nhap so nguyen.\n";
        return 1;
    }
    if (n % 2 == 0) cout << n << " la so chan\n";
    else cout << n << " la so le\n";
    return 0;
}