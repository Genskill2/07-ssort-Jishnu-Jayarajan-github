.PHONY: clean test

ssort: newswap.c main.c
	gcc -Wall -g newswap.c main.c -o ssort -lcs50 -lm 

test: ssort
	./ssort
clean: 
	rm -f swap
