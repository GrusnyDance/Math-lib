# Math-lib

Implementation of basic math functions in C.

All funcs can be tested separately. To launch tests type `make generate1` for unary operations (e.g. sin, log) or `make generate2` for funcs 
where 2 arguments required (pow, sqrt). The command will generate the .c file written in check framework, which means that 
check.h lib should be installed on your PC locally to run tests. Then type `make check_me` to get the report on number of tests passed.
