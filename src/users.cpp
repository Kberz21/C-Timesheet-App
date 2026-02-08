#include <iostream>
#include <string>
#include <ctime>
#include "../include/Users.hpp"
using namespace std;

int Users::userId = 0;

Users::Users(int uid, string n, string em, string s,bool im, string hp, bool ift, string dept, int hpw){
    userId = uid;
    name = n;
    email = em;
    sex = s;
    is_manager = im;
    hased_password = hp;
    is_fulltime = ift;
    department = dept;
    hour_pay = hpw;
}
void create_new_user(Users& newusers){
    cout << "Creating a new user..." << endl;
    cout << "Enter name: ";
    string name;
    getline(cin, name);
    cin.ignore(); // to ignore the newline character after reading name
    cout << "Enter email: ";
    string email;
    getline(cin, email);
    cin.ignore(); // to ignore the newline character after reading email
    cout << "Enter sex:";
    string s;
    getline(cin,s);
    cin.ignore(); // to ignore the newline character after reading
    cout << "Is manager (1 for yes, 0 for no): ";
    bool im;
    cin >> im;
    cin.ignore(); // to ignore the newline character after reading boolean
    cout << "Enter password: ";
    string hp;
    getline(cin, hp);
    cin.ignore(); // to ignore the newline character after reading password
    cout << "Is fulltime (1 for yes, 0 for no): ";
    bool ift;
    cin >> ift;
    cin.ignore(); // to ignore the newline character after reading boolean
    cout << "Enter department: ";
    string dept;
    getline(cin, dept);
    cin.ignore(); // to ignore the newline character after reading department
    cout << "Enter hourly pay: ";
    int hpw;
    cin >> hpw;
    static int userIdCounter = 1; // Simple counter for user IDs
    Users newUser(userIdCounter, name, email, s, im, hp, ift, dept, hpw);
    newusers = newUser;
    userIdCounter++;
    cout << "User created successfully!" << endl;
    cout <<"\n";
}
void welcome_user(){
    cout<<"---Welcome to User Management System---"<<endl;
    cout<<"1. Create New User"<<endl;
    cout<<"2. Exit"<<endl;
    cout<<"Enter your option: ";
}
void Users::display_user_info(){
    cout<<"User Information:"<<endl;
    cout<<"User ID: "<<userId<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Sex: "<<sex<<endl;
    cout<<"Is Manager: "<<(is_manager ? "Yes" : "No")<<endl;
    cout<<"Is Fulltime: "<<(is_fulltime ? "Yes" : "No")<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Hourly Pay: $"<<hour_pay<<endl;
}

void home_screen(Users& users){
    cout<<"---Welcome to User Management System---"<<endl;
    cout<<"1. Display User Information"<<endl;
    cout<<"2. Exit"<<endl;
    cout<<"Enter your option: ";
    int option;
    cin >> option;
    if(option == 1){
        users.display_user_info();
        home_screen(users); // Return to home screen after displaying user info
    }
    else if (option == 2){
        cout<<"Exiting the system. Goodbye!"<<endl;
        return;
    }
    else{
        cout<<"Invalid option. Please try again."<<endl;
        home_screen(users); // Return to home screen for invalid option
    }
}