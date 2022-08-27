#include "components.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool User::isBurning = false;

User::User(string _name, int _level, int _money, int _luck) {
    User::name = _name;
    User::level = _level;
    User::money = _money;
    User::luck = _luck;
    User::isBurning = false;
}

void Warrior::attack() {
    cout << User::name << " : �� �ֵθ���" << endl;
    return;
}

void Magician::attack() {
    cout << User::name << " : ���� ����" << endl;
    return;
}

void Archer::attack() {
    cout << User::name << " : Ȱ ���" << endl;
    return;
}

void User::defend() {
    cout << name << " : ���" << endl;
    return;
}

Item User::combinate(Item a, Item b) {
    int probability;

    if (isBurning) {
        probability = 50 + luck + 10;
        cout << "���� �̺�Ʈ ����" << endl;
    }
    else {
        probability = 50 + luck;
    }

    if (probability > 100) probability = 100;

    srand(time(NULL));

    if (rand() % 100 + 1 <= probability) {
        cout << "���� ����!" << endl;
        return a + b;
    }
    else {
        cout << "���� ����!" << endl;
        return Item("���� ���� ������", 0);
    }
}

Item::Item(string _name, int _performance) {
    Item::name = _name;
    Item::performance = _performance;
}

Item Item::operator+(Item& item) {
    Item::performance = Item::performance + item.getPerformance();

    return Item("���� ���� ������", Item::performance);
}

int Item::getPerformance() {
    return Item::performance;
}

Manager::Manager(string _name) {
    Manager::name = _name;
}

void Manager::openBurningEvent() {
    User::isBurning = true;
    return;
}

void Manager::closeBurningEvent() {
    User::isBurning = false;
    return;
}