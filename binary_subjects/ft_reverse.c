#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

long int ft_reverse(char *r)
{
    long int s;
    char *endptr;
    s = (strtol(r, &endptr, 2)) * (-1);
    return (s);
}

// main de test :

int	main(int ac, char *av[])
{
    (void)ac;
    long int res;
    char *endptr;
    res = (strtol(av[1], &endptr, 2)) * (-1);

    printf("test = %ld\n", res); // comment faire diff proprement 

    // test
    long int stud;
    stud = ft_reverse(av[1]); // pour tester la fct des studs
    printf("stud = %ld\n", stud);

    return (0);
}
