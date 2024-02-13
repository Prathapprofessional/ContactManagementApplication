#include <iostream>
#include <string>
#include <unordered_map>
#include <string>
#include "addContact.hpp"

using namespace std;

void addContact()
{

cout << "Adding Contact details......."<< endl;
cout << "Please provide the contact details as follows in same order,"<< endl << "1.Name" << endl << "2.Phone number" << endl << "3.email address" << endl << "4.RelevantDetails" << endl;
for (int i=0; i < 4; i++)
{
    cout << "type your  "<<title[i] << endl ;  
    getline(cin, personalInfo[title[i]]);
}

}