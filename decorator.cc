
#include "decorator.h"
#include "textprocess.h"

void Decorator::setSource(std::istream *in){
    component->setSource(in);
}

Decorator::Decorator(TextProcessor *component):
component{component} {}

Decorator::~Decorator(){
    delete component;
}

