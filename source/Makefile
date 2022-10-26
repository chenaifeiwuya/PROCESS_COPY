
.PHONY:PROCESS_COPY clean distclean install

CC=gcc
INCLUDE_PATH=../include/
INSTALL_PATH=/user/bin/
LIBRARY_PATH=../library/
CFLAGS=-I$(INCLUDE_PATH) -g -Wall -c
CPPFLAGS=
LDFLAGS=
SFILE=$(wildcard *.c)
DFILE=$(patsubst %.c,%.o,$(SFILE))
TARGET=PROCESS_COPY

$(TARGET):$(DFILE)
	$(CC) $^  -o   $@



%.o:%.c
	$(CC) $(CFLAGS) $<


clean:
	rm $(DFILE) -rf
	rm $(TARGET) -rf
