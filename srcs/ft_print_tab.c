#include "libft.h"

void ft_print_tab(char **tab) {
    for (int i = 0; tab[i]; ++i) {
        ft_putstr_fd(tab[i], 1);
    }
}
