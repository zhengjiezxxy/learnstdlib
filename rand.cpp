//implement a shuffle bag


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
  // srand(time(0));
  // for(int i=0;i<100;++i)
  //   cout << rand()%5 << " " ;

  
  for(int i=0;i<100;++i)
    {
      vector<int> vec{1,2,3,4,5};
      random_shuffle(vec.begin(),vec.end());
      for(int j=0;j<5;++j)
	{
	  if (vec.back() == 5)
	    {
	      cout << "c" ;
	      vec.pop_back();
	    }
	  else
	    {
	      cout << "0";
	      vec.pop_back();
	    }
	}
    }
  return 0;
}
