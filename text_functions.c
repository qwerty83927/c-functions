#include <stdlib.h>
#include <string.h>

// for printing vars
#define print(x) _Generic(x, int: printf("%i",x), double: printf("%d",x), char*: printf("%s",x), char: printf("%c",x), default: printf("unknown data"));

// for string binding
char* bind_str(const char *s1, const char *s2) {
char *result = malloc(strlen(s1) + strlen(s2) + 1);
strcpy(result, s1);
strcat(result, s2);
return result;
}

// for adding to chars to make a string
char* bind_char(const char A, const char B) {
char* p = NULL;
text = malloc(sizeof(char) + 5);
text[0] = A;
text[1] = B;
return p;
}

// for adding a char at the end of a string
char* append_char(const char* A, const char B) {
char* text = NULL;
text = malloc(sizeof(char) + strlen(A));
int i;
for (i = 0; i < strlen(A); ++i) {
text[i] = A[i];
}
text[strlen(A)] = B;
return p;
}

char* replace_chars(const char* text1, const char letter, const char rep) {
char* text2 = "";
int i; int j;
for(i = 0; i < strlen(text1); ++i) {
char c = text1[i];
if(c == letter) {text2 = append_char(text2,rep);}
else {text2 = append_char(text2,c);}
}
return text2;
}

// for getting a input from user
char* input(void) {
char string[100];
scanf("%[^\n]s",string);
char* text = malloc(sizeof(string));
text = string;
return text;
}
