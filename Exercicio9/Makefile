#
# Projeto de referência.
#

.PHONY: clean run

main.o: main.c
	gcc $^ -o $@

clean:
	rm *.o

run: main.o
	xterm -hold -e ./main.o
