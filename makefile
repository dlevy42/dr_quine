CFLAGS			= -Wall -Wextra -Werror
GCC				= gcc

All : compiler

compiler :
	$(GCC) $(CFLAGS) Colleen.c -o Colleen
	$(GCC) $(CFLAGS) Grace.c -o Grace
	$(GCC) $(CFLAGS) Sully.c -o Sully

clean : Colleen Grace Sully
	rm Colleen Grace Sully

exe_sully : Sully
	./Sully

fclean : exe_sully clean Sully_0 Sully_1 Sully_2 Sully_3 Sully_4 Sully_5 Sully_0.c Sully_1.c Sully_2.c Sully_3.c Sully_4.c Sully_5.c
	rm Sully_0 Sully_1 Sully_2 Sully_3 Sully_4 Sully_5 Sully_0.c Sully_1.c Sully_2.c Sully_3.c Sully_4.c Sully_5.c
