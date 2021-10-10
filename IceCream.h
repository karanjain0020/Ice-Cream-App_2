#ifndef ICE_CREAM_H
#define ICE_CREAM_H


#include <string>
#include <iostream>
#include "Topping.h"
using namespace std;

class IceCream {

    protected:
    string flavor;
    Topping top;
        
	
	public:
		IceCream(string flavor);
		virtual ~IceCream(); //why??
	 	virtual void addTopping(string toppingfl)=0;
		virtual void display();
        //string flavor;
        //Topping* top = new Topping(); //where to create this new object

};
#endif