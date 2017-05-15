CFLAGS			= -Wall -Wextra -Werror
GCC				= gcc

All : compiler

compiler :
	$(GCC) $(CFLAGS) Colleen.c -o Colleen
	$(GCC) $(CFLAGS) Grace.c -o Grace
	$(GCC) $(CFLAGS) Sully.c -o Sully

clean : Colleen Grace Sully
	rm Colleen Grace Sully
