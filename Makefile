# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/12 14:02:26 by amonteli     #+#   ##    ##    #+#        #
#    Updated: 2019/10/15 14:14:51 by amonteli    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 	= 	libft.a

HEADER	=	libft.h

SRCS	=	ft_atoi.c				\
			ft_bzero.c				\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_isdigit.c			\
			ft_isprint.c			\
			ft_memcpy.c				\
			ft_memset.c				\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strlen.c				\
			ft_strncmp.c			\
			ft_strnstr.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_memccpy.c			\
			ft_memmove.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_calloc.c				\
			ft_strdup.c				\
			ft_strlcpy.c			\
			ft_strlcat.c			\
			ft_substr.c				\


OBJS	= 	$(SRCS:.c=.o)

all		: 	$(NAME)

$(NAME)	:	$(OBJS)
			gcc -c -Wall -Werror -Wextra -I $(HEADER) $(SRCS)
			ar -rcs $(NAME) $(OBJS)

clean	:
			/bin/rm -f $(OBJS)

fclean	:	clean
			/bin/rm -f $(NAME)

re		: 	fclean all
