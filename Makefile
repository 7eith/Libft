# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/12 14:02:26 by amonteli     #+#   ##    ##    #+#        #
#    Updated: 2020/01/03 11:42:25 by amonteli    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 		= 	libft.a

HEADER		=	libft.h

SRCS		=	ft_atoi.c					\
				ft_bzero.c					\
				ft_isalnum.c				\
				ft_isalpha.c				\
				ft_isascii.c				\
				ft_isdigit.c				\
				ft_isprint.c				\
				ft_memcpy.c					\
				ft_memset.c					\
				ft_strchr.c					\
				ft_strrchr.c				\
				ft_strlen.c					\
				ft_strncmp.c				\
				ft_strnstr.c				\
				ft_tolower.c				\
				ft_toupper.c				\
				ft_memccpy.c				\
				ft_memmove.c				\
				ft_memchr.c					\
				ft_memcmp.c					\
				ft_calloc.c					\
				ft_strdup.c					\
				ft_strlcpy.c				\
				ft_strlcat.c				\
				ft_substr.c					\
				ft_strjoin.c				\
				ft_strtrim.c				\
				ft_split.c					\
				ft_itoa.c					\
				ft_strmapi.c				\
				ft_putchar_fd.c				\
				ft_putstr_fd.c				\
				ft_putendl_fd.c				\
				ft_putnbr_fd.c				\
				ft_lstnew.c					\
				ft_lstadd_front.c			\
				ft_lstsize.c				\
				ft_lstlast.c				\
				ft_lstadd_back.c			\
				ft_lstdelone.c				\
				ft_lstclear.c				\
				ft_lstiter.c				\
				ft_lstmap.c					\
				ft_lentochr.c				\
				ft_lentostr.c				\

GNL_SRCS	=	get_next_line.c				\
				get_next_line_utils.c		\

GNL_HEADERS	=	get_next_line/get_next_line.h

OBJS		= 	$(SRCS:.c=.o) $(addprefix get_next_line/, $(GNL_SRCS:.c=.o))

all			: 	$(NAME)

$(NAME)		:	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)
			@echo "\033[90m[\033[32mSuccess\033[90m]\033[32m Successfully compiled Libft.\033[0m"

%.o:%.c 	$(HEADER) $(GNL_HEADERS)
			@gcc -Wall -Wextra -Werror -o $@ -c $< -I $(HEADER) -I $(GNL_HEADERS)
			@echo "\033[90m[\033[32mOK\033[90m]\033[34m Compiling $<\033[0m"

clean		:
			@/bin/rm -f $(OBJS)
			@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Object files deleted\033[0m"

fclean		:	clean
			@/bin/rm -f $(NAME)
			@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Libft.a deleted.\033[0m"

re			: 	fclean all
