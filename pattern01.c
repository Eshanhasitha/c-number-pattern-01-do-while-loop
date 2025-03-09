#include<stdio.h>
int main()
{
    //Varialble to store the number of rows
    int a;
    printf("Enter the number of rows: \n");
    scanf("%d",&a);
    //outer loop to print the number of rows
    do
    {
      
        //Assigning the value of a to b
        int b=a;
        
        //inner loop to print numbers in each row
        do
        {
            printf("%d",b);
            b--;
        } while (b>=1);
        
        
        printf("\n");
        a--;

     
    } while (a>=1);
    
    return 0;
}
