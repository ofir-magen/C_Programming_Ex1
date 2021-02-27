MA = power.o basicMath.o


all:mymaths mymathd mains maind 

mains:main.o libmyMath.a
	gcc -Wall -g -o mains main.o libmyMath.a

maind:main.o libmyMath.so
	gcc  -Wall -g -o maind main.o ./libmyMath.so

mymaths:$(MA)
	 ar rcs  -o libmyMath.a $(MA)

mymathd:$(MA)
	gcc -Wall -g -shared -o  libmyMath.so $(MA)

basicMath.o:basicMath.c myMath.h
	gcc -g  -c  basicMath.c 

power.o:power.c myMath.h
	gcc -g -c power.c 
main.o:main.c myMath.h
	gcc -g -c main.c myMath.h 



clean: 
	rm -f *.o *.so *.a mains maind output


