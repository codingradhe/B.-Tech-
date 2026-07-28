
#include <stdio.h>
#include <math.h>
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
void selectionSort(int arr[],int *n){
  for(int i =0;i<*n-1;i++){
    int minidx = i;
    for(int j = i;j<*n;j++){
      if(arr[j]<arr[minidx]){
        minidx = j;
      }
    }
    swap(&arr[i],&arr[minidx]);
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
  selectionSort(arr,&n);
  traversal(arr,&n);
  return 0;
}
