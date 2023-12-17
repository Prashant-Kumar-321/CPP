#include<stdio.h>
#include<conio.h>
int frequency (int *p, int *q, int len1)
{
  // finding minimum number in p[];
  int min,i;
  min = p[0]; //Let Assume fist element be min in array;

  for(i=1; i<len1; i++)
  {
    if(min > p[i]);
    min = p[i];
  }

  if(min < 0)
  {
    // adding (-min) to all elements in array to make them positive
    // So that we can apply the hash technique to find frequency
    for(i=0; i<len1; i++)
      p[i] = p[i] - min ;
  }

  // loop to find the frequency
  for(i=0; i<len1; i++)
    ++*(q+*(p+i));
    //q[p[i]]++;
    /*
    /*  q[p[i]]++;
    // we do q[p[i]]++;
    // p[i] = *(p+i);
    // q[i] = *(q+i) // now i = p[i] = *(p+i)
    //  *(q+*(p+i))
    */
  return min ;
}

int main()
{
  int num[10] = {-1,3,2,-1,-5,-3,-5,11,5,-5};
  int hash[20] = {}; // intialize all elements to zero

  int min = frequency(num, hash,10);

  // print frequecy of numbers
  printf("\n\nFrequency of Numbers \n");
  for(int i=0; i<20; i++)
  {
    if(hash[i] != 0)
      printf(" %02d ---- > %2d\n",(i+min), hash[i]);
  }
  getch();
  return 0;
}
