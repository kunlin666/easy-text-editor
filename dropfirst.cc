
#include "dropfirst.h"
#include <string>
#include <iostream>
using namespace std;

dropfirst::dropfirst(TextProcessor *p,const int num):Decorator{p},num{num}{}

static string each_str(const int number,int len,string s){
    if(number > len){
        return s;
    }
    else {
        char new_s[len-number+1];
        for(int i=0;i<len-number;i++){
            new_s[i]=s[i+number];
        }
        new_s[len-number]='\0';
        return new_s;
    }
}

string dropfirst::getWord(){
    string s=component->getWord();

    int count_space=0;
    int len=static_cast<int>(s.length());
    bool is_space=false;
    for(int i=0;i<len;i++){
        if(s[i]==' '){
            is_space=true;
            count_space++;
        }
    }
    
    if(!is_space){
        return each_str(num,len,s);
    }
    
    else{
        int each_len=(len-count_space)/(count_space+1);
        string cur=each_str(num,each_len,s);
        string temp=cur;
        for(int i=1;i<=count_space;i++){
            temp=temp+" "+cur;
        }
        is_space=false;
        return temp;
    }
}
