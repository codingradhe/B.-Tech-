#include <stdio.h>

int  binarySearch(int arr[],int *n,int val){
  int low = 0 ,high = *n-1;
  while(low<=high){
  	int mid =low+ (high-low)/2;
  	if(arr[mid] == val ) return mid;
  	else if(arr[mid]<val) low = mid+1;
  	else high = mid-1 ;
  }
  return -1 ;
}

int main() {
  int n,val;
  printf("Enter size of array :: ");
  scanf("%d",&n);
  int arr[n+10];
  printf("Enter elements of array:: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter value to perform linear search in array   :: ");
  scanf("%d",&val);
  int idx = binarySearch(arr,&n,val);
  if(idx<0) {
  	printf("the given value is not found in array \n");
  }
  else {
  	printf("the given value found at idx %d", idx);
  }
  return 0;
}
