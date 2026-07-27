#include <iostream>
#include <string>

using namespace std;

class Bank {
private:
    // Data members as specified on the board
    int accNo;
    string name;
    double balance;
    
    // (Static) member variable
    static int count;

public:
    // Member functions
    void setter() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cin.ignore(); // Clear newline buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        if (amt > 0) {
            balance += amt;
            count++; // count++ on successful operation
            cout << "Rs. " << amt << " deposited successfully." << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void withdraw() {
        double amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        
        // Logic from board: Checks if user has enough balance (amt <= balance)
        if (amt > 0 && amt <= balance) {
            balance -= amt;
            count++; // count++ on successful operation
            cout << "Rs. " << amt << " withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void CheckBalance() {
        cout << "\n--- Account Balance Info ---" << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }

    // Static member function to display total operations
    static void displayTotalOps() {
        cout << "\nTotal number of operations (count): " << count << endl;
    }
};

// Initializing the static data member
int Bank::count = 0;

int main() {
    // Array of 3 objects declared as "Bank customer[3]" from the board
    Bank customer[3];

    // First call before menu: Initialize all 3 customers
    cout << "=== Initialize Customer Details ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nSetting details for Customer " << (i + 1) << ":" << endl;
        customer[i].setter();
    }

    int choice;
    int currentCustomer = 0; // Tracks which customer is currently accessing the menu

    // Switch Case inside a Menu loop
    do {
        cout << "\n===================================" << endl;
        cout << "             BANK MENU             " << endl;
        cout << "===================================" << endl;
        cout << "Active Session: Customer " << (currentCustomer + 1) << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Display Total Operations" << endl;
        cout << "5. Switch Customer Account" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                customer[currentCustomer].deposit();
                break;
            case 2:
                customer[currentCustomer].withdraw();
                break;
            case 3:
                customer[currentCustomer].CheckBalance();
                break;
            case 4:
                // Calling the static member function
                Bank::displayTotalOps();
                break;
            case 5: {
                int target;
                cout << "Switch to Customer (1, 2, or 3): ";
                cin >> target;
                if (target >= 1 && target <= 3) {
                    currentCustomer = target - 1;
                    cout << "Switched to Customer " << target << " successfully." << endl;
                } else {
                    cout << "Invalid customer number!" << endl;
                }
                break;
            }
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid selection! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}