CC = gcc
CFLAGS = -g3 -O0

all: breakwatch catch

breakwatch: breakwatch.c
	$(CC) $(CFLAGS) $< -o breakwatch

catch: catch.c
	$(CC) $(CFLAGS) $< -o catch

clean:
	rm -f breakwatch catch
