// Arthor: Jack Chin

#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int insenComp(string& s,string& s1)
{
  transform(s.begin(),s.end(),s.begin(),::tolower);
  transform(s1.begin(),s1.end(),s1.begin(),::tolower);
  return lexicographical_compare(s.begin(),s.end(),s1.begin(),s1.end());
}

int insenComp1(const char* s,const char* s1)
{
  // transform(begin(s),end(s),begin(s),::tolower);
  // transform(begin(s1),end(s1),begin(s1),::tolower);
  //return strcmp(s,s1);
}

int main()
{
  //case insentive comparision
  string s= "ILOVEYOUBABY";
  string s1= "iloveyoubaby";

  //  int i = insenComp1(s,s1);
  // if(i==0)
  //   cout << "equal" << endl;
  // else if(i<0)
  //   cout << "less" << endl;
  // else
  //   cout << "greater" << endl;

  return 0;
}
