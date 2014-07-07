

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
  //ofstream ofs("test1.txt");
  istringstream iss(" 0x9A 2.810000 <HAPPY>");

  int i;
  double f;
  string s;
 
  iss >> hex >> i >> dec >> setprecision(8) >>  fixed>> f >> s;
  cout << i << " " << setprecision(8) <<fixed << f << " " << s << endl;
  return 0;
}
