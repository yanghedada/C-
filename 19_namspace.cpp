#include <iostream>
using namespace std;
namespace first_space{
	void func(){
	
		cout << "inside first_space" << endl;
	}}

namespace second_space{
	void func(){
	
		cout << "inside second_space" << endl;
	}}
using namespace first_space;

int main01()
{
	first_space::func();
	second_space::func();
	return 0;
}


int main()
{
	func();	
	return 0;
}
