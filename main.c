#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* 2. Ad�n�z soyad�n�z i�in gerekli minimum char bellek alan�n� malloc fonksiyonu kullanarak ay�r�n�z ve
i�erisine strcpy fonksiyonunu kullanarak ad�n�z� ve soyad�n�z� arada bo�luk b�rakarak yaz�n�z.  */

int main(){
char *p;
char adsoyad[50]="ikra yemlik";
	
p=(char*)malloc(50*sizeof(char));
strcpy(p,adsoyad);
 
 printf("%s",p);
 free(p);	
	return 0;
}
