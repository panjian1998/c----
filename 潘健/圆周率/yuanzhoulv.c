#include <stdio.h>
#include <stdlib.h>
#define pie 3.1415926
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float s,r;
	printf("ÊäÈë°ë¾¶\t");
	scanf("%f",&r);
	s=pie*r*r;
	printf("pie=%2.7f\t°ë¾¶=%f\n",pie,r);
	printf("Ô²Ãæ»ý=%2.7f\n",s);
	return 0;
}
