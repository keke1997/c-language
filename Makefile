for-example: for-example.c
	gcc -o for-example.exe for-example.c

break-and-continue: break-and-continue.c
	gcc -o break-and-continue.exe break-and-continue.c


type-conversion: type-conversion.c
	gcc -o type-conversion.exe type-conversion.c

clean: 
	rm *.exe