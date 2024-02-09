#include <iostream>
#include <unordered_map>
#include <string>
#include "addContact.cpp"
#include "updateContact.cpp"
#include "viewContact.cpp"
#include "deleteContact.cpp"

using namespace std;

//Global vairables
    unordered_map<string,string> personalInfo;
    string data;
    string title[4]={"Name", "Phone number", "email address", "RelevantDetails"};

int main(){

    int option;
    bool flag = true;    

    while(flag)
    {
    cout << "Hello Welcome to Contact Management Application" << endl << "Do you want to"<<endl <<"1. Add Contact" << endl << "2.View Contact"<< endl <<"3.Update Contact" << endl << "4.Delete Contact" <<endl <<"5.End application" <<endl ;
    cin >> option;

    if (option <= 5)
    {
    switch(option)
    {
        case 1:
          addContact();
          break;
        case 2:
          viewContact();
          break;
        case 3:
          updateContact();
          break;
        case 4:
          deleteContact();
          break;
        case 5:
          cout << "Exiting Application"<< endl;
          flag = false;
          break;         
    }
    }
    else{
        flag = false;
    }
    }
    return 0;

}