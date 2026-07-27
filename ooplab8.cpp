#include <iostream>
#include <string>
using namespace std;

// Forward declaration of Friend class
class Inspector;

class DataHolder {
private:
    int secretCode;
    string secretMessage;

public:
    // Function to take input for private variables
    void inputData() {
        cout << "Enter Secret Code (integer): ";
        cin >> secretCode;
        cin.ignore(); // Clear newline character from buffer

        cout << "Enter Secret Message: ";
        getline(cin, secretMessage);
    }

    // Declaring Inspector as a friend class
    friend class Inspector;
};

class Inspector {
public:
    // Accesses private data members directly
    void displaySecret(DataHolder obj) {
        cout << "\nDisplaying Data via Friend Class:- " << endl;
        cout << "Secret Code: " << obj.secretCode << endl;
        cout << "Secret Message: " << obj.secretMessage << endl;
    }
};

int main() {
    DataHolder data;
    Inspector inspector;

    // User inputs the private data
    data.inputData();

    // Friend class retrieves and displays the private data
    inspector.displaySecret(data);

    return 0;
}
