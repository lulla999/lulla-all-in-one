#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks obtained in Object Oriented Programming : ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
cout << "Grade = " << "A";
  else if (marks >= 80 && marks <= 89)
        cout << "Grade = " << "B";
  else if (marks >= 70 && marks <= 79)
        cout << "Grade = " << "C";
    else if (marks >= 60 && marks <= 69)
        cout << "Grade = " << "D";
  else if (marks >= 0 && marks <= 59)
        cout << "Grade = " << "F";
    else
        cout << "Invalid Marks entered "<<"\n";

    return 0;
}
