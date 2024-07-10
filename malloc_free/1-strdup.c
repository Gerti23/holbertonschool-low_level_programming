#include <stdlib.h>
#include <string.h>

char *_strdup(char *str) {
    if (str == NULL) {
        return NULL;
    }

    // Calculate the length of the input string
    int len = strlen(str);

    // Allocate memory for the new string including the null terminator
    char *duplicate = (char *)malloc((len + 1) * sizeof(char));
    if (duplicate == NULL) {
        return NULL;
    }

    // Copy the string into the newly allocated space
    strcpy(duplicate, str);

    return duplicate;
}
