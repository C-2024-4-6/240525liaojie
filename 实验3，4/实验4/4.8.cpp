/*#include <iostream>
#include <string>
#include <cctype>

int parseHex(const char* const hexString) {
    int result = 0;
    for (int i = 0; hexString[i] != '\0'; ++i) {
        if (isdigit(hexString[i])) {
            result = result * 16 + (hexString[i] - '0');
        }
        else if (std::toupper(hexString[i]) >= 'A' && std::toupper(hexString[i]) <= 'F') {
            result = result * 16 + (std::toupper(hexString[i]) - 'A' + 10);
        }
    }
    return result;
}

int main() {
    char a[20];
    std::cin.getline(a, 20);
    int value = parseHex(a);
    std::cout << value << std::endl;
    return 0;
}*/