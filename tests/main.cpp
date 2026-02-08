#include <iostream>
#include <string>
#include <ctime>
#include "../include/Users.hpp"

using namespace std;
int main() {
    cout << "Running main tests..." << endl;
    int option=1;
    Users User;
    welcome_user();
    cin >> option;
    if(option == 1){
        create_new_user(User);
        home_screen(User); // Pass the newly created user to the home screen
    }
    else if (option == 2){
        cout<<"Exiting the system. Goodbye!"<<endl;
        return 0;
    }
    else{
        cout<<"Invalid option. Please try again."<<endl;
    }
    return 0;
}