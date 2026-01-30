#include <iostream>
#include <string>
#include <ctime>
#include "../include/tasks.hpp"
#include "../include/users.hpp"
#include "../include/attendences.hpp"
using namespace std;

tasks::tasks(int tid, string tname, struct tm d, int uid, bool ic){
    taskId = tid;
    taskName = tname;
    date = d;
    userId = uid;
    isCompleted = ic;
}