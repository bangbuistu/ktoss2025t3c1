#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Nhap mot so: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "So " << num << " la so chan" << endl;
    } else {
        cout << "So " << num << " la so le" << endl;
    }

    return 0;
}
