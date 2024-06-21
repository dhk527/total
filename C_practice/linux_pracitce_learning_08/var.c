#include <stdio.h>
void main(){
	int i=1;
	unsigned int ui=2;


	char c=3;
	unsigned char uc=4;

	short s=5;
	unsigned short us=6;

	long l=7;
	unsigned long ul=8;


	long long ll=13;
	unsigned long long ull=14;


	float f=9.0;

	double d =11;

	printf("%d\n",i);
	printf("%u\n",ui);

	printf("%d\n",c);
	printf("%hd\n",uc);

	printf("%d\n",s);
	printf("%hd\n",us);

	printf("%ld",l);
	printf("%lu\n",ul);

	printf("%lld\n",ll);
	printf("%llu\n",ull);

	printf("%f\n",f);

	printf("%lf\n",d);

}
