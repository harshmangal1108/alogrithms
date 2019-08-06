#include<stdio.h>
int main()
{
  int c,first,last,middle,n,search,array[10];
   printf("enter number of elements ");
   scanf("%d",&n);

   printf("Enter numbers  ..");
   for(int i=0;i<n;i++)
      {
 	scanf("%d",&array[i]);
       }
  printf("enter value to search ");
  scanf("%d",&search);
 first=0;last=n-1;middle=(first+last)/2;
while(first<=last)
  {
	if(array[middle]<search)
		{ 
      first=middle+1;
      }
	else if (array[middle]==search) 
      {
		printf("%d FOund at location %d ",search,middle+1);
	     break;
       }
else 
      {
   last=middle-1;
   middle=(first+last)/2;
      }
  }
if (first>last)
   {
    printf("not found " );
    } 

return 0;
}
