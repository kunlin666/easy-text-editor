
#ifndef count_h
#define count_h

#include"textprocess.h"
#include"decorator.h"
#include <iostream>
#include <string>
using namespace std;

class counting: public Decorator{
    char c;

public:
    counting(TextProcessor *component,const char c);
    
    std::string getWord() override;
};

#endif /* count_h */
