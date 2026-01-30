#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Task {
    private:
        int taskId;
        string taskName;
        struct tm date; //need to learn more about struct tm
        int userId;
        bool isCompleted;
}; 