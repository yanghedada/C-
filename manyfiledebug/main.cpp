#include <iostream>
#include "Circle.h"

using namespace std;

int main () {
	Circle c(3);
	cout << "area = " << c.Area() << endl;
	c.display();
	return 0;

}
