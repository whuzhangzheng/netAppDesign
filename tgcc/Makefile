
CC := gcc -c
MAKE := make -r
%.o: %.c
	CC $^ -o $@
calcu3:main.o add/add_int.o add/add_float.o sub/sub_int.o sub/sub_float.o
	$(MAKE) -C sub
	$(MAKE) -C add	
	gcc -o $@ $^ 

calcu_gdb:
	gcc -g -o $@ main.c add/add_int.c add/add_float.c sub/sub_int.c sub/sub_float.c
