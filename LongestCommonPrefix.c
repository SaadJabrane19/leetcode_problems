#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* longestCommonPrefix(char** strs, int strsSize)
{
    int i;
    int j = 0;
    char *result;
    result = (char *)malloc(sizeof(char)* 200);
    if(result == NULL)
        return  NULL;
    for (i = 0; i < 200; i++) {
        char current_char = strs[0][i];
        for (j = 1; j < strsSize; j++) {
            if (i >= strlen(strs[j]) || strs[j][i] != current_char) {
                result[i] = '\0';
                return result;
            }
        }
        result[i] = current_char;
    }
    return result;
    result[i] = '\0';
    return NULL;
}
