CC=gcc #-fsanitize=address
CFLAGS= -std=c11 -Wall -Wextra -Werror
GCOVFLAGS:=-fprofile-arcs -ftest-coverage
LDFLAGS:=-fprofile-arcs --coverage
LCHECK= -lcheck
LIN_FLAGS:= -lpthread -pthread -lrt -lm -lsubunit
ifeq ($(shell uname), Linux)
LCHECK += $(LIN_FLAGS)
endif

RM = rm -rf
AR = ar rcs

SOURCES:= s21_acos.c \
		s21_asin.c \
		s21_atan.c \
		s21_ceil.c \
		s21_cos.c \
		s21_exp.c \
		s21_fabs.c \
		s21_floor.c \
		s21_fmod.c \
		s21_log.c \
		s21_pow.c \
		s21_sin.c \
		s21_sqrt.c \
		s21_tan.c \
		s21_abs.c

OBJECTS = $(addprefix obj/,$(SOURCES:.c=.o))
OBJECTS_GCOV = $(addprefix gcov_obj/,$(SOURCES:.c=.o))


all: test gcov_report s21_math_gcov.a

s21_math_gcov.a: $(OBJECTS_GCOV)
	$(AR) $@ $(OBJECTS_GCOV)

s21_math.a: $(OBJECTS)
	$(AR) $@ $(OBJECTS)

test: gcov_obj/s21_math_test.o s21_math_gcov.a
	$(CC) $(CFLAGS) $^ -o $@ $(LCHECK) $(LDFLAGS) $(GCOVFLAGS)
	./test

gcov_report: test
	lcov/bin/./lcov -c -d gcov_obj/. -o gcov_obj/coverage.info
	lcov/bin/./genhtml gcov_obj/coverage.info --output-directory out

gcov_obj/%.o: %.c
	@$(CC) $(CFLAGS) $(GCOVFLAGS) -c $< -o $@

obj/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

lint:
	cp ../materials/linters/CPPLINT.cfg ./
	python3 ../materials/linters/cpplint.py --extensions=c *.h *.c
	$(RM) CPPLINT.cfg

generate1: tests_1_argument.c
	@$(CC) $(CFLAGS) $<
	@./a.out

generate2: tests_2_arguments.c
	@$(CC) $(CFLAGS) $<
	@./a.out

check_me: $(SOURCES) test.c s21_math.h
	@$(CC) $(CFLAGS) $^ $(LCHECK)
	@./a.out

%.o: %.c
ifeq ($(shell uname), Linux)
	$(CC) $(CFLAGS) -c $< $(LIN_FLAGS)
else
	$(CC) $(CFLAGS) -c $<
endif

rebuild: clean all

clean:
	@$(RM) */*.o \
		report \
		gcov_obj/*.gc* \
		*.gc* \
		out \
		*.o* \
		gcov_obj/*.info \
		*.a \
		CPPLINT.cfg \
		test.* \
		test \

.PHONY: all clean rebuild lint
