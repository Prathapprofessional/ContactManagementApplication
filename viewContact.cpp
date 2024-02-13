#include <iostream>
#include "addContact.hpp"

using namespace std;

void viewContact()
{
    std::string ques;

cout << "Viewing Contact details......."<<endl;
cout<< "Which contact you want ? search by name " << endl;
cin >> ques;

 for (const auto& contact : personalInfo) {
      
        if (contact.first == ques) {
           
            cout << "Contact details for " << ques << ":" << endl;
            cout << "Name: " << contact.first<< endl;
            cout << "Phone number: " << contact.second.find("Phone number") << endl;
            cout << "Email address: " << contact.second.find("Email address") << endl;
            cout << "Relevant details: " << contact.second.find("Relevant details") << endl;
            return; 
        }
    }
}