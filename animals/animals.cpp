/** This file contains my personal solution to "Exercise 2" from
* https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/object-oriented_programming__oop_and_inheritance/exercises_oop.html
*
* @author Evelyn Khew
*/

#include <iostream>
using namespace std;

class animal {
protected: 
    int age;
    char* name;

public:
    void setValue(int a, char* b) {
        age = a;
        name = b;
    }
};

class zebra : public animal {
public:
    void zMessage(){
        cout << "Zebras can be found on land and in warmer climates like Africa. \nThe zebra named " << name << " is now " << age << " years old. \n\n";
    }

};

class dolphin : public animal {
public:
    void dMessage() {
        cout << "Dolphins can be found in the oceans or rivers, such as the Mediterranean. \n The dolphin named " << name << " is now " << age << " years old. \n\n";
    }

};

int main()
{
    zebra newZebra; 
    dolphin newDolphin;

    int zAge = 3;
    int dAge = 4;

    char zName[8] = "Stripes";
    char dName[7] = "Slippy";

    newZebra.setValue(zAge, zName);
    newDolphin.setValue(dAge, dName);

    newZebra.zMessage();
    newDolphin.dMessage();

    return 0;

}

