#include<stdio.h>
int main()
{
    char ch='Y';
    int number,largest,smallest,average=0,a=1;
    printf("\nEnter a number :");
    scanf("%d",&number);
    largest=number,smallest=number;
     while (ch=='y'||ch=='Y')
    {
        printf("\nEnter another number :");
        scanf("%d",&number);
        if (number>largest)
        {
            largest=number;
        }
        else if (number<smallest)
        {
            smallest=number;
        }
        average=average+number;
        a++;

        printf("\nDo you want to enter another value Y/N? ");
        scanf(" %c",&ch);

    }
    average=(average+number)/a;

    printf("\nSmallest=%d \nLargest=%d \nAverage of %d and %d =%d",smallest,largest,smallest,largest,average);
}
