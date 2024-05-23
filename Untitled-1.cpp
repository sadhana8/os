#include<stdio.h>
#include<conio.h>
int main(){
int a[100],temp;
int i,j,n;
printf("Enter n:");
scanf("%d",&n);

printf("Enter numbers:\n");
for(i=0;i<n;i++){
    printf("a[%d]:",i);
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
for(j=1+1;j<n;j++){
    if(a[i]>a[j]){
        temp = a[i];
        a[i]= a[j];
        a[j] = temp;

    }
}
}
printf("Array in ascending order is:\n");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);

}
return 0;
}