#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int k = 0;
    if (ac > 2)
    {
        while (av[i][j])
        {
            while (av[i][j])
            {
                if (av[i][j] == 'a')
                {
                    while (k <= 1)
                    {
                        write(1, "a", 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'b')
                {
                    while (k <= 2)
                    {
                        write(1, "b", 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'c')
                {
                    while (k <= 3)
                    {
                        write(1, "c", 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'd')
                {
                    while (k <= 4)
                    {
                        write(1, "d", 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'e')
                {
                    while (k <= 5)
                    {
                        write(1, "e", 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'f')
                {
                    while (k <= 6)
                    {
                        write(1, "f", 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'g')
                {
                    while (k <= 7)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'h')
                {
                    while (k <= 8)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'i')
                {
                    while (k <= 9)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'j')
                {
                    while (k <= 10)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'k')
                {
                    while (k <= 11)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'l')
                {
                    while (k <= 12)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'm')
                {
                    while (k <= 13)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'n')
                {
                    while (k <= 14)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'o')
                {
                    while (k <= 15)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'p')
                {
                    while (k <= 16)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'q')
                {
                    while (k <= 17)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'r')
                {
                    while (k <= 18)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 's')
                {
                    while (k <= 19)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 't')
                {
                    while (k <= 20)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }

                else if (av[i][j] == 'u')
                {
                    while (k <= 21)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'v')
                {
                    while (k <= 22)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'w')
                {
                    while (k <= 23)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'x')
                {
                    while (k <= 24)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }

                else if (av[i][j] == 'y')
                {
                    while (k <= 25)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else if (av[i][j] == 'z')
                {
                    while (k <= 26)
                    {
                        write(1, 'a', 1);
                        k++;
                    }
                    k = 0;
                }
                else
                    write(1, &av[i][j], 1);

                        j++;
            }
            i++;
        }
         write(1,'\n',1);
    }
    else
    {
        write(1,'\n',1);
    }
    return 0;
}