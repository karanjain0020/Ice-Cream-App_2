#include "IceCreamCup.h"
#include "IceCreamCone.h"
#include <vector>

int main(){



	IceCream* c1 = new IceCreamCone("waffle", "chocolate");
	c1->addTopping("choco chip");
    c1->addTopping("marshmellows");
	c1->addTopping("banana");

	

	IceCream* c2 = new IceCreamCone("pretzel", "banana");
	c2->addTopping("peanut butter");
    c2->addTopping("nutella");

    IceCream* i3 = new IceCreamCup("medium", "black current");
    i3->addTopping("bonet");
    i3->addTopping("gummy bears");



	cout << "-----------" << endl;
	cout << "-----------" << endl;

	//create a vector of Bird*
	vector<IceCream*> v;

	//add to the vector
	v.push_back(c1);
	v.push_back(c2);
	v.push_back(i3);

	//iterate over the vector
	for(vector<IceCream*>::iterator it = begin(v); it != end(v); ++it) {
    	 (*it)->display();

	}


	//release memory
	delete c1;
	delete c2;
	delete i3;


	return 0;
}
