#include "IceCreamCup.h"


IceCreamCup::IceCreamCup(string type_, string flavor_) : IceCream(flavor_){
    type_=type;
}

void IceCreamCup::addToppings(string toppingfl){
    if(toppingfl.compare("bonet")){
        cout<<"Bonet cannot be scooped by cup \n";
        //return 0;
    }
    else{
        top.addTopping(toppingfl);
    }

}

void IceCreamCup::display(){
    cout<<"Cone type:"<<type<<"\n";
    //top.display();
    IceCream::display();
}

IceCreamCup::~IceCreamCup() {
    	cout << "Freeing the memory space for the ice cream cup. " << endl;

}

