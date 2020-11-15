CC=gcc
Ar=ar
Flags=-Wall

all:mymaths mymathd mains maind

mains: libmyMath.a main.o
	$(CC) $(Flags) -o mains main.o libmyMath.a

maind: libmyMath.so main.o
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

mymaths: power.o basicMath.o
	$(AR) -rcs -o libmyMath.a power.o basicMath.o

mymathd: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o

#linking between myMath and the basicMath library containing the defenitions of the functions.
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c myMath.h

#linking between myMath and the power library containing the defenitions of the functions.
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c myMath.h


#linking between myMath and the main into a main.o file.
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c myMath.h

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind