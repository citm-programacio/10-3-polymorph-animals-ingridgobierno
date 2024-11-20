
#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "i dont know what to say" << endl;
    }
    virtual ~Animal() {}
};
class Dog : public Animal {
public:
    void speak() {
        cout << "Woof Woof!" << endl;
    }
};
class Cat : public Animal {
public:
    void speak() {
        cout << "Mew Mew!" << endl;
    }
};



int main()
{
    Dog gos;
    Cat gat;
    Animal ant;

    ant.speak();
    gos.speak();
    gat.speak();
}
