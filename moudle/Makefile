.PHONY:PROCESS_COPY clean distclean install

CC=gcc
INCLUDE_PATH=../include/
CFLAGS=-I$(INCLUDE_PATH) -g -Wall -c
CPPFLAGS=
LDFLAGS=
SFILE=$(wildcard *.c)
DFILE=$(patsubst %.c,%.o,$(SFILE))
TARGET=COPY

$(TARGET):$(DFILE)
	$(CC) $^  -o   $@



%.o:%.c
	$(CC) $(CFLAGS) $<


clean:
	rm $(DFILE) -rf
	rm $(TARGET) -rf
