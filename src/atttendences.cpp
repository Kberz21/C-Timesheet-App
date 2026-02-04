#include <iostream>
#include <string>
#include <ctime>
#include "../include/Attendences.hpp"
#include "../include/users.hpp"
#include "../include/tasks.hpp"
using namespace std;

Attendences::Attendences(int aid, int uid, struct tm d, struct tm ci, struct tm co, struct tm bti, struct tm bto){
    attendenceId = aid;
    userId = uid;
    date = d;
    checkInTime = ci;
    checkOutTime = co;
    break_time_in = bti;
    break_time_out = bto;
}