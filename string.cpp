// Arthor: Jack Chin
// Date: 24/06/2014
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <fstream>
#include <iterator>

using namespace std;

void trimspace(std::string str)
{
  //trim left use string library
  std::string::iterator it= str.begin();
  while(isspace(*it))
    {
      it = str.erase(it);
    }
  //trim right use string library
  std::reverse(str.begin(),str.end());
  it= str.begin();
  while(isspace(*it))
    {
      it = str.erase(it);
    }
  std::reverse(str.begin(),str.end());
  std::cout << str << "+++" << std::endl;
}
void trimspace1(std::string str) //find_first_of find_last_of
{
  const auto strbegin  = str.find_first_not_of("\t \v\r\n");
  const auto strend = str.find_last_not_of("\t \v\r\n");
  const auto strrange = strend - strbegin + 1;
  str = str.substr(strbegin,strrange);
  std::cout << str << "+++" << std::endl;
  
  
}

template <typename T>  //T type of stream element
void trimspace2(std::string str) //user istream_iterator  suppose it's a number string
{
  istringstream iss(str);
  ostringstream oss;  //oss use a copy of str as it underlying string device.
  copy(istream_iterator<T>(iss),istream_iterator<T>(),ostream_iterator<T>(oss," "));
  cout << oss.str() << endl;
  
}

//read ascii file into string

int main() 
{
  std::string str = " 20 30    100  ";
  trimspace(str);
  trimspace1(str);
  trimspace2<int>(str);

  // //read ascii file into string but this method is very slow  
  ifstream ifs("test.txt"); ifs >> noskipws;
  string s( (istream_iterator<char>(ifs)),istream_iterator<char>());
  cout << s << endl;

  //c++
  string s1;
  fstream ifs1("test.txt");
  ifs1.seekg(0,ios_base::end);
  auto sz = ifs1.tellg();
  s1.reserve(sz);
  ifs1.read(&s1[0],sz);
  cout << s1 << endl;

  //c method
  char* p;
  FILE* fp = fopen("test.txt","r");
  if(fp)
    {
      fseek(fp,0,SEEK_END);
      long int sz = ftell(fp);
      p = (char*) malloc(sz*sizeof(char));
      fseek(fp,0,SEEK_SET);
      fread(p,1,sz,fp);
      fclose(fp);
    }
  cout << p << endl;
  free(p);

  //rdbuf method
  string s2;
  ifstream ifs2("test.txt");
  ostringstream oss;
  oss << ifs2.rdbuf();
  s2 = oss.str();
  cout << s2 << endl;
  
  return 0;
}
    
  
