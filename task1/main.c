#include <stdio.h>
int main()
{
	double a,b ;
	double x = 0;
	double h = 0.001;
	
	printf("ÇëÊäÈëa,¼´y0µÄÖµ:");
	double y;
	scanf("%lf",&a);
	printf("    x\t       y\n");
	do
	{
		
		x+=0.001;
		b = a;
		
		a*= (1-h+h*h/2);
		printf("%f   %f\n",x,a);
	}while((b-a)>=0.001*0.001);
	
	
		
	
	
	
}
