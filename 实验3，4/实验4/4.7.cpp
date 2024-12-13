/*#include<iostream>
#include<cstring>
using namespace std;

int indexOf(const char* s1, const char* s2) {
    int index = -1;
    const char* p = s2;
    while (*p) {
        if (strncmp(s1, p, strlen(s1)) == 0) {
            index = p - s2;
            break;
        }
        p++;
    }
    return index;
}

int main()
{
    char s1[100], s2[100];
    cout << "Enter the first string:";
    cin.getline(s1, 100);
    cout << "Enter the second string:";
    cin.getline(s2, 100);
    int ans = indexOf(s1, s2);
    cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is " << ans << endl;
    return 0;
}*/