#include <iostream>

using namespace std;
class Box{
public:
	Box(){
		cout << "调用构造函数" << endl;	
	}
	~Box()
		{
		cout << "调用析构函数" << endl;
	    }	
};
int main()
{
	double* pvalue = NULL;
	pvalue = new double;
	Box* myBoxArray = new Box[4];
	delete [] myBoxArray;
		
	*pvalue = 29494.99;

	cout << "value of pavalue : " << *pvalue << endl;
	delete pvalue;
	return 0;
}
