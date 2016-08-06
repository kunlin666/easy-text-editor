
#include "allcaps.h"
#include <string>
#include <iostream>
using namespace std;

allcaps::allcaps(TextProcessor *p):Decorator{p}{}

string allcaps::getWord(){
    string s=component->getWord();

    const int len=static_cast<int>(s.length());
    for(int i=0;i<len;i++){
        if(97<=s[i]&&s[i]<=122){
            s[i]=s[i]-32;
        }
    }
    return s;
}
