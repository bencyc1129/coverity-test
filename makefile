all:buffer-overflow-test.c
	gcc buffer-overflow-test.c -o buffer-overflow-test
clean: 
	rm -f buffer-overflow-test