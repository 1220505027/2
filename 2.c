#include <stdio.h>
#include <stdlib.h> 

 
 int MinSay(int n){
 	
 	int i;
 	int Sayi[n];
 	
 	for(i=0 ; i<n ; i++){   // 1+n+n=2n+1
          printf("%d. sayiyi giriniz : ",i+1);  // n
          scanf("%d", &Sayi[i]);   // n
     }
 	
 	int min=Sayi[0];  // 1
 	
 	int j;
 	
 	for(j=1 ; j<n ; j++){  // 1+n+n-1=2n

          if(min > Sayi[j]) // n-1
               min = Sayi[j]; // n-1
     }
     return min; // 1
     
     // T(n)=2n+1+n+n+1+2n+n-1+n-1+1=8n+1
 	
 }
 
 
 int main(){
     
     int minimum=MinSay(7);
     printf("%d",minimum);
     
     printf("\n\nT(n)=8n+1");
     
 }
