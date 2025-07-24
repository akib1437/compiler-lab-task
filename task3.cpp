#include <iostream>
using namespace std;

int main() {
    char input[200];

    cout << "Enter a line: ";
    cin.getline(input, 200); // to accept spaces and full line

    if ((int)input[0] == 47 && (int)input[1] == 47) {
        cout << "This is a single-line comment." << endl;
    }
    else if ((int)input[0] == 47 && (int)input[1] == 42) {

        bool foundEnd = false;
        for (int i = 2; input[i] != '\0'; i++) {
            if ((int)input[i] == 42 && (int)input[i + 1] == 47) {
                foundEnd = true;
                break;
            }
        }
        if (foundEnd) {
            cout << "This is a multi-line comment." << endl;
        } else {
            cout << "This is a malformed multi-line comment (missing */)." << endl;
        }
    }
    else {
        cout << "This is not a comment." << endl;
    }

    return 0;
}
