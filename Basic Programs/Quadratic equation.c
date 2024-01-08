#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float d,p,q;
	printf("values of a,b,c?");
	scanf("%d%d%d",&a,&b,&c);
	d=((b*b)-(4*a*c));
	if(d>0)
	printf("the roots are %f%f,p,q");
	else if(d<0)
	printf("imaginary");
	else
	printf("real and equal");
	p=((-b)+sqrt(b))/(2*a);
	q=((-b)+sqrt(b))/(2*a);
	printf("the roots are %f%f",p,q);
}
