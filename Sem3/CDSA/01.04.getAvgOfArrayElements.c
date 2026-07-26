#include <stdio.h>

float getAvg(int arr[],int *n){
  float sum = 0,ans = 0;
  for(int i = 0;i < *n;i++){
    sum+=arr[i];
  }
  ans = sum/(*n);
  return ans;
}
int main() {
  int n;
  printf("Enter size of array :: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements of array:: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  float avg = getAvg(arr,&n);
  printf("Average of all elements of array is = %f", avg);
  return 0;
}
