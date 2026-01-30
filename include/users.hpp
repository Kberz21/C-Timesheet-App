#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class users{
    int userId;
    string name;
    string email;
    bool is_manager;
    string hased_password;
    struct tm shift_start;
    struct tm shift_ended;
    bool is_fulltime; //display purposes
    string department; //display purposes
    int hour_pay; //display & calculation purposes
};