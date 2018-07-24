#include <stdio.h>

float Q_rsqrt( float number );
float rsqrt( float number );

int main() {
	int c;
	scanf("%d", &c);
	printf("Quick inverse square root of %d is %f\n", c, Q_rsqrt(c));
	printf("Standard inverse square root of %d is %f\n", c, rsqrt(c));

	return 0;
}

