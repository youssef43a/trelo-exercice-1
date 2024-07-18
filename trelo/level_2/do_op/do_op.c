//#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *av);
int atoi(char *str);

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("%d",atoi(av[1]));
    }
    if (ac == 4 && ft_strlen(av[2]) == 1)
    {
        if (av[2][0] == '+')
            printf("%d\n",(atoi(av[1])) + (atoi(av[3])));
        else if (av[2][0] == '-')
            printf("%d\n",atoi(av[1]) - atoi(av[3]));
        else if (av[2][0] == '*')
            printf("%d\n",(atoi(av[1])) * (atoi(av[3])));
        else if (av[2][0] == '/')
        {
            if (atoi(av[3]) != 0)
                printf("%d\n",atoi(av[1]) / atoi(av[3]));
            else
                printf("syntax error\n");
        }
        else if (av[2][0] == '%')
        {
            if (atoi(av[3]) != 0)
                printf("%d\n",(atoi(av[1])) % (atoi(av[3])));
            else
                printf("syntax error\n");
        }
        else 
            write(1, "\n", 1);   
    }
    else
        write(1, "\n", 1);
    return (0);
}

int ft_strlen(char *av)
{
    int i;

    i = 0;
    while (av[i])
    {
        i++;
    }
    return (i);
}

int atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}