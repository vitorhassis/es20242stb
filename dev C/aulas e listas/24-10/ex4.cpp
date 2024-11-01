#include <stdio.h>
#include <string.h>

int main () {
	int result;
	char str1[]=" Napoleon Hill";
	char str2[]="Rodrigo Silva";
	
	result = strcmp(str1,str2);
	
	if (result>0) {
		printf("%s PRIMEIRO QUE -> %s na ORDEM ALFABETICA",str2,str1);
	} else if (result<0) {
		printf("%s PRIMEIRO QUE -> %s na ORDEM ALFABETICA",str1,str2);
	} else {
		printf("mesma posicao alfabetica");
	}
	
	
	
	
	
	
	
	return 0;
}
