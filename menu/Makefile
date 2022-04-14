#
# Projeto de referência.
#

.PHONY: clean run run-direct

%.s: %.c %.h
	gcc -S $< -o $*.s

%.s: %.c
	gcc -S $< -o $*.s

main.o: main.s calcularIdade.s calcularNota.s
	gcc $^ -o $@

clean:
	rm *.o *.s

run: main.o
	xterm -e ./main.o

run-direct: main.o
	./main.o

