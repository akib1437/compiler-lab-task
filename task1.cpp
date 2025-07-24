#include <iostream>
using namespace std;

int main() {
    char input[100];
    bool isNumeric = true;

    cout << "Enter input: ";
    cin >> input;

    // Iterate through each character
    for (int i = 0; input[i] != '\0'; i++) {
        if (!(input[i] >= 48 && input[i] <= 57)) {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric) {
        cout << "Numeric constant" << endl;
    } else {
        cout << "Not numeric" << endl;
    }

    return 0;
}
