#include<iostream>
#include "Sally.h"

using namespace std;

int main()
{
    Sally obj;
    Sally *ptr = &obj;
    ptr->printCrap();
    return 0;
}