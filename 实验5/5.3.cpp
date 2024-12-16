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
        cout << "该长方柱的体积是: " << calculateVolume() << endl;
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
        cout << "请输入第 " << (i + 1) << " 个长方柱的长、宽、高（以空格隔开）: ";
        cin >> l >> w >> h;
        cuboids[i].setDimensions(l, w, h);
    }
    for (int i = 0; i < 3; i++) {
        cuboids[i].displayVolume();
    }

    return 0;
}