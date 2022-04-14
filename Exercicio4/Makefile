#
# Projeto de referência.
#

.PHONY: clean run

main.o: main.c
	gcc $^ -o $@

clean:
	rm -f *.o

run: main.o
	xterm -hold -e ./$<

install: main.o
	./$<
