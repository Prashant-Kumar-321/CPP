#include<stdio.h>
#include<conio.h>

int main()
{
  char ch[256] = {0}; // all elements becomes zero
  int count = 0;

  for(int i = 0; i<256; i++)
  {
     ch[i] = i;

  }

  // to print values of ch array
  for(int i=0; i<256; i++)
  {
    printf(" %d.\t%c\n\n",(i),ch[i]);

//    count++;
//    if(count == 10)
//    {
//      printf("\n\n\n");
//      count = 0;
//    }
  }
 getch();
  return 0;
}
