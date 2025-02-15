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
	gcc -o ass1.exe bubble-sort.c
	//  int i, j;
    // bool swapped;
    // for (i = 0; i < size - 1; i++) {
    //     swapped = false;
    //     for (j = 0; j < size - i - 1; j++) {
    //         if (array[j] > array[j + 1]) {
    //             swap(&array[j], &array[j + 1]);
    //             swapped = true;
    //         }
    //     }

    //     // If no two elements were swapped by inner loop,
    //     // then break
    //     if (swapped == false)
    //         break;
    // }
    ./ass1.exe
    gcc -o ass1.exe day-of-year.c