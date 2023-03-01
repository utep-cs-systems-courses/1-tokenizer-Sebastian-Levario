

OBJS= uimain.0  tokenizer.o

CFLAGS=-g -O3 

all: src

src: $(OBJS)
	cc -o src $(CFLAGS) $(OBJS)

$(OBJS): tokenizer.h

clean:
	rm -f *.o src

run:src
	./src
