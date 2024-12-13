/*#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

vector<int> merge(vector<int>& list1, vector<int>& list2) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < list1.size() && j < list2.size()) {
        if (list1[i] < list2[j]) {
            result.push_back(list1[i]);
            i++;
        }
        else {
            result.push_back(list2[j]);
            j++;
        }
    }
    while (i < list1.size()) {
        result.push_back(list1[i]);
        i++;
    }
    while (j < list2.size()) {
        result.push_back(list2[j]);
        j++;
    }
    return result;
}

int main() {
    vector<int> list1, list2;
    int num;
    cout << "Enter list1: ";
    while (cin >> num) {
        list1.push_back(num);
        if (cin.get() == '\n')
            break;
    }
    cout << "Enter list2: ";
    while (cin >> num) {
        list2.push_back(num);
        if (cin.get() == '\n')
            break;
    }
    vector<int> merged = merge(list1, list2);
    sort(merged.begin(), merged.end());
    cout << "The merged list is ";
    for (int n : merged) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}


*/