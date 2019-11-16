#include <stdio.h>
const int k = 10;
int a[k];


void quicksort(int* a, int beg, int end)
{
	if (beg < end)
	{

		int l = beg;
		int r = end;
		int baza = a[(l + r) / 2];
		int bus;

		do
		{
			while (a[l] < baza)
			{
				l++;
			}

			while (a[r] > baza)
			{
				r--;
			}

			if (l <= r)
			{
				bus = a[l];
				a[l] = a[r];
				a[r] = bus;
				l++;
				r--;
			}

		} while (l <= r);
		
		quicksort(a, beg, r);
		quicksort(a, l, end);

	}
}


int main()
{
	int i;

	printf("Vvedite massiv");
	for (i = 0; i < k; i++)
	{
		scanf_s("%d", &a[i]);
	}

	int beg = 0;
	int end = k-1;
	quicksort(a, beg, end);

	for (i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
