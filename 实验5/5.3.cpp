#include<iostream>
using namespace std;
class Cuboid {
public:
    void setDimensions(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
    double calculateVolume() {
        return length * width * height;
    }
    void displayVolume() {
        cout << "�ó������������: " << calculateVolume() << endl;
    }

private:
    double length;
    double width;
    double height;
};

int main() {
    Cuboid cuboids[3];  
    double l, w, h;
    for (int i = 0; i < 3; i++) {
        cout << "������� " << (i + 1) << " ���������ĳ������ߣ��Կո������: ";
        cin >> l >> w >> h;
        cuboids[i].setDimensions(l, w, h);
    }
    for (int i = 0; i < 3; i++) {
        cuboids[i].displayVolume();
    }

    return 0;
}