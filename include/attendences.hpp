#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Attendences{
    private:
        int attendenceId;
        int userId;
        struct tm date;
        struct tm checkInTime;
        struct tm checkOutTime;
        struct tm break_time_in;
        struct tm break_time_out;
    public:
        Attendences(int aid, int uid, struct tm d, struct tm ci, struct tm co, struct tm bti, struct tm bto);
};