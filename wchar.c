#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL,"zh_CN.utf-8");
  const wchar_t wchar[] = L"孩子是非常可爱的，我们将来要生一个";
  
  //print all wchar
  int length;
  int max;
  wchar_t wch;

  char * mbs = (char*) malloc(1000);
  if(wcstombs(mbs,wchar,1000) == (size_t)-1)
    {
      fprintf(stderr,"%s","wrong locale");
    }

  max = strlen(mbs);
   while(max>0)
  {
    length = mblen(mbs,max);
    mbtowc(NULL,NULL,0); //reset
    if(mbtowc(&wch,mbs,max) == -1)
      {
	fprintf(stderr,"%s","not valid multiple bytes");
      }
    max -= length;
    mbs += length;
    printf("[%lc]",wch);
  }
  
  return 0;
}
