all: mock

mock.o: mock.c
	gcc -c -o mock.o -std=c99 mock.c

mock: mock.o
	gcc -o mock mock.o -Wl,--wrap=malloc,--wrap=free

clean:
	rm -f mock.o mock
