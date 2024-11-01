	#include <stdio.h>
	
	int main () {
		
		int num1[] = {2,4,6,2};
		int num2[] = {1,3,5,1};
		int numSoma[4];
		int numSub[4];
			
		printf("primeiro vetor: ");
		for (int i=0; i<4; i++) {
       		printf("%d ", num1[i]);
   		}
   		 	
   		printf("\nsegundo vetor: ");
		for (int i=0; i<4; i++) {
       		printf("%d ", num2[i]);
   		}
   		
   		 	
		for (int i=0; i<4; i++) {
       		numSoma[i]=num1[i]+num2[i];
   		}
   		
   		for (int i=0; i<4; i++) {
       		numSub[i]=num1[i]-num2[i];
   		}
   		
   		printf("\nsoma entre os vetores: ");
   		for (int i=0; i<4; i++) {
       		printf("%d ",numSoma[i]);
   		}
   		 	
   		printf("\nsubtracao entre os vetores: ");
   		for (int i=0; i<4; i++) {
       		printf("%d ",numSub[i]);
   		}

		return 0;
	}
