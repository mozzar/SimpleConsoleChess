#include <iostream>
#include "Board.h"

void print_welcome_message();

using namespace std;

int main() {
    std::cout << "Hello, World!♔" << std::endl;
    print_welcome_message();
    int wybor = 0;
    for (;;) {
        cin >> wybor;

        if(wybor == 0){
            cout << "\nStart gry!\n";
        }

        else if(wybor == 9){
            cout << "\nZakończono grę!\n";
            break;
        }
        else{
            print_welcome_message();
        }

    }




    return 0;
}

void print_welcome_message(){
    cout << "\n======================";
    cout << "Podaj co chcesz zrobić";
    cout << "\n0-gra, 9-wyjscie";
    cout << "\n======================\n";
}
