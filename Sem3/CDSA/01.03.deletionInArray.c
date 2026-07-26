#include <stdio.h>
void traversal(int arr[],int *n){
  int size = *n;
  printf("Your given array :: ");
  for(int i =0;i<size;i++){
    printf("%d \n",arr[i]);
  }
  printf("\n");
  return ;
}
void deletion(int arr[],int *n){
  int size = *n;
  if(pos<0 || pos>=size) {
  	printf("You have entered invalid position\n");
  	return ;
  }
  for(int i =pos;i<size-1;i++){
  	arr[i] = arr[i+1];
  }
  (*n)--;
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
  traversal(arr,&n);
  printf("Enter index at which val in array to be deleted  :: ");
  scanf("%d",&pos);
  deletion(arr,&n,pos);
  traversal(arr,&n);
  return 0;
}
