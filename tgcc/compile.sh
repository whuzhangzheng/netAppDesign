gcc -c add/add_int.c -o add/add_int.o 
gcc -c add/add_float.c -o add/add_float.o
gcc -c sub/sub_int.c -o sub/sub_int.o
gcc -c sub/sub_float.c -o sub/sub_float.o
gcc -c main.c -o main.o 
gcc -o calcu add/add_int.o add/add_float.o sub/sub_int.o sub/sub_float.o main.o
