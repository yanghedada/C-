#include <iostream>
using namespace std;
extern int a, b;
extern int c;
extern float f;

int func()
{	
	return 13;
}
int main()
{
	int a, b;
	int c;
	float f;
	
	a = 10;
	b = 20;
	c = a + b;
	cout << c << endl;
	
	f = 70.3 / 3.0;
	cout << f << endl;
	int i = func();
	
	return 0;
}
