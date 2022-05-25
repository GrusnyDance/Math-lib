generate1:
	gcc tests_1_argument.c
	./a.out

generate2:
	gcc tests_2_arguments.c
	./a.out

clean:
	rm -f *.out
	rm -f *.gch
	rm -f test.c
	rm -f test.check
	rm -f *.o

test: test.o ceil.o s21_math.h
	gcc test.o pow.o s21_math.h -o test -lcheck 
	# -lpthread -pthread -lrt -lm -lsubunit
	./test

%.o: %.c
	gcc -c $< 
	# -lpthread -pthread -lrt -lm -lsubunit
