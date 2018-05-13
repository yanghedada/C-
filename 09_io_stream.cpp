#include <iostream>


using namespace std;

int main(){
	char name[50];
	cout << "请输入你的名字 ： ";
	cin >>  name;
	cout << "您的名字是 : " << name << endl;

	char err[] = "Unable to read.... ";
	cerr << "Error message : " << err << endl;


	char log[] = "Unable to read ...";
	clog << "Error message : " << log << endl;
	return 0;
}
