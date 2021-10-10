
#include "IceCream.h"


using namespace std;

IceCream::IceCream(string flavor_) : flavor(flavor_) {}

/*void IceCream::addTopping(string toppingfl){
    top.addTopping(toppingfl);
}
*/

void IceCream::display(){
    cout<<"Ice Cream Flavor: "<<flavor<<"\n";
    top.display();

}

IceCream::~IceCream() {
    	cout << "Freeing the memory space for the ice cream. " << endl;

}
















