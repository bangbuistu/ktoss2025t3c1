#include <iostream>

int main() {
    int so;
    cout << "Nhap vao mot so nguyen: ";
    cin >> so;

    if (so % 2 == 0) {
       cout << so << " la so chan." << std::endl;
    } else {
       cout << so << " la so le." << std::endl;
    }
    return 0;
}