#include <iostream>
using namespace std;

int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

void gcdAndLcm(int m, int n, int& gcdValue, int& lcmValue) {
    gcdValue = gcd(m, n);
    lcmValue = m * n / gcdValue;
}

int main() {
    int m, n;
    cout << "请输入两个自然数 m 和 n：" << endl;
    cin >> m >> n;

    int gcdValue;
    gcdValue = gcd(m, n);
    cout << "m 和 n 的最大公约数是：" << gcdValue << endl;

    int lcmValue;
    gcdAndLcm(m, n, gcdValue, lcmValue);
    cout << "m 和 n 的最小公倍数是：" << lcmValue << endl;

    return 0;
}