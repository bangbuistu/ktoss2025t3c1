#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Nhập một số nguyên: ";
    if (!(cin >> n)) {
        cerr << "Dữ liệu vào không hợp lệ";
        return 1;
    }

    if (n > 0)
        cout << n << " là số dương";
    else if (n < 0)
        cout << n << " là số âm";
    else
        cout << "Số bằng 0";

    return 0;
}