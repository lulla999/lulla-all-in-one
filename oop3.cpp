#include <iostream>
#include <iomanip>
using namespace std;

class Account {
private:
    int accountno;
    char accountHolderName[50];
    float balance;

public:
    void store();   // will take input
    void retrieve();   // will display output
};
void Account::store() {
    cout << "Account Number: ";
    cin >> accountno;
    cin.ignore(); 
    cout << "Account Holder Name: ";
    cin.getline(accountHolderName,50);
    cout << "Balance: ";
    cin >> balance;
}

void Account::retrieve() {
    cout << "Account Number: " << accountno << endl;
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << fixed << setprecision(2);
    cout << "Balance: " << balance << endl; 
}

int main() {
    Account customers[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter details of customer " << i + 1 << ":"<<endl;
        customers[i].store();
    }
    cout << "\nCustomer Details:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nCustomer " << i + 1 << ":\n";
        customers[i].retrieve();
    }

    return 0;
}