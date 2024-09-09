CC = gcc
CFLAGS = -Iinclude -Wall
LDFLAGS = -lpcap
SRC = src/main.c src/packet_capture.c src/packet_analysis.c src/utils.c
OBJ = $(SRC:.c=.o)
EXEC = emem_network_analyzer

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ) $(EXEC)
