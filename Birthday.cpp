//
//  Birthday.cpp
//  Birthday-Composition Exercise
//
//  Created by Sarahi Cardenas Trejo on 10/28/18.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include "Birthday.hpp"
using namespace std;
#include <iostream>

Birthday::Birthday(int m,int d, int y){
    month = m;
    day = d;
    year = y;
}
void Birthday::printDate(){
    cout << month << "/" << day << "/" << year << endl;
}
