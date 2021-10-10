#ifndef ICE_CREAM_CUP_H
#define ICE_CREAM_CUP_H

#include "IceCream.h"


using namespace std;

class IceCreamCup : public IceCream
{

private:
string type;

public:
IceCreamCup(string type, string flavor);
void addToppings(string toppingfl){}
void display();   
~IceCreamCup();

};
#endif