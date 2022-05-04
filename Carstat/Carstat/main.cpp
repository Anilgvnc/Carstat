#include <iostream>
#include "cars.h"
using namespace std;

int main(){
	Carstat obj1("Ford", "Connect", 2007);
	Carstat obj2("BMW", "i3", 2020);
	cout << obj1.brand << "\t" << obj1.model << "\t" << obj1.year << endl;
	cout << obj2.brand << "\t" << obj2.model << "\t" << obj2.year << endl;
	return 0;
}