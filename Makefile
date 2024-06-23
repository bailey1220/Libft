# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bachai <bachai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 16:13:50 by bachai            #+#    #+#              #
#    Updated: 2024/06/23 16:56:42 by bachai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_MAIN = ft_strlen \
			 ft_memmove \
			 ft_memcpy \
			 ft_strlcpy \
			 ft_strlcat \
			 ft_isalpha \
			 ft_isdigit \
			 ft_isalnum \
			 ft_isascii \
			 ft_isprint \
			 ft_memset \
			 ft_bzero \
			 ft_toupper \
			 ft_tolower \
			 ft_strchr \
			 ft_strrchr \
			 ft_strncmp \
			 ft_memchr \
			 ft_memcmp \
			 ft_strnstr \
			 ft_atoi \
			 ft_calloc \
			 ft_strdup \
			 ft_substr \
			 ft_strjoin \
			 ft_strtrim \
			 ft_split \
			 ft_itoa \
			 ft_strmapi \
			 ft_striteri \
			 ft_putchar_fd \
			 ft_putstr_fd \
			 ft_putendl_fd \
			 ft_putnbr_fd \

GCC 	= cc
CFLAGS 	= -Wall -Werror -Wextra
NAME 	= libft.a
ARRC 	= ar 
RM 		= rm -f

OBJS_MAIN = $(SRCS_MAIN:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_MAIN) 
		 $(ARRC) $(NAME) $(OBJS_MAIN)

%.o: %.c
	$(GCC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS_MAIN)
fclean: clean
		$(RM) $(NAME)
re: fclean $(NAME)

.PHONY: all clean re fclean