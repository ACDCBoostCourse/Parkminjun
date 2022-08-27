#include <iostream>
#include "components.h"

using namespace std;

int main() {

    Warrior warrior("전사", 1, 10000, 5);
    Magician magician("마법사", 2, 20000, 10);
    Archer archer("궁수", 3, 30000, 40);

    Manager manager("매니저");

    Item warriorItem1("전사 아이템1", 10);
    Item warriorItem2("전사 아이템2", 20);

    Item magicianItem1("마법사 아이템1", 30);
    Item magicianItem2("마법사 아이템2", 40);

    Item archerItem1("궁수 아이템1", 50);
    Item archerItem2("궁수 아이템2", 60);

    warrior.attack();
    warrior.defend();

    magician.attack();
    magician.defend();

    archer.attack();
    archer.defend();

    cout << warrior.combinate(warriorItem1, warriorItem2).getPerformance() << endl;

    manager.openBurningEvent();

    cout << magician.combinate(magicianItem1, magicianItem2).getPerformance() << endl;

    manager.closeBurningEvent();

    cout << archer.combinate(archerItem1, archerItem2).getPerformance() << endl;

    return 0;
}