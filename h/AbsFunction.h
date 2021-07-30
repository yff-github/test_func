#ifndef __AbsFunction__
#define __AbsFunction__
#include<string>
class absfunction{
public:
    absfunction(){}
    virtual std::string Expression(void)=0;
    virtual double operator()(double)=0; 
    virtual int derivation(int)=0;
};

#endif