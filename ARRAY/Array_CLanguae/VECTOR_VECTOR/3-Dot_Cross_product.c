#include<stdio.h>
#include<conio.h>

int dotproduct(int a[], int b[], int size);
void cross_product(int a[], int b[] , int c[], int );

int main()
{
    int a[3], b[3], mag, c[3];
    char standunitvect[3] = {'i', 'j', 'k'}; 

    // taking input of array form user 
    printf("Enter vec(a) = ");  // vec(a)
    for(int i=0; i<3; i++)
     scanf("%d",&a[i]);
    
    printf("Enter vec(b) = "); // vec(b)
    for(int i=0; i<3; i++)
      scanf("%d",&b[i]);

    // function call to calculate dot product of vec(a) and vec(b);
    mag = dotproduct(a,b,3);
    printf("Dot_product(vec(a).vec(b)) = %d\n",mag);

     cross_product(a,b,c,3);// Will return cross product of vec(a) and vec(b);
    // print cross product of vec(a) and vec(b)
    printf("Crosproduct( vec(a)Xvec(b) ) = ");

    for(int i=0; i<3; i++)
    { 
         if(i != 2)
            printf("%2d %c + ",c[i],standunitvect[i]);
        else 
            printf("%2d %c\n",c[i],standunitvect[i]);
    }
      

    getch();
    return 0;
}

// function definition 
int dotproduct(int a[], int b[], int size)
{
    int i, sum = 0 ;
    for(i=0; i<size ; i++)
      sum += a[i]*b[i] ; 

    return sum ; 
}

void cross_product(int a[], int b[], int c[], int size )
{
    c[0] = a[1]*b[2] - a[2]*b[1];
    c[1] = -(a[0]*b[2] - a[2]*b[0]);
    c[2] = a[0]*b[1] - a[1]*b[0]; 
}
