// benjamin.vongtawan@students.aie.edu.au
#include <cstdio>

int main()
{
	for (int i = 0; i <= 100; ++i)
	{
		if (i == 0 || !(i % 3 == 0 || i % 5 == 0))
		printf("%d ", i);

		else //if (i != 0)
		{
			if (i % 3 == 0) printf("fizz");
			if (i % 5 == 0) printf("buzz");
		}

		printf("\n");
	}

	getchar();
}