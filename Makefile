static-var: static-var.c
	gcc -o static-var.exe static-var.c

pointer: pointer.c
	gcc -o pointer.exe pointer.c

pointer-mod: pointer-mod.c
	gcc -o pointer-mod.exe pointer-mod.c

swap_value: swap_value.c
	gcc -o swap_value.exe swap_value.c

pointer-arg-return: pointer-arg-return.c
	gcc -o pointer-arg-return.exe pointer-arg-return.c

clean: 
	rm *.exe