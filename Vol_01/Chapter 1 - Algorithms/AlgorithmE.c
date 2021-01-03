#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int m;
	int n;
	int r;

	if (argc != 3)
	{
		printf("Usage: ./AlgorithmE [integer] [integer]\n");
		exit(1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	r = -1;
	while (42)
	{
		r = m % n;
		if (r == 0)
			break ;
		m = n;
		n = r;
	}
	printf("GCD: %d\n", n);

	return 0;
}
