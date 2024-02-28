
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
class Inventory {
public:
    void addItem(T item) {
        items.push_back(item);
    }
    T getItem(int index) {
        return items[index];
    }
private:
    vector<T> items;
};

class Player {
public:
    int getHealth() {
        return health;
    }
    void setHealth(int h) {
        health = h;
    }
    void move(int x, int y) {
        position[0] = x;
        position[1] = y;
    }
    void setItem(string item) {
        inventory.addItem(item);
    }
    string getItem(int index) {
        return inventory.getItem(index);
    }
private:
    int health;
    int position[2];
    Inventory<string> inventory;
};

int main() {
    Player player;
    player.setHealth(100);
    player.move(10, 20);
    player.setItem("Sword");
    player.setItem("Shield");
    cout << "Player health: " << player.getHealth() << endl;
    cout << "Player position: " << player.getItem(0) << ", " << player.getItem(1) << endl;
    cout << "Player inventory: " << player.getItem(0) << ", " << player.getItem(1) << endl;
    return 0;
}
