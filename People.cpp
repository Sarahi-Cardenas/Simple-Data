//
//  People.cpp
//  Birthday-Composition Exercise
//
//  Created by Sarahi Cardenas Trejo on 10/28/18.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include "People.hpp"
#include "Birthday.hpp"
using namespace std;
#include <iostream>

People::People(string n, Birthday ob): name(n), dateOfBirth(ob) { // since we are adding an object, we need to initialize in between parameters and braces
}
void People::printAll(){
    cout << "My name is " << name << " and I was born in ";
    dateOfBirth.printDate();
}
