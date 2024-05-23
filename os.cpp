#include<stdio.h>
#include<conio.h>

int main(){

	int p[]={1,2,3,4,5};
	int at[]={0,1,2,3,4};
	int bt[]={1,4,3,6,5};
	int ct[]={9,4,5,6,10};
	int tat[]={9,3,3,3,6};
	int wt[]={8,0,0,3,1};
	
	printf("process\t");
	for (int i=0; i<=4 ;i++){	
   printf("\n%d\t", p[i]);

     }    
     	printf("At\t");
	for (int j=0; j<=4 ;j++){	
    printf("\n%d", at[j]);
     }
     
     	printf("bt\t");
	for (int k=0; k<=4 ;k++){	
    printf("\n%d", bt[k]);
     }
     	printf("ct\t");
	for (int l=0; l<=4 ;l++){	
    printf("\n%d", ct[l]);
     }
     	printf("tat\t");
	for (int m=0; m<=4 ;m++){
	   printf("\n%d", tat[m]);
     }
      	printf("wt\t");
	for (int n=0; n<=4 ;n++){	
 printf("\n%d", wt[n]);
   }
  return 0;
}






