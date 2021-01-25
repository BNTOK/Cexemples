main: main.c functions.c
	gcc -o main main.c functions.c
clean: rm main main.c functions.c