# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/12 14:02:26 by amonteli          #+#    #+#              #
#    Updated: 2020/07/16 03:55:42 by amonteli         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 			= 	libft.a

HEADER			=	includes

SRCS			=	\
					$(addprefix io/ft_, putchar_fd.c putendl_fd.c putnbr_fd.c putstr_fd.c) \
					$(addprefix lists/ft_lst, add_back.c add_front.c clear.c delone.c iter.c last.c map.c new.c size.c) \
					$(addprefix memory/ft_, bzero.c calloc.c memccpy.c memchr.c memcmp.c memcpy.c memmove.c memset.c) \
					$(addprefix numbers/ft_, atoi.c itoa.c numlen.c lentostr.c lentochr.c) \
					$(addprefix strings/ft_, split.c strchr.c strdup.c strjoin.c strlcat.c strlcpy.c strlen.c strmapi.c strncmp.c strncpy.c strnstr.c strrchr.c strtrim.c substr.c)	\
					$(addprefix types/ft_, isalnum.c isalpha.c isascii.c isdigit.c isprint.c tolower.c toupper.c) \
					\ # projects part
					$(addprefix get_next_line/, get_next_line.c get_next_line_utils.c) \
					
OBJS			= 	$(addprefix srcs/, $(SRCS:.c=.o))

all				: 	$(NAME)

$(NAME)			:	$(OBJS)
				ar -rcs $(NAME) $(OBJS)

%.o:%.c 		$(HEADER) 
				clang -Wall -Wextra -Werror -o $@ -c $< -I $(HEADER) 

clean			:
				/bin/rm -f $(OBJS)

fclean			:	clean
				/bin/rm -f $(NAME)

re				: 	fclean all
