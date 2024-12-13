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
    cout << "������������Ȼ�� m �� n��" << endl;
    cin >> m >> n;

    int gcdValue;
    gcdValue = gcd(m, n);
    cout << "m �� n �����Լ���ǣ�" << gcdValue << endl;

    int lcmValue;
    gcdAndLcm(m, n, gcdValue, lcmValue);
    cout << "m �� n ����С�������ǣ�" << lcmValue << endl;

    return 0;
}