//
//  main.cpp
//  Birthday-Composition Exercise
//
//  Created by Sarahi Cardenas Trejo on 10/28/8.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include <iostream>
#include "Birthday.hpp"
#include "People.hpp"
using namespace std;

int main() {
    
    Birthday birthdayObj(05,13,1991);
    People sarahiCardenas("Sarahi Cardenas", birthdayObj);
    sarahiCardenas.printAll();
    return 0;
}
