#include <stdio.h>
#include <math.h>
void moshkel ()
{
	int a;
	static int i=0;
	while (scanf("%d",&a))
	{
		if (a != 0)
		{
			i++;
			if (i<3)
			{
				int n=0;
				while(pow(2,n) <= a)	n++;
				a = pow(2,--n);
				printf("%d ",a);
			}else printf("%d ",-1);
		} else break;
	}
}
int main() {
    moshkel();
    return 0;
}
