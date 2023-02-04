#include <stdio.h>
#include <conio.h>

void Add_Vec(int a[], int b[], int c[], int length);
void sub_Vec(int a[], int b[], int c[], int length);


int main()
{
    int a[3] = {0},   b[3] = {0},   c[3]= {0};
    char standUnitvec[3] = {'i', 'j', 'k'};


    // taking input vec(a) and vec(b) from user 
    printf("Enter vec(a) = ");
    for(int i=0; i<3; i++)
     scanf("%d",&a[i]);
    
    // vec(b);
    printf("\nEnter vec(b) = ");
    for(int i=0; i<3; i++)
      scanf("%d",&b[i]);


    Add_Vec(a, b, c, 3); // function that will return addition of vec(a) and vec(b);

    // vec(a+b) print in the screen 
    printf("\nVec(a+b) = ");
    for (int i = 0; i < 3; i++)
    {
        if (i == 2)
            printf("%2d %c\n", c[i], standUnitvec[i]); // don't want + at end
        else
            printf("%2d %c + ", c[i], standUnitvec[i]);
    }


    sub_Vec(a,b,c,3); // function that will return sub of vec(a) and vec(b); i.e displacement vector 

   // printvec(a-b); Displacements vector 
   printf("\nvec(a-b) i.e dispVec = ");
    for (int i = 0; i < 3; i++)
    {
        if (i == 2)
            printf("%2d %c\n", c[i], standUnitvec[i]); // don't want + at end
        else
            printf("%2d %c + ", c[i], standUnitvec[i]);
    }

    getch();
    return 0;
}


// function definition 
void Add_Vec(int a[], int b[], int c[], int length)
{
    int i;
    // Addition of a[] and b[] ;

    for (i = 0; i < length; i++)
        c[i] = a[i] + b[i];
}

void sub_Vec(int a[], int b[], int c[], int length)
{
    int i;
    // Addition of a[] and b[] ;

    for (i = 0; i < length; i++)
        c[i] = a[i] - b[i];
}


