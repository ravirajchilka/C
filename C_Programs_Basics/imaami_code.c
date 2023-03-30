
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *unspace (char const *src)
{
    if (!src) {
        fprintf(stderr, "%s: %s\n",
                __func__, strerror(EINVAL));
        return NULL;
    }

    size_t len = strlen(src);
    char *ret = malloc(len + 1u);

    if (!ret) {
        perror("malloc");
        return NULL;
    }

    char *dest = ret;
    for (size_t i = 0; i < len; ++i) {
        if (!isspace(src[i]))
            *dest++ = src[i];
    }
    *dest = '\0';

    return ret;
}

int main (int argc, char **argv)
{
    char *result = unspace(argv[1]);
    if (!result)
        return EXIT_FAILURE;

    printf("\"%s\" -> \"%s\"\n",
           argv[1], result);

    free(result);
    return EXIT_SUCCESS;
}

