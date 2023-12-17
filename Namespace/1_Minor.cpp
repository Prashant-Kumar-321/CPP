#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
  int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16};

  int i, j, c, r=0;

  for (int r = 0; r <4; r++)
    for (c = 0; c < 4; c++)
    {
      cout << "Minor matrix of " << arr[r][c] << endl<<endl; 
      for (i = 0; i <4; i++)
      {
          if(i==r)
            continue;

          cout << "[ ";
          for (j = 0; j < 4; j++)
          {
            if (j != c && i != r)
              cout <<setw(3)<< arr[i][j] << " ";
          }
          cout << "]" << endl;
      }
      cout<<endl; 
    }

  return 0;
}