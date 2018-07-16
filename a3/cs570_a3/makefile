all:
	gcc -o tevent *.c -lpthread
run: all
	./tevent $(time)
clean:
	rm -f *.o core tevent a.out
