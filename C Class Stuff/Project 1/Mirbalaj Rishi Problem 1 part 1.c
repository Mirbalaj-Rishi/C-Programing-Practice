#include<stdio.h>
#define MAXARRAY        1000


int get_data(float vals[],int max) //count how many values are in the array 
{ //since the array is size 1000 but will only have so many values

        int n = 0;

        while (n < max && scanf("%f" , &vals[n]) == 1)
            n++;
        return n;
}
int search(float vals[],int n,float key) //vals is the array to be searched | n is the size of the array | key is the value to be found
{
int i;int flag=0;
    for(i=0; i<n; i++)
    {
        if(vals[i]==key)
        {
             printf("The value %f is located at index  %d\n", key, i);
             flag = 1;
             return i;
        }
    }
if (flag==0)
  
  printf("Not Found\n");
  return -1;
}

int main(void)
{
char ch;
        float a[MAXARRAY],b[MAXARRAY],c[MAXARRAY] ;
        float key;
        int arraynumber;
        int number;
        float anvals,bnvals,cnvals;
        
        printf("Enter values for array 1, use an escape character to end it:\n");
        anvals = get_data(a,MAXARRAY); //get data can only accept integers
        scanf("%c",&ch); //when get_data cannot scan something scanf will scan it instead
        printf("\n \n \n");
        printf("Enter values for array 2, use an escape character to end it:\n");
        
        bnvals= get_data(b,MAXARRAY); //array B
        scanf("%c",&ch);
        printf("\n \n \n");
        printf("Enter values for array 3, use an escape character to end it:\n");
        
        cnvals= get_data(c,MAXARRAY); //array C
        scanf("%c",&ch);
        
        printf("\nEnter array you would like to search. 1 2 or 3:\n");
        scanf("%d", &arraynumber);
        printf("Enter a value to be searched:\n");
        scanf("%f", &key);
        if (arraynumber == 1)
        search(a,anvals,key);
        else if (arraynumber == 2)
        search (b,bnvals,key);
        else if (arraynumber == 3)
        search(c,cnvals,key);
}

