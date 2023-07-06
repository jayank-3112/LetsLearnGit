//program to sort 0 1 2
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int c_0=0;
   int c_1=0;
   int c_2=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
         c_0++;
      else if(arr[i]==1)
         c_1++;
      else if(arr[i]==2)
         c_2++;
   }
   int p=c_0+c_1+c_2;
   for(int i=0;i<p;i++)
   {
      if(c_0)
      {
         arr[i]=0;
         c_0--;
      }
      else if(c_1)
      {
         arr[i]=1;
         c_1--;
      }
      else if(c_2)
      {
         arr[i]=2;
         c_2--;
      }
   }
}