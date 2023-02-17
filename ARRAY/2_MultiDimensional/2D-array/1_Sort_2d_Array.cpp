#include <iostream>
#include <iomanip>
using namespace std;

// Global function
void SortArray(int (*const arr)[4], int r, int c)
{
  int i, j, k, l; // to maintaine loop

  // sorting array pointing arr
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      for (k = i; k < r; k++)
      {
        if (k == i)
          l = j + 1;
        else
          l = 0;

        for (; l < c; l++)
        {
          if (arr[i][j] > arr[k][l])
            swap(arr[i][j], arr[k][l]);
        }
      }
    }
  }
}

// display Array
void display(int (*const arr)[4], int r, int c)
{
  cout<< endl; 
  int i, j;
  for (i = 0; i < r; i++)
  {
    cout << "[ ";
    for (j = 0; j < c; j++)
    {
      cout << setw(3) << arr[i][j] << " ";
    }
    cout << " ]" << endl;
  }
  cout<< endl; 
}

int main()
{
  int arr[3][4] = {{1, 8, 3, 0}, {-2, 4, 18, 10}, {10, 2, 4, 8}};
  SortArray(arr, 3, 4);
  display(arr, 3, 4);

  return 0;
}