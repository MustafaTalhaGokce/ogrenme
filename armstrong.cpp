#include<stdio.h>
#include<math.h>
int armstrong(int A);
int main(){
	int sayi;
	int alinan;
	
	scanf("%d",&sayi);
	
	alinan=armstrong(sayi);
	if(alinan==-1){
		printf("%d sayisi armstrong degildir.",sayi);
	}
	else{
			printf("%d sayisi armstrong sayisidir.",sayi);
	}
	
	
	return 0;
}
int armstrong(int A){

	int i;
	int kalan;
	int arm=0;
	int B=A;
	for(i=0;;i++){
		kalan=A%10;
		A=A/10;
		arm=arm+pow(kalan,3);
	
		if(A==0){
			
	    if(B==arm){
		
			return arm;
		}
				else{
				return -1;
		}
	
			}
		
	
	}
	
return -1;	
}
