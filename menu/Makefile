#
# Projeto de referência.
#

.PHONY: clean

%.s: %.c %.h
	gcc -S $< -o $*.s

main.o: main.c calcularIdade.s calcularNota.s
	gcc $^ -o $@

clean:
	rm *.o *.s

run: main.o
	xterm -e ./main.o

