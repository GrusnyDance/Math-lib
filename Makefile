CC=gcc -fsanitize=address
CFLAGS= -std=c11 #-Wall -Wextra -Werror
GCOVFLAGS:=-fprofile-arcs -ftest-coverage
LDFLAGS:=-lcheck -lgcov -fprofile-arcs --coverage
ifeq ($(shell uname), Linux)
LDFLAGS +=-pthread -lrt -lm -lsubunit
endif

SOURCES:= s21_acos.c s21_asin.c s21_atan.c s21_ceil.c s21_cos.c	s21_exp.c \
s21_fabs.c s21_floor.c s21_fmod.c s21_log.c s21_pow.c s21_sin.c s21_sqrt.c \
s21_tan.c s21_abs.c

OBJECTS = $(addprefix obj/,$(SOURCES:.c=.o))
OBJECTS_GCOV = $(addprefix gcov_obj/,$(SOURCES:.c=.o))

.PHONY: all clean rebuild lint

all: test gcov_report s21_math_gcov.a

s21_math_gcov.a: $(OBJECTS_GCOV)
	ar -src $@ $(OBJECTS_GCOV)

s21_math.a: $(OBJECTS)
	ar -src $@ $(OBJECTS)

test: gcov_obj/s21_math_test.o s21_math_gcov.a
	$(CC) gcov_obj/s21_math_test.o s21_math_gcov.a -o $@ $(LDFLAGS) $(GCOVFLAGS)
	./test

gcov_report: test
	lcov/bin/./lcov -c -d gcov_obj/. -o gcov_obj/coverage.info
	lcov/bin/./genhtml gcov_obj/coverage.info --output-directory out

gcov_obj/%.o: %.c
	$(CC) $(CFLAGS) $(GCOVFLAGS) -c $< -o $@

obj/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

rebuild: clean all

clean:
	rm -f */*.o
	rm -f report
	rm -f gcov_obj/*.gc*
	rm -f *.gc*
	rm -f ./test
	rm -f -r out
	rm -f *.o*
	rm -f gcov_obj/*.info
	rm -f .DS_Store
	rm -f *.a
	rm -f CPPLINT.cfg
	rm -f test.check
	rm -f test.c
	rm -f test


lint:
	cp ../materials/linters/CPPLINT.cfg ./
	python3 ../materials/linters/cpplint.py --extensions=c *.h *.c
	rm -f CPPLINT.cfg

generate1:
	gcc tests_1_argument.c
	./a.out

generate2:
	gcc tests_2_arguments.c
	./a.out

check_me: $(SOURCES) test.c s21_math.h
	gcc $(SOURCES) test.c s21_math.h -o test -lcheck
	# -lpthread -pthread -lrt -lm -lsubunit
	./test

%.o: %.c
	gcc -c $< 
	# -lpthread -pthread -lrt -lm -lsubunit






# VLADS MAKEFILE

# CC=gcc
# CFLAGS=-Wall -Wextra -Werror -std=c11
# LDFLAGS:=

# SOURCES:=s21_abs.c s21_exp.c #s21_sqrt.c
# TEST_SRCS:=test_abs.c test_exp.c

# OBJECTS = $(SOURCES:.c=.o)
# TEST_OBJS = $(TEST_SRCS:.c=.o)

# .PHONY: all clean rebuild lint

# all: test

# s21_math.a: $(OBJECTS)
# 	ar -src $@ $(OBJECTS)

# test: s21_math.a $(TEST_OBJS)
# 	$(CC) $^ -o $@ $(LDFLAGS) $(GCOVFLAGS) -lcheck
# 	./test

# %.o : %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# rebuild: clean all

# clean:
# 	rm -f *.o
# 	rm -f a.out
# 	rm -f test.check
# 	rm -f *.a

# lint:
# 	cp ../materials/linters/CPPLINT.cfg ./
# 	python3 ../materials/linters/cpplint.py --extensions=c */*.h */*.c
# 	rm -f CPPLINT.cfg





# LYOSHA CAME TO HELP

# NAME	=	s21_math.a

# CC = gcc
# CFLAGS = -Wall -Werror -Wextra

# RM = rm -rf

# AR	=	ar rcs

# SRC = s21_acos.c \
# 		s21_asin.c \
# 		s21_atan.c \
# 		s21_ceil.c \
# 		s21_cos.c \
# 		s21_exp.c \
# 		s21_fabs.c \
# 		s21_floor.c \
# 		s21_fmod.c \
# 		s21_log.c \
# 		s21_pow.c \
# 		s21_sin.c \
# 		s21_sqrt.c \
# 		s21_tan.c \
# 		s21_abs.c

# OBJ	=		$(SRC:.c=.o)

# all:		$(NAME)

# $(NAME):	$(OBJ)
# 		$(AR) $(NAME) $(OBJ)

# %.o:	%.c s21_math.h
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	$(RM) $(OBJ) $(NAME)

# rebuild: clean all