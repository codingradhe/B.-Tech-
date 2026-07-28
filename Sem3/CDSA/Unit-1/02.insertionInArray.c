#include <stdio.h>

void insertion(int arr[],int *n,int val,int pos){
  int size = *n;
  if(pos<0 || pos>size) {
  	printf("You have entered invalid position\n");
  	return ;
  }
  (*n)++;
  for(int i =size;i>pos;i--){
  	arr[i] = arr[i-1];
  }
  arr[pos] = val;
  return ;
}

int main() {
  int n,val,pos;;
  printf("Enter size of array :: ");
  scanf("%d",&n);
  int arr[n+10];
  printf("Enter elements of array:: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter val which you want to insert in array  ::  ");
  scanf("%d",&val);
  printf("Enter index at which you want to insert in array  :: ");
  scanf("%d",&pos);
  insertion(arr,&n,val, pos);
  return 0;
}
