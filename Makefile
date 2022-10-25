# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tcensier <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/10 15:04:03 by tcensier      #+#    #+#                  #
#    Updated: 2022/10/21 18:52:32 by tcensier      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
HEADERFILES := libft.h
SRC := ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c
BSRC := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJFILES := $(SRC:.c=.o)
BOBJFILES := $(BSRC:.c=.o)
LDFLAGS ?=
CFLAGS ?= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJFILES)
	@ar rcs $@ $?
	@echo "Archive file $(NAME) successfully created and indexed."

bonus: $(OBJFILES) $(BOBJFILES)
	@ar rcs $(NAME) $?
	@echo "Archive file $(NAME) with bonus successfully created and indexed."

%.o: %.c $(HEADERFILES)
	@$(CC) -c $(CFLAGS) -o $@ $<

clean:
	@rm -f $(OBJFILES) $(BOBJFILES)
	@echo "OBJ and BOBJ files successfully deleted."

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) successfully deleted."

re: fclean all

.PHONY: all, clean, fclean, re


