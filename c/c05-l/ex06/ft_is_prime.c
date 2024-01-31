int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int zero = ft_is_prime(0);
	int negative = ft_is_prime(-1);
	int isprime = ft_is_prime(2);
	int isnotprime = ft_is_prime(4);
	printf("zero: %d\n",zero);
	printf("negative: %d\n",negative);
	printf("is prime: %d\n",isprime);
	printf("is not prime: %d\n",isnotprime);
	return (0);
}
*/