
#include <iostream>
#include <string>

using namespace std;

class Menu {
public:
    void displayMenu()
    {
        system("cls");
        cout << "1. Start" << endl;
        cout << "2. Load" << endl;
        cout << "3. Option" << endl;
        cout << "4. Exit" << endl;
    }

    int readInput()
    {
        int input;
        cin >> input;

        switch (input) {
            case 1:
                start();
                return 1;
            case 2:
                load();
                return 1;
            case 3:
                option();
                return 1;
            case 4:
                exit();
                return 1;
            default:
                return 0;
        }
    }

    void start() { cout << "Starting game" << endl; }
    void load() { cout << "Loading game" << endl; }
    void option() { cout << "Options" << endl; }
    void exit() { cout << "Exiting game" << endl; }

};

int main() {
    Menu menu;
    menu.displayMenu();
    while (!menu.readInput()) { menu.displayMenu(); }
    return 0;
}


