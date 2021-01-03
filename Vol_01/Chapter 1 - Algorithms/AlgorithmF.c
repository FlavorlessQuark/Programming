#include <stdlib.h>
#include <stdio.h>

int gcd(int m, int n)
{
	while (1)
	{
		m = m % n;
		if (!m)
			return n;
		n = n % m;
		if (!n)
			return m;
	}
}

int main(int argc, char **argv)
{
	int m;
	int n;

	if (argc != 3)
	{
		printf("Usage: ./AlgorithmF [integer] [integer]\n");
		exit(1);
	}
	printf("GCD: %d\n", gcd(atoi(argv[1]), atoi(argv[2])));

	return 0;
}
