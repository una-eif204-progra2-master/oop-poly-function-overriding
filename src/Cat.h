// www.mike.education
// Copyright (c) 2022.

//
// Created by Maikol Guzman Alan on 2/24/22.
//

#ifndef OOP_POLY_FUNCTION_OVERRIDING_CAT_H
#define OOP_POLY_FUNCTION_OVERRIDING_CAT_H

#include "Animal.h"

class Cat: public Animal {
public:
    /**
    * Method to override
    */
    void display() override;
};


#endif //OOP_POLY_FUNCTION_OVERRIDING_CAT_H
