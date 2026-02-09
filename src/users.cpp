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
    // Clear any leftover input from previous operations
    string name;
    string email;
    string s;
    bool im;
    string hp;
    bool ift;
    string dept;
    int hpw;

    cout << "Creating a new user..." << endl;
    cout << "Enter name: ";
    getline(cin, name);
   
    cout << "Enter email: ";
    getline(cin, email);
    
    cout << "Enter sex: ";
    getline(cin, s);
    
    cout << "Is manager (1 for yes, 0 for no): ";
    cin >> im;
    cin.ignore(); // Clear newline after boolean input
    
    cout << "Enter password: ";
    getline(cin, hp);
    
    cout << "Is fulltime (1 for yes, 0 for no): ";
    cin >> ift;
    cin.ignore(); // Clear newline after boolean input
    
    cout << "Enter department: ";
    getline(cin, dept);
    
    cout << "Enter hourly pay: ";
    cin >> hpw;
    cin.ignore(); // Clear newline after integer input
    
    static int userIdCounter = 1;
    Users newUser(userIdCounter, name, email, s, im, hp, ift, dept, hpw);
    newusers = newUser;
    userIdCounter++;
    
    cout << "User created successfully!" << endl;
    cout << "\n";
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