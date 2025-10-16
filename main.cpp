#include <iostream>
using namespace std;

int main() {
    // 九九乘法表（使用 while 迴圈）
    int i = 1;
    int j;

    cout << "=== 九九乘法表 ===" << endl;
    while (i <= 9) {
        j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    cout << endl;

    // 星號直角三角形（使用 for 迴圈）
    cout << "=== 星號三角形 ===" << endl;
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
