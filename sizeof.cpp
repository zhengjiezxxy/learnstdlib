#include <iostream>

using namespace std;
class Base{};
class Derived:Base{};
void func(){};
int arr[10];
const char* sp = "four";

int main()
{
    Base* base = new Base();
    Derived* der = new Derived();
    Base* base1 = (Base*) der;
    int * np = arr;
    
   cout << sizeof *base1 << endl;  //1
   cout << sizeof *der << endl;  //1  optimization
  // cout << sizeof func << endl; //ISO C++ forbids applying ‘sizeof’ to an expression of function type [-fpermissive]
   cout << sizeof &func << endl; //8 64bit 4 32bit
   cout << sizeof arr << endl; //40
   cout << sizeof np << endl;  //8
   cout << sizeof sp << endl;  //8
   cout << sizeof ("four") << endl; // 5
   //cout << sizeof "four" << endl; // don't compile
   return 0;
}
