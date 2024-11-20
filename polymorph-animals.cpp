
#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "i dont know what to say" << endl;
    }
    virtual void eat() {
        cout << "i dont know what to eat" << endl;
    }
    virtual ~Animal() {}
};
class Dog : public Animal {
public:
    virtual ~Dog() {}
    void speak() override {
        cout << "Woof Woof!" << endl;
    }
    void eat() override {
        cout << "Eaing bones!" << endl;
    }
};
class Cat : public Animal {
public:
    void speak() override {
        cout << "Mew Mew!" << endl;
    }
    void eat() override {
        cout << "Eaing fish!" << endl;
    }
};



int main()
{
    //Dog gos;
    Cat gat;
    Animal ant;
     
    Animal* gos = new Dog;

    ant.speak();
    ant.eat();
    gos->speak();
    gos->eat();
    gat.speak();
    gat.eat();
    delete gos;
}

