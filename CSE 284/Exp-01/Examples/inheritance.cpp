#include <bits/stdc++.h>
using namespace std;
// Base, Parent Class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Single Inheritance - Child Class
class Mammal : virtual public Animal {
public:
    void run() {
        cout << "Mammal is running." << endl;
    }
};

class Reptile : virtual public Animal {
public:
    void crawl() {
        cout << "Reptile is crawling." << endl;
    }
};

// Multiple Inheritance
class Amphibian : public Mammal, public Reptile {
public:
    void swim() {
        cout << "Amphibian is swimming." << endl;
    }
};

// Multi-Level Inheritance
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Hierarchical Inheritance
class Cat : public Mammal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

// Hybrid (Virtual) Inheritance
class FlyingBird : virtual public Animal {
public:
    void fly() {
        cout << "Bird is flying." << endl;
    }
};

class Pigeon : public Mammal, public FlyingBird {
public:
    void coo() {
        cout << "Pigeon is cooing." << endl;
    }
};

int main() {
    Mammal mammal;
    mammal.eat();
    mammal.run();

    Amphibian amphibian;
    amphibian.eat();
    amphibian.crawl();
    amphibian.swim();

    Dog dog;
    dog.eat();
    dog.run();
    dog.bark();

    Cat cat;
    cat.eat();
    cat.run();
    cat.meow();

    Pigeon pigeon;
    pigeon.eat();  // Resolved ambiguity using virtual inheritance
    pigeon.fly();
    pigeon.coo();

    return 0;
}