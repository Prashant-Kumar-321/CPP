
/*Description 
 Right Rotation is same as right shift but there is elements instead of bits 
 Remove right end element and shift each element toward right and place right end element
 to the first element;

 Same with left Rotation */


// function declaration of  Rotate_Element_towards_right();
void  Rotate_Element_towards_right(int a[], int size);

#include<stdio.h>
#include<conio.h>

int main()
{
    int num[10];
    
    Rotate_Element_towards_right(num, 10);  // function call to rotate elements towards right by d distance ;

    getch();
    return 0;
}

// function Definition of Rotate_Element_towards_right(int a[], int size);

void  Rotate_Element_towards_right ( int a[], int size )
{
    int d;

    printf("Enter 10 Number : ");

    for(int i=0; i<size; i++)
       scanf("%d",&a[i]);

    printf("Enter a value of \'d\' by which you want to rotate elements of Array towards right : ");
    scanf("%d",&d);

    for(int i=0; i<d; i++)
    {
        for(int j = (size-1); j >= 1; j--)
         { 
            // swap the values of a[j] and a[j-1];  
            a[j]    += a[j-1]; 
            a[j-1]  = a[j] - a[j-1]; 
            a[j]    -= a[j-1];  
         }
    }

    // loop to print elements of array after right rotation by d distance 
    for(int i=0; i<size; i++)
        printf("%2d ", a[i]);

}