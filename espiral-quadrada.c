#include <stdlib.h>
#include <stdio.h>

int main(){
	int n;
	
	printf("Insira Um Número Inteiro Maior Ou Igual À Zero: ");
	scanf("%d", &n);
	
	int i, ii, k, aux=2, x=0, y=0;
	
	for(i=0;i <= n;i++ && k++){
		if(k % aux == 0 && (k != 0)){aux += 2; k=0;}
		if((aux/2) % 2 != 0 && (i != 0)){
			if((aux/2) > k){
				y += 1;
			}
			if((aux/2) <= k){
				x -= 1;
			}		
		}
		if((aux/2) % 2 == 0 && (i != 0)){
			if((aux/2) > k){
				y -= 1;
			}
			if((aux/2) <= k){
				x += 1;
			}
		}
	}
	printf("(%d, %d)\n", x, y);
	
	return 0;
}
