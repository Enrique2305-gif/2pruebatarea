GCC = gcc
CFLAGS = -c -I.
programa: main.o funciones.o funciones.h
	$(GCC) -o promedio main.o funciones.o

main.o: main.c
	$(GCC) $(CFLAGS) main.c

funciones.o: funciones.c
	$(GCC) $(CFLAGS) funciones.c

.PHONY: clean
clean:
	rm *.o promedio


