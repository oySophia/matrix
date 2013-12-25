CC = gcc
CFLAGS = -g -Wall -c

ALL = test
all: $(ALL)

#"$@" means the dynamic variable:destinations' values, "$<" the reliable destination values
test%: test%.o
	$(CC) $(CFLAGS) -o $@ $< ../*.o

.c.o:
	$(CC) $(CFLAGS) -c $*.c

clean:
	rm -f *.o $(ALL)
