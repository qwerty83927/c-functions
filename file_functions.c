#include <string.h>
#include <stdlib.h>
#include "text.c"

//for text files only
char* read_file(const char* fileName) {
char* text = "";
FILE* file = fopen(fileName, "r");
char line[256];
while (fgets(line, sizeof(line), file)) {
text = bind_str(text,line);
}
fclose(file);
return text;
}
