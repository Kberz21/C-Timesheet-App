#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class attendences{
    private:
        int attendenceId;
        int userId;
        struct tm date;
        struct tm checkInTime;
        struct tm checkOutTime;
        struct tm break_time_in;
        struct tm break_time_out;
};