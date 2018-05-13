#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int main1()
{ 
   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
   cout << "Greeting message: ";   
   cout << greeting << endl; 
   return 0;
}

int main (){
   char str1[11] = "Hello"; 
   char str2[11] = "World";  
   char str3[11];  
   int  len ; 
   strcpy( str3, str1);  
   cout << "strcpy( str3, str1) : " << str3 << endl; 
 
   strcat( str1, str2); 
   cout << "strcat( str1, str2): " << str1 << endl; 
   len = strlen(str1);  
   cout << "strlen(str1) : " << len << endl; 
   return 0;
}
