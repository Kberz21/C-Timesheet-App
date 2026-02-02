#include <iostream>
#include <string>
#include "../include/users.hpp"
using namespace std;

void create_new_user(); // take from users.cpp

int main() {
    cout << "Running main tests..." << endl;
    create_new_user(); 
    return 0;
}