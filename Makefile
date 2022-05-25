generate:
	gcc tests_generator.c
	./a.out

clean:
	rm -f *.out
	rm -f *.gch
	rm -f test.c
	rm -f test.check
	rm -f *.o

test: test.o ceil.o s21_math.h
	gcc test.o ceil.o s21_math.h -o test -lcheck -lpthread -pthread -lrt -lm -lsubunit
	./test

%.o: %.c
	gcc -c $< -lpthread -pthread -lrt -lm -lsubunit
