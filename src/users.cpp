#include <iostream>
#include <string>
#include <ctime>
#include "attendences.hpp"
#include "users.hpp"
#include "tasks.hpp"
using namespace std;

int users::userId = 0;

users::users(int uid, string n, string em, string s,bool im, string hp, bool ift, string dept, int hpw){
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

void create_new_user(){
    cout << "Creating a new user..." << endl;
    cout << "Enter name: ";
    string name;
    getline(cin, name);
    cout << "Enter email: ";
    string email;
    getline(cin, email);
    cout << "Enter sex:";
    string s;
    getline(cin,s);
    cout << "Is manager (1 for yes, 0 for no): ";
    bool im;
    cin >> im;
    cin.ignore(); // to ignore the newline character after reading boolean
    cout << "Enter password: ";
    string hp;
    getline(cin, hp);
    cout << "Is fulltime (1 for yes, 0 for no): ";
    bool ift;
    cin >> ift;
    cin.ignore(); // to ignore the newline character after reading boolean
    cout << "Enter department: ";
    string dept;
    getline(cin, dept);
    cout << "Enter hourly pay: ";
    int hpw;
    cin >> hpw;
    static int userIdCounter = 1; // Simple counter for user IDs
    users newUser(userIdCounter, name, email, s, im, hp, ift, dept, hpw);
    userIdCounter++;
    cout << "User created successfully!" << endl;
};