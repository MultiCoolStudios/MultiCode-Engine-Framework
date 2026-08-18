CC = gcc
OUT = mce_demo
SRC = src/mce_core.c examples/demo_app.c
INCLUDE = -Iinclude -Isrc
LIBDIR = -Llib
ifeq ($(OS), Windows_NT)
	OUT := $(OUT).exe
	LIBS = lraylib -lopengl32 -lgdi32 -lwinmm
else
	LIBS = -lraylib -lGl -lm -lpthread -ldl -lrt -lX11
endif
all:
 $(CC) $(SRC) -o $(OUT) $(INCLUDE) $(LIBDIR) $(LIBS) -Wall
clean:
 rm -f $(OUT)
.PHONY: all clean