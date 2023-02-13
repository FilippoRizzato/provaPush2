#include <stdio.h>

int main(int argc, char *argv[])
{
	int A, B;
	double r;
	do
	{
		printf("inserisci il primo valore\n");
		scanf("%d", &A);
		printf("inserisci il secondo valore\n");
		scanf("%d", &B);

		if (A > B)
			r = (double)B / (double)A;
		else
			r = (double)A / (double)B;
		printf("\n\tIl risultato è: %f\n\n", r);
	} while (A != 0 && B != 0);

	return 0;
}
