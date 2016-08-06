
#ifndef decorator_h
#define decorator_h

#include "textprocess.h"

class Decorator: public TextProcessor{
protected:
    TextProcessor *component;
public:
    void setSource(std::istream *inp) override;
    Decorator(TextProcessor *component);
    virtual ~Decorator();
};

#endif /* decorator_h */