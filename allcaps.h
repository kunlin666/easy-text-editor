
#ifndef allcaps_h
#define allcaps_h

#include"textprocess.h"
#include"decorator.h"
#include <iostream>
#include <string>
using namespace std;

class allcaps: public Decorator{

public:
    allcaps(TextProcessor *component);
    
    std::string getWord() override;
};


#endif /* allcaps_h */
