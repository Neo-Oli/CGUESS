#ifndef randomnum_hpp
#define randomnum_hpp

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randnum(int rend){
    srand((int)time(0));
    int i = 0;
    int r = (rand()%rend);
    return r;
}

#endif
