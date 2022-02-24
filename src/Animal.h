// www.mike.education
// Copyright (c) 2022.

//
// Created by Maikol Guzman Alan on 2/24/22.
//

#ifndef OOP_POLY_FUNCTION_OVERRIDING_ANIMAL_H
#define OOP_POLY_FUNCTION_OVERRIDING_ANIMAL_H

/**
 * Base class
 */
class Animal {
public:
    /**
     * Constructor
     */
    Animal();

    /**
     * Destructor
     */
    virtual ~Animal();

    /**
     * Method to override
     * A C++ virtual function is a member function in the base class that you redefine
     * in a derived class. It is declared using the virtual keyword. It is used to tell
     * the compiler to perform dynamic linkage or late binding on the function.
     */
    virtual void display();
};


#endif //OOP_POLY_FUNCTION_OVERRIDING_ANIMAL_H
