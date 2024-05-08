#include<stdio.h>
void main()
{
  int arr[]={1,5,8,9,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  int min=arr[0];
  int max=arr[0];
  for(int i=1;i<n;i++)
    {
      if(arr[i]>min)
      {
        min=arr[i];
      }
      if(arr[i]<max)
      {
        max=arr[i];
      }
    }
  printf("%d",min);
  printf("%d",max);
}