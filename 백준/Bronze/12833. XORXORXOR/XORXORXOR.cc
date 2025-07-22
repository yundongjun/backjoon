#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;

    int num;

    if (C % 2 == 0) {
        num = A;
    }
    else {
        num = A ^ B;
    }

    cout << num;

    return 0;
}