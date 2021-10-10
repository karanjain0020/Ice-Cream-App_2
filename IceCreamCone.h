#ifndef ICE_CREAM_CONE_H
#define ICE_CREAM_CONE_H


#include "IceCream.h"


using namespace std;

class IceCreamCone : public IceCream
{

private:
string type;

public:
IceCreamCone(string type, string flavor);
void addToppings(string toppingfl){}
void display();  
~IceCreamCone(); 

};
#endif