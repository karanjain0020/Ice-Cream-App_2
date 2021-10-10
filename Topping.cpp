#include "Topping.h"


using namespace std;



    Topping::Topping(){
        toppings.push_back("chocoloate chips");
        toppings.push_back("butter scotch");
    }

    void Topping::addTopping(string toppingflavor){
        toppings.push_back(toppingflavor);
    }

    void Topping::display(){
        for (int i = 0; i < toppings.size(); i++){
            cout << toppings[i]<<"\n";   //ask this for sure
        } 
    }

    















