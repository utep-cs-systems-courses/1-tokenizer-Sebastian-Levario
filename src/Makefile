#Hey

OBJS= uimain.o tokenizer.o history.o

CFLAGS=- 03

all:src

src: $(OBJS)
	cc -o src $(CFLAGS) $(OBJS)

$(OBJS): tokenizer.h

clean:
	rm -f *.o src

run:src
	./src
