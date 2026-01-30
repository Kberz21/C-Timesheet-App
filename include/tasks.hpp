#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class tasks {
    private:
        int taskId;
        string taskName;
        struct tm date; //need to learn more about struct tm
        int userId;
        bool isCompleted;
    public:
        tasks(int tid, string tname, struct tm d, int uid, bool ic);
}; 