#include<iostream>
#include<cstdlib>
#include<conio.h>
//#include<cstdlib>

using namespace std;
class HCF
{
  int a,b;
public:
  HCF(int x=1, int y=1) //Default Argument Constructor
  {
    a = x;
    b = y;
    cout<< "Constructor" <<endl;
  }

  ~HCF()
  {
    cout<< "Destructor\n";
  }

  // Setter of a and b variable
  void setA(int x)
  {
   a = x;
  }
  void setB(int y)
  {
    b = y;
  }

  // hcf calculating of a,b
  int hcf()
  {
    int i;

    for(i = min(a,b); i>=1; i--)
    {
      if((a%i == 0 && b%i==0))
        return i;
    }

    return 1; // optional
  }

};

int min(int a, int b) // C Normal function 
{
  return (a>b) ? a: b;
}

void printArr(int n, int (&x)[5])
{
  int i;
  for(i=0; i<n; i++)
    cout<< x[i]<< " ";
}

// Driver Code 
int main()
{
  int arr[5] = {2,1,4,6,-7};
  cout<< "Elements of arr \n";
  
  printArr(5,arr);

  HCF*h = new HCF(7,3);
  HCF x(12,3);

  cout<< "HCF = "<< h->hcf()<< endl;
  HCF &a = *h; // Making reference variable for object created dyanamically
  cout<< "HCF = "<< a.hcf()<< endl;

  cout<< "HCF = "<< x.hcf()<< endl;

  //delete &a;
  delete h;

  // Creating dynamic object of HCF class usig calloc and malloc
  int *p = (int *)malloc(2*sizeof(int));
  h = (HCF *)calloc(1,sizeof(HCF));

  cout<< "Enter two Number : ";
  cin>> p[0]>> p[1];

  h->setA(p[0]); // setting the a and b of object h;
  h->setB(p[1]);

  free(p); // freed the memory after using

  cout<< "HCF = "<< h[0].hcf()<< endl;

  free(h);


  return 0;
}
