//#include<stdio.h>
//void main(){
//int sum;
//int p[]={1,2,3};
//int bt[]={2,3,4,1};
//int ct=0;
//for (int i=0; i<=2;i++){
//    printf("%d", p[i]);
//
//}
//for(int i=0;i<=3;i++){
//    
//    sum=ct+bt[i];
//    printf("%d\n",&sum);
//}
//for(int i;i<=3;i++){
//    int tat=ct-sum;
//     printf("%d\n",&tat);
//}
//
//}



#include <stdio.h> 
int main() { 
  int n; 
  printf("Enter an integer: "); 
  scanf("%d", &n); 
 
  for (int i = 1; i <= 10; i++) { 
    printf("%d * %d = %d \n", n, i, n * i); 
  } 
  return 0; 
} 
