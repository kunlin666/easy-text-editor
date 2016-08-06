
#ifndef dropfirst_h
#define dropfirst_h

#include"textprocess.h"
#include"decorator.h"
#include <iostream>
#include <string>
using namespace std;

class dropfirst: public Decorator{
    int num;
public:
    dropfirst(TextProcessor *component,const int num);
    std::string getWord() override;
};

#endif /* dropfirst_h */
