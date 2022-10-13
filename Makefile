 **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tcensier <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/10 15:04:03 by tcensier      #+#    #+#                  #
#    Updated: 2022/10/13 16:28:09 by tcensier      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
HEADERFILES := libft.h
SRC := ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c
OBJFILES := $(SRC:.c=.o)
LDFLAGS ?=
CFLAGS ?= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJFILES)
	@ar rcs $(NAME) $(OBJFILES)
	@echo "Archive file $(NAME) successfully created and indexed."

%.o: %.c $(HEADERFILES)
	@$(CC) -c $(CFLAGS) -o $@ $<

clean:
	@rm -f $(OBJFILES)
	@echo "OBJ files successfully deleted."

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) successfully deleted."

re: fclean all

.PHONY: all, clean, fclean, re


