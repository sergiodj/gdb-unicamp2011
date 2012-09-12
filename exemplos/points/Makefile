CC = gcc
CFLAGS = -g3 -O0

all: breakwatch catch-fork hello catch-syscall

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f breakwatch catch-fork hello catch-syscall
