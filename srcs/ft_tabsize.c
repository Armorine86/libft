#include "libft.h"

size_t ft_tabsize(char** tab) {
    size_t i = 0;

    while (tab[i]) {
        i++;
    }
    return i;
}
