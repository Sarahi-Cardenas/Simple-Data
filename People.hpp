//
//  People.hpp
//  Birthday-Composition Exercise
//
//  Created by Sarahi Cardenas Trejo on 10/28/18.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#ifndef People_hpp
#define People_hpp
using namespace std;
#include <stdio.h>
#include <iostream>
#include "Birthday.hpp"

class People{
public:
    People(string n, Birthday ob);
    void printAll();
private:
    string name;
    Birthday dateOfBirth;//Birthday class' object to print out date of birth together with name
};

#endif
