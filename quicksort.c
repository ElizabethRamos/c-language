#include <stdio.h>

void qsort(int v[], int esq, int dir)
{
	int i, ultimo;
	void troca(int v[], int i, int j);

	if(esq >= dir)
		return;

	troca(v, esq, (esq + dir) / 2);
	ultimo = esq;

	for(i = esq + 1; i <= dir; i++)
	{
		if(v[i] < v[esq])
			troca(v, ++ultimo, i);
	}

	troca(v, esq, ultimo);
	qsort(v, esq, ultimo - 1);
	qsort(v, ultimo + 1, dir);
}

void troca(int v[], int i, int j)
{
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

int main()
{
	int v[] = {20, 10, 15, 5, 2, 4, 7};
	int tam_v = sizeof(v) / sizeof(int);
	int i;

	qsort(v, 0, tam_v - 1);

	for(i = 0; i < tam_v; i++)
		printf("%d ", v[i]);

	return 0;
}
