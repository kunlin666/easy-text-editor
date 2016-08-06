
#ifndef doublewords_h
#define doublewords_h

#include"textprocess.h"
#include"decorator.h"
#include <iostream>
#include <string>
using namespace std;

class doublewords: public Decorator{
public:
    doublewords(TextProcessor *component);
    std::string getWord() override;
};


#endif /* doublewords_h */
