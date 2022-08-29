#pragma once
#include <iostream>
using namespace std;

class Item {
private:
    string name;
    int performance;
public:
    Item(string _name, int _performance);
    Item operator+(Item& item);
    int getPerformance();
};

class User {
protected:
    string name;
    int level;
    int money;
    int luck;
    static bool isBurning;
    friend class Manager;
public:
    User(string _name, int _level, int _money, int _luck);

    void defend();
    Item combinate(Item a, Item b);
};

class Warrior : public User {
public:
    Warrior(string _name, int _level, int _money, int _luck) : User(_name, _level, _money, _luck) { };

    void attack();
};

class Magician : public User {
public:
    Magician(string _name, int _level, int _money, int _luck) : User(_name, _level, _money, _luck) { };


    void attack();
};

class Archer : public User {
public:
    Archer(string _name, int _level, int _money, int _luck) : User(_name, _level, _money, _luck) { };

    void attack();
};

class Manager {
private:
    string name;
public:
    Manager(string _name);

    void openBurningEvent();
    void closeBurningEvent();
};