#include<iostream>

using namespace std;

class ZOOM
{

 private:
   unsigned int zoom;

 public:
   void setZoom(int a)
   {
    if(a<10)
      zoom = 10;

    else if (a>400)
      zoom = 400;

    else
      zoom = a;
   }

  int getZoom()
  {
    return zoom;
  }

  // constructor
  ZOOM(int a = 10) //default argument constructor
  {
    zoom = a;
  }

};

// Driver code
int main()
{
 ZOOM z = 10;

 int x;
 cout<< "Enter How much zoom you want : ";
 cin>> x;

 z.setZoom(x); // setting the zoom of z object;
 cout<< "zoom : "<< z.getZoom() << endl ;

  return 0;
}





