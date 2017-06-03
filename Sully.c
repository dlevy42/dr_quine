#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define STR(s) char *str=#s; s
int i=5;
STR(int main(void){char name[200];char cmd[200];FILE *f = NULL;if(!i)return 0;if (strcmp(__FILE__, "Sully.c"))i--;bzero(name,sizeof(name));if (!snprintf(name,sizeof(name),"Sully_%d.c",i)||!(f=fopen(name,"w+")))return 0;if(!fprintf(f, "#include<stdio.h>\n#include<string.h>\n#include<stdlib.h>\n#define STR(s) char *str=#s; s\nint i=%d;\nSTR(%s)\n", i, str))printf("Erreur1\n");fclose(f);bzero(cmd,sizeof(cmd));if (!snprintf(cmd,sizeof(cmd),"gcc -Wall -Wextra -Werror -o Sully_%d Sully_%d.c", i, i))printf("Erreur2\n");system(cmd);bzero(cmd,sizeof(cmd));if (!snprintf(cmd,sizeof(cmd),"./Sully_%d", i))printf("Erreur3\n");system(cmd);return(0);})
