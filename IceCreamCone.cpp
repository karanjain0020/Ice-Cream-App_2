#include "IceCreamCone.h"


IceCreamCone:: IceCreamCone(string flavor_,string type_) : IceCream(flavor_){
    type_=type;
}

void IceCreamCone::addTopping(string toppingfl){
    if(toppingfl.compare("banana")){
        cout<<"Sorry we are out of banana flavor \n";
        //return 0;
    }
    else{
        top.addTopping(toppingfl);
    }

}

void IceCreamCone::display(){
    cout<<"Cone type:"<<type<<"\n";
    //top.display(); //how do I use super.display
    IceCream::display();
}

IceCreamCone::~IceCreamCone() {
    	cout << "Freeing the memory space for the ice cream cone. " << endl;

}


