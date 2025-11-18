#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    if (n % 3 == 0) {
        cout << n << " la boi chung cua 3";
    } 
    else {
        cout << "Khong phai boi chung cua 3";
    }
    return 0;
}
