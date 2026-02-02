#ifndef USERS_H
#define USERS_H
#pragma once
#include <string>
#include <ctime>
#include <iostream>
using namespace std;
class Users{
    private:
        static int userId;
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
        Users(){};
        Users(int uid, string n, string em, string s,bool im, string hp, bool ift, string dept, int hpw); //need reorder of parameters      
};

#endif