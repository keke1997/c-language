sample-array: sample-array.c
	gcc -o sample-array.exe sample-array.c

multi-dim-arr: multi-dim-arr.c
	gcc -o multi-dim-arr.exe multi-dim-arr.c

score-calculator: score-calculator.c
	gcc -o score-calculator.exe score-calculator.c

array-length: array-length.c
	gcc -o array-length.exe array-length.c

function-intro: function-intro.c
	gcc -o function-intro.exe function-intro.c

string-special: string-special.c
	gcc -o string-special.exe string-special.c

clean:
	rm *.exe