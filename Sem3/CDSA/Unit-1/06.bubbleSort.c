
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
void swap(int *a,int *b){
  int c = *b;
  *b = *a;
  *a = c;
  return;
}
void bubbleSort(int arr[],int *n){
  for(int i =0;i<*n-1;i++){
    for(int j =0;j<*n-1-i;j++){
      if(arr[j]>arr[j+1]) {
        swap(&arr[j],&arr[j+1]);
      }
    }
  }
  return;
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
  traversal(arr,&n);
  bubbleSort(arr,&n);
  traversal(arr,&n);
  return 0;
}
