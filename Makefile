main:main.o find_valuemidumax.o valuemidu_max.o
	gcc main.o find_valuemidumax.o valuemidu_max.o -o main


main.o:main.c
	gcc -c main.c

find_valuemidumax.o:find_valuemidumax.c
	gcc -c find_valuemidumax.c
valuemidu_max.o:valuemidu_max.c
	gcc -c valuemidu_max.c

clean:
	rm main *.o



