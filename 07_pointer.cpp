#include <iostream> 
using namespace std;

int main01()
{
	int var1;
	char var2[10];
	cout << "var1 变量地址: " << &var1 << endl;
	
 	cout << "var1 变量地址: " << &var2 << endl;
	return 0 ;
}


int main()
{
	int var1 = 20;
	int *ip = &var1;
	cout << "Value of var variable : " << var1 << endl;
	cout << "Address stored in ip variable :  " << ip << endl;
	cout << "Value of *ip variable : " << *ip << endl;

	return 0 ;
}
