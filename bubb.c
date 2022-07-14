#include<stdio.h>
int main()
{
   int n,i,j,temp;
   printf("enter the size of the array");
   scanf("%d",&n);
   int a[n];
   //accept the elements into the array
   printf("enter the elements");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
      //sort the array
       for(i=0;i<n-1;i++)
       {
          for(j=0;j<n-1-i;j++)
          {
            if(a[j]>a[j+1])
          {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
           }
       }
   }
          printf("sorted array i=\n");
          for(i=0;i<n;i++)
         {
              printf("%d\t",a[i]);
         }
	int key;
	printf("\nenter the key");
	scanf("%d",&key);
          int f=0;
          int l=n-1;
             while(f<=l)
             {
              int mid=(f+l)/2;
              if(a[mid]==key)
              {
              printf("%d is found at location %d\n",key,mid+1);
               return 0;
              }
              else if(key>a[mid])
              {
                f=mid+1;
              }
               else
              {
                l=mid-1;
              }
            }
              printf("key not found\n");
		return 1;
            }
         
 

           
            

    
     
      
                                                                     
