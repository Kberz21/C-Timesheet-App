#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class users{
    private:
        int userId;
        string name;
        string sex;
        string email;
        bool is_manager;
        string hased_password;
        struct tm shift_start;
        struct tm shift_ended;
        bool is_fulltime; //display purposes
        string department; //display purposes
        int hour_pay;// display & calculation purposes
    public:
        users(int uid, string n, string em, string s,bool im, string hp, tm ss, tm se, bool ift, string dept, int hpw); //need reorder of parameters
};