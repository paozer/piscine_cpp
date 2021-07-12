#include <iostream>

int main(int ac, char *av[])
{
    if (ac == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (int i = 1; av[i] != NULL; ++i) {
            for (int j = 0; av[i][j] != '\0'; ++j)
                av[i][j] = toupper(av[i][j]);
            std::cout << av[i];
        }
        std::cout << std::endl;
    }
    return 0;
}
