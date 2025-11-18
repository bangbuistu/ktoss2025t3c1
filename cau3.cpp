#include <iostream>
using namespace std;

void checkMultipleOf3(int n) {
    if (n % 3 == 0) {
        cout << n << " la boi cua 3" << endl;
    } else {
        cout << n << " khong phai boi cua 3" << endl;
    }
}

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    checkMultipleOf3(n);
    return 0;
}
