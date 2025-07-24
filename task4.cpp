#include <iostream>
using namespace std;

int main() {
    char input[100];
    bool isIdentifier = true;

    cout << "Enter input: ";
    cin >> input;

    // first character
    int ascii = (int)input[0];
    if (!((ascii >= 65 && ascii <= 90) ||      // A-Z
          (ascii >= 97 && ascii <= 122) ||     // a-z
           ascii == 95)) {                     // _
        isIdentifier = false;
    }

    // the rest
    for (int i = 1; input[i] != '\0'; i++) {
        ascii = (int)input[i];
        if (!((ascii >= 65 && ascii <= 90) ||   // A-Z
              (ascii >= 97 && ascii <= 122) ||  // a-z
              (ascii >= 48 && ascii <= 57) ||   // 0-9
               ascii == 95)) {                  // _
            isIdentifier = false;
            break;
        }
    }

    if (isIdentifier) {
        cout << "Valid Identifier." << endl;
    } else {
        cout << "Invalid Identifier." << endl;
    }

    return 0;
}
