NAME = libftprintf.a

SRCS = ft_printf.c \
	   ft_putchar.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_putunsigned.c

OBJ = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all