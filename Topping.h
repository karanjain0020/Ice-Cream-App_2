#ifndef TOPPING_H
#define TOPPING_H

#include <iostream>
#include <vector>
#include <string>


using namespace std;


class Topping {

  protected:  //can't I make this private
    vector<string> toppings;

    public:
    Topping();
    virtual ~Topping(){}
    virtual void addTopping(string toppingflavor){}
    virtual void display(){}

    

};



#endif









