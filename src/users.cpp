#include <iostream>
#include <string>
#include <ctime>
#include "include/attendences.hpp"
#include "include/users.hpp"
#include "include/tasks.hpp"
#include "users.hpp"
using namespace std;

users::users(int uid, string n, string em, string s,bool im, string hp, struct tm ss, struct tm se, bool ift, string dept, int hpw){
    userId = uid;
    name = n;
    email = em;
    sex = s;
    is_manager = im;
    hased_password = hp;
    shift_start = ss;
    shift_ended = se;
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
    cout << "Enter ";
};