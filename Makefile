CC := cc
CFLAGS := -Wall -Wextra -Werror
AR := ar rcs
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
TARGET := libft.a

all: $(TARGET)

$(TARGET) : $(OBJ)
	$(AR) $@ $^

%.o:%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean
	$(MAKE) all
