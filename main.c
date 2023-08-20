#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* 2. Adýnýz soyadýnýz için gerekli minimum char bellek alanýný malloc fonksiyonu kullanarak ayýrýnýz ve
içerisine strcpy fonksiyonunu kullanarak adýnýzý ve soyadýnýzý arada boþluk býrakarak yazýnýz.  */

int main(){
char *p;
char adsoyad[50]="ikra yemlik";
	
p=(char*)malloc(50*sizeof(char));
strcpy(p,adsoyad);
 
 printf("%s",p);
 free(p);	
	return 0;
}
