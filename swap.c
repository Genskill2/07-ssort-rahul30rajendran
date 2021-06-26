#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int arr[100],int n,int a)
  {
  int maxi=-18889;
  for (int i=a;i<n;i++)
  {if(arr[i]>maxi)
  maxi=arr[i];
  int temp=arr[a];;
  arr[a]=maxi;
  arr[i]=temp;
  }
  }
  void ssort(int arr[100],int n)
{for(int i=0;i<n-1;i++)
swap_max(arr,n,i);
}
