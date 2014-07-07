#include <iostream>
#include <string>
#include <algorithm>
int a=5;
int b= 140;

void check(int n)
{
  int l = b-a;
  if(l<9)
    {
      int c=b; if(c>9) c /= 10;
      if(n+c/10>0 && n+c/10<c+10-l)
	{
	  std::cout<< "errror" << std::endl;
	}
    }
}
  
int main()
{
  int i;
  std::vector<int> vec;

  while(std::cin >> i)
    {
      vec.insert(vec.begin(),i);
      for(size_t i=0;i<vec.size();++i)
	{
	  if(a>0||b>0)
	    check(vec[i]);
	  else
	    break;
	  a /= 10;
	  b /= 10;
	}
      a = 5; b= 140;

      //shift right
      
      
    }
}
	  
