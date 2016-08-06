
#include "doublewords.h"
#include <string>
#include <iostream>
using namespace std;

doublewords::doublewords(TextProcessor *p):Decorator{p}{}

string doublewords::getWord(){
    string s=component->getWord();
    string temp=s;
    s=s+" "+temp;
    return s;
}
