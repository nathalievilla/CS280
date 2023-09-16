#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Please enter your first name >>\n";
    string firstName;
    cin >>  firstName;

    cout << "Please enter your last name >>\n";
    string lastName;
    cin >> lastName;

    cout << "Please enter your CS 280 section number >>\n";
    double sectionNumber;
    cin >> sectionNumber;

    cout << "Hello " << firstName << ", welcome to CS 280 section " << sectionNumber << "\n";
    return 0;
}
