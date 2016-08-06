
#include "count.h"
#include <string>
#include <iostream>
using namespace std;

counting::counting(TextProcessor *p,const char c):Decorator{p},c{c}{}

static int occur=0;
string counting::getWord(){
    string s=component->getWord();

    string cur;
    const int len1=static_cast<int>(s.length());
    cout << "len1 is " << len1 << endl;
    int i=0;
    
    for (int pos=0;i<len1;i++){
        if(s[pos]==c){
            occur++;
            cur=to_string(occur);
            cout << "pos is " << pos << endl;
            cout << "i is " << i << endl;
            s.replace (pos,1,cur);
            pos+=cur.length();
        }
        else{
            pos++;
        }
    }
    return s;
}