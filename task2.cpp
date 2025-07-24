#include <iostream>
using namespace std;

int main() {
    char input[100];
    int opCount = 1;

    cout << "Enter expression: ";
    cin >> input;

    for (int i = 0; input[i] != '\0'; i++) {
        int ascii = (int)input[i];

        // ASCII values of operators:
        // '+' → 43, '-' → 45, '*' → 42, '/' → 47, '%' → 37, '=' → 61
        if (ascii == 43 || ascii == 45 || ascii == 42 ||
            ascii == 47 || ascii == 37 || ascii == 61) {
            cout << "operator" << opCount << ": " << input[i] << endl;
            opCount++;
        }
    }

    return 0;
}
