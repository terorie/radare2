TESTS=a b c bitfield

CC?=cc

all:
	rm -f a.out
	$(CC) -g kv_main.c $(shell pkg-config --cflags --libs r_util) -I ../../shlr/
	for a in $(TESTS); do \
		echo "Testing $$a " && \
		./a.out t/$${a}.h > t/$${a}.h.tmp && \
		diff -u t/$${a}.h.txt t/$${a}.h.tmp ; done
