#include <stdio.h>
int main ()
{
	int primos_por_mostrar, n, d;
	int es_primo;
	printf("Cuantos primos deseas mostrar?: ");
	scanf("%d", &primos_por_mostrar);
	n=2;
	while (primos_por_mostrar > 0)
	{
		//Determinar si "n" es primo//
		es_primo = 1;
		for (d = 2; d < n; ++d)
		{
			if (n%d ==0)
			{
				es_primo=0;
				break;
			}
		}
		if (es_primo)
		{
			printf("%d ", n);
			primos_por_mostrar--;
		}
		n++;
	}
	return 0;
}