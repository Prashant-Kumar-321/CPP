#include<stdio.h>

typedef struct Point //unnamed struct 
{
  // static int faa; // Error  
  const int Id; 
  int x; 
  int y; 
} Point; //typedef struct <unnamed> Point<Alias type-Name>

int main()
{
  Point p1 = {.Id = 1, .x = 10, .y = 20}, p2={.Id = 2, .y = 5, .x = 15};
  // struct Point p; 

  printf("%d, %d, %d, \n",p1.Id, p1.x, p1.y); 

  printf("%d, %d, %d \n", p2.Id, p2.x, p2.y);    

  return 0; 
}