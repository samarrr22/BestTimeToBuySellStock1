CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC = src/stock.c
TEST = tests/test_stock.c

all: test

test:
	$(CC) $(CFLAGS) $(SRC) $(TEST) -o test_stock
	./test_stock

clean:
	rm -f test_stock
