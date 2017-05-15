#include<stdio.h>
#include<string.h>
#define STR(s) char *str=#s; s
int i=5;
STR(
	int main(int argc, char **argv)
	{
		argc = argc;
		char name[200];
		FILE *f = NULL;
		if(!i)
			return 0;
		if (strcmp(argv[0], "./Sully"))
			i--;
		bzero(name,sizeof(name));
		if (!snprintf(name,sizeof(name),"Sully_%d.c",i)||!(f=fopen(name,"w+")))
			return 0;
		if(!fprintf(f, "#include<stdio.h>\n#include<string.h>\n#define STR(s) char *str=#s; s\nint i=%d;\nSTR(%s)\n", i, str))
			printf("Erreur\n");
		fclose(f);
		return(0);
	}
)
