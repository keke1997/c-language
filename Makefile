do-while-vs-while: do-while-vs-while.c
	gcc -o do-while-vs-while.exe do-while-vs-while.c

looping: looping.c 
	gcc -o looping.exe looping.c

read_input_check: read_input_check.c
	gcc -o read_input_check.exe read_input_check.c

scan_string: scan_string.c
	gcc -o scan_string.exe scan_string.c

clean: 
	rm -f *.exe