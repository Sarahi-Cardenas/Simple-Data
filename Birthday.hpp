//
//  Birthday.hpp
//  Birthday-Composition Exercise
//
//  Created by Sarahi Cardenas Trejo on 10/28/18.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#ifndef Birthday_hpp
#define Birthday_hpp
#include <stdio.h>

class Birthday{
public:
    Birthday(int m, int d, int y);
    void printDate();
private:
    int month;
    int day;
    int year;
    
};

#endif /* Birthday_hpp */
