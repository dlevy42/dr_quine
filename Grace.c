#include <stdio.h>
/*
	commentaire
*/
#define NAME "Grace_kid.c"
#define STR(s) char *str=#s; s
#define MAIN(source) int main(){source}
MAIN(STR(FILE* f=fopen(NAME, "w+");if (f==NULL)return 0;fprintf(f,"#include <stdio.h>\n/*\n\tcommentaire\n*/\n#define NAME \"Grace_kid.c\"\n#define STR(s) char *str=#s; s\n#define MAIN(source) int main(){source}\nMAIN(STR(%s))\n", str); fclose(f);return 0;))
