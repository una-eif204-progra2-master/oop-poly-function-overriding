// www.mike.education
// Copyright (c) 2022.

//
// Created by Maikol Guzman Alan on 2/24/22.
//

#include <iostream>
#include "Animal.h"
#include "Cat.h"
using namespace std;

int main() {
    cout << "Welcome to the mike.education!" << endl;  // display message
    cout << "Polymorphism Compile-time - [Function Overriding]\n" << endl;  // display message

    Animal animal = Animal();
    animal.display();

    Cat cat = Cat();
    cat.display();

    return 0;
}

