#include <stdlib.h>
#include <string.h>

#define print(x) _Generic(x, int: printf("%i",x), double: printf("%d",x), char*: printf("%s",x), char: printf("%c",x), default: printf("unknown data"));

char* bind(const char *s1, const char *s2) {
char *result = malloc(strlen(s1) + strlen(s2) + 1);
strcpy(result, s1);
strcat(result, s2);
return result;
}
