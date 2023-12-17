#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

// Function generating random value in the range [1-6]
unsigned short random(){
  // for(int i=0; i<2; i++){
  //     (rand()%6) + 1; 
  // }
  return (rand() % 6) + 1;
}

// Driver code
int main()
{
  srand(time(NULL)); 
  while (true)
  {
    unsigned short num = random();
    cout << "Dice Number = " << num << "\n"<<endl;

   
    char ch = getch();
    if(ch == 'e')
      break; 
  }

  return 0;
}