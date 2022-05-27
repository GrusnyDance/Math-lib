CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11
LDFLAGS:=

SOURCES:=s21_abs.c s21_exp.c #s21_sqrt.c
TEST_SRCS:=test_abs.c test_exp.c

OBJECTS = $(SOURCES:.c=.o)
TEST_OBJS = $(TEST_SRCS:.c=.o)

.PHONY: all clean rebuild lint

all: test

s21_math.a: $(OBJECTS)
	ar -src $@ $(OBJECTS)

test: s21_math.a $(TEST_OBJS)
	$(CC) $^ -o $@ $(LDFLAGS) $(GCOVFLAGS) -lcheck
	./test

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

rebuild: clean all

clean:
	rm -f *.o
	rm -f a.out
	rm -f test.check
	rm -f *.a

lint:
	cp ../materials/linters/CPPLINT.cfg ./
	python3 ../materials/linters/cpplint.py --extensions=c */*.h */*.c
	rm -f CPPLINT.cfg
