#include <iostream>
using namespace std;

int max(int num1, int num2){
	int result;
	
	if(num1 > num2)
		result = num1;
	else
		result = num2;
	
	return result;
}

int main01 ()
{
	int a = 100, b = 200;
	int ret;
	
	ret = max(a, b);	
	cout << "Max values is : " << ret << endl;
	return 0;
}





/*---------------------second---------------------*/

int sum(int a, int b=20){
	int result;
	result = a + b;
	return result;
}



int main()
{
	int a = 100, b = 200, result;
	
	result = sum(a, b);
	cout << "Total value is : " << result << endl;

	result = sum(a);
	cout << "Total value is : " << result << endl;
	
	return 0;

}











