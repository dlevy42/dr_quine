#include <stdio.h>
/*
commentaire
*/
#define NAME "Grace_kid.c"
#define STR(s) char *str=#s; s
#define MODE "w+"
STR(int main(){FILE* f=fopen(NAME, MODE);fprintf(f,"#include <stdio.h>\n/*\ncommentaire\n*/\n#define NAME \"Grace_kid.c\"\n#define STR(s) char *str=#s; s\n#define MODE \"w+\"\nSTR(%s)\n", str); fclose(f);return 0;})
