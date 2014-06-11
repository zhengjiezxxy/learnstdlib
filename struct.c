//Does a struct/union/enum and int type has the same namespace
//6.2.3 Name spaces of identifiers

//1.label names (disambiguated by the syntax of the label declaration and use);
//2.the tags of structures, unions, and enumerations (disambiguated by following any
//of the keywords struct, union, or enum);
//3.the members of structures or unions; each structure or union has a separate name
//space for its members (disambiguated by the type of the expression used to access the
		       //member via the . or -> operator);
//4.all other identifiers, called ordinary identifiers (declared in ordinary declarators or as
//enumeration constants).

#include <stdio.h>
#include <stdlib.h>

int id;
struct id
{
  int id;
};   
//union id; //cannot compile 

    static int a; //internal linkage
    extern int a; //a should get external linkage, no?

void f();
int main()
{
  static int a;
  ///error///
  /// extern declaration of ‘b’ follows declaration with no linkage
  //  static int b; //no linkage
  //  extern int b; //external linkage
  /////////
  printf("test");
}

void f()
{
int id;
struct id
{
  int id;
};   
//union id; //cannot compile 
 id:
  goto id;
}
