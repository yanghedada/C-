#include <iostream>
using namespace std;

class printData{
public:
	void print(int i) {
		cout << "Printing int : " << i << endl;	
	}
	void print(double f) { 
		cout << "printing float : " << f << endl;
	}
	void print(char* c) {
		cout << "printing char : " << c <<endl;
	}};

int main()
{
	printData pd;
	pd.print(5);
	pd.print(500.33);
	pd.print("hello c++ ");
	return 0;

}
