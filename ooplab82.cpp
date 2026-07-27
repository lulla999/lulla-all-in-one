#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Abstract Base Class
class MEDIA {
protected:
    string title;
    float price;

public:
    // Constructor
    MEDIA(string t = "", float p = 0.0) {
        title = t;
        price = p;
    }

    // Pure Virtual Function
    virtual void display() = 0; 

    // Virtual Destructor for safe dynamic memory cleanup
    virtual ~MEDIA() {}
};

// Derived Class 1: BOOK
class BOOK : public MEDIA {
private:
    int pages;

public:
    // Constructor using Base Class Initializer List
    BOOK(string t, float p, int pg) : MEDIA(t, p) {
        pages = pg;
    }

    // Overriding pure virtual function
    void display() {
        cout << "\nBOOK DETAILS:- " << endl;
        cout << "Title      : " << title << endl;
        cout << "Price      : $" << fixed << setprecision(2) << price << endl;
        cout << "Page Count : " << pages << " pages" << endl;
    }
};

// Derived Class 2: AUDIO TAPE
class AUDIO_TAPE : public MEDIA {
private:
    float playTime; // Play time in minutes

public:
    // Constructor using Base Class Initializer List
    AUDIO_TAPE(string t, float p, float time) : MEDIA(t, p) {
        playTime = time;
    }

    // Overriding pure virtual function
    void display() {
        cout << "AUDIO TAPE DETAILS:- " << endl;
        cout << "Title      : " << title << endl;
        cout << "Price      : $" << fixed << setprecision(2) << price << endl;
        cout << "Play Time  : " << playTime << " mins" << endl;
    }
};

int main() {
    // Variables for user input
    string bTitle, aTitle;
    float bPrice, aPrice, aTime;
    int bPages;

    cout << "MEDIA STORE INPUT SYSTEM:- " << endl;

    // --- Input for Book ---
    cout << "\nEnter Book Information ---" << endl;
    cout << "Enter Book Title: ";
    getline(cin, bTitle);
    cout << "Enter Price: $";
    cin >> bPrice;
    cout << "Enter Number of Pages: ";
    cin >> bPages;

    cin.ignore(); // Clear buffer for string input

    // --- Input for Audio Tape ---
    cout << "\nEnter Audio Tape Information ---" << endl;
    cout << "Enter Audio Title: ";
    getline(cin, aTitle);
    cout << "Enter Price: $";
    cin >> aPrice;
    cout << "Enter Playing Time (minutes): ";
    cin >> aTime;

    // --- Abstract Base Class Pointer Usage (Polymorphism) ---
    MEDIA* mediaList[2];

    mediaList[0] = new BOOK(bTitle, bPrice, bPages);
    mediaList[1] = new AUDIO_TAPE(aTitle, aPrice, aTime);

    // Displaying output using polymorphic base pointers
    cout << "\n===================================";
    cout << "\n       DISPLAYING ALL MEDIA        ";
    cout << "\n===================================";

    mediaList[0]->display();
    mediaList[1]->display();

    // Freeing dynamically allocated memory
    delete mediaList[0];
    delete mediaList[1];

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get(); // Keeps output window open in Dev-C++

    return 0;
}
