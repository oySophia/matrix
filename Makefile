CC = gcc  #refer to the compile commands
CFLAGS = -g -Wall -fPIC#the gcc's options.

ALL = get_matrix.o #the destination, we just want the .obj files
all: $(ALL)

clean:
	rm -f *.o $(ALL)

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $*.c
#the above command is to complie *.c files
get_matrix.o: get_matrix.h
#w128.o: multilib.h gf_table.h w_x.h
