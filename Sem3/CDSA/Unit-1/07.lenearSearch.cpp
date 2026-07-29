
#include <stdio.h>

int  linearSearch(int arr[],int *n,int val){
  int size = *n;
  for(int i =0;i<size;i++){
  	if(arr[i]==val) return i;
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
  printf("Enter value two perform linear search in array   :: ");
  scanf("%d",&val);
  int idx = linearSearch(arr,&n,val);
  if(idx<0) {
  	printf("the given value is not found in array \n");
  }
  else {
  	printf("the given value found at idx %d", idx);
  }
  return 0;
}
