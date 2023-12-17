#include <stdio.h>
#include <conio.h>

void Left_Rotate_Element_d_distance(int age[], int size);

int main()
{
    int age[10] = {1, 2, 5, 9, 5, 7, 12, 15, 8, 10}, i;

    Left_Rotate_Element_d_distance(age, 10);

    // print elements of arrays after left rotation by d distance ;
    printf("After counterClockWise Rotation sequence of number is : \n\n");
    for (i = 0; i < 10; i++)
        printf("%2d ", age[i]);

    getch();
    return 0;
}

void Left_Rotate_Element_d_distance(int age[], int size)
{
    int i,d;

    printf("Enter a number by which you want to rotate elements  towards left: ");
    scanf("%d",&d);

    // Rotating element towards left
    for (int a = 0; a < d; a++)
    {
        for (i = 0; i < size - 1; i++)
        {
            // swap the value of  age[i] and age[i+1]
            age[i]   +=  age[i+1];
            age[i+1]  =  age[i] - age[i + 1];
            age[i]   -=  age[i + 1];
        }
    }
}