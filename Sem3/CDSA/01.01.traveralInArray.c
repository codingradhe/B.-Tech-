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
  return 0;
}
