#
# Projeto de referência.
#

.PHONY: clean run

%.s: %.c %.h
	gcc -S $< -o $*.s

main.o: main.c calcularIdade.s calcularNota.s
	gcc $^ -o $@

clean:
	rm *.o *.s

run: main.o
	xterm -hold -e ./main.o

