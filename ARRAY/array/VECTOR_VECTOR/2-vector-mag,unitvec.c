#include<stdio.h>
#include<conio.h>
#include<math.h>

float VecMag (int a[],int size);
void Unitvec(int a[], float unit_a[],int size);


int main()
{
    float mag, unit_a[3];
    int a[3];
    char standUnitvec[3] = {'i', 'j', 'k'};

    printf("Enter vec(a) = ");
    // taking vec(a) from user 
    for(int i=0; i<3; i++)
       scanf("%d",&a[i]);

    mag =  VecMag(a,3); // function return magnitude of vec(a);
    printf("mag(a) = %0.2f",mag);

    // function return unit vec(a);
    Unitvec(a,unit_a,3);

    // print unit vector(unit_a)
    printf("\n\nunitVec(a) = ");
    for(int i=0; i<3; i++)
    { 
        if(i==2)
            printf("%0.2f %c",unit_a[i], standUnitvec[i]);
        else
            printf("%0.2f %c + ",unit_a[i], standUnitvec[i]);

    }


    getch();
    return 0;
}

// function definition 
float VecMag (int a[], int size)
{
    int i,sum = 0; 

    for(i=0; i<size; i++)
      sum += a[i] * a[i] ; 

    return sqrt(sum);
}

void Unitvec(int a[], float unit_a[],int size)
{
  int i;
  for(i=0; i<size; i++)
    unit_a[i] = a[i] / VecMag(a,3); 
}
