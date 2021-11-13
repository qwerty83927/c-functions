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

// for reading text files
// note that this may not work for windows or macs
char* read_Tfile(const char* file_name) {
char c;
char* text = "";
FILE* fd = fopen(file_name,"r");
while(1) {
c = fgetc(fd);
if(feof(fd)) {break;}
text = append_char(text,c);
}
return text;
}

// for getting a input from user
char* input(void) {
char string[100];
scanf("%[^\n]s",string);
char* text = malloc(sizeof(string));
text = string;
return text;
}
