CC = gcc

CFLAGS = -c -O3 -I/home/$(USER)/gsl/include/ -I/usr/include/
#CFLAGS = -c -g -I/home/$(USER)/gsl/include/ -I/usr/include/
LFLAGS = -L/home/$(USER)/gsl/lib
#-Wl  -L/lib/ -L/home/mislibs/, -R /home/$(USER)/local/lib

problem1:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem2:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem3:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem4:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem5:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem6:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem7:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem9:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem10:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem11:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem12&13:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem14:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem15:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

problem16:
	echo Compiling $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lm -o $@.x
#       mv $@ $@.x

clean:
	rm -rf $(PROGRAM)
	rm -rf *~
	rm -rf *.out
	rm -rf *#
	rm -rf *.o
	rm -rf *.a      
	rm -rf *.so
	rm *.x
