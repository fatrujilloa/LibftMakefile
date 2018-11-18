#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 19:36:27 by ftrujill          #+#    #+#              #
#    Updated: 2018/11/18 20:27:29 by ftrujill         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = 			Program

CFLAGS = 		-Wall -Wextra -Werror

SRCDIR =		srcs

INCDIR =		inc

OBJDIR =		obj

SRC = 			$(wildcard $(SRCDIR)/*.c)

OBJ =			$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))

all: 			$(NAME)

$(NAME):		$(OBJ)
				ar rc libft.a $(OBJ)

$(OBJ):			$(OBJDIR)/%.o : $(SRCDIR)/%.c
		    	gcc $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean: 
				rm -f $(OBJDIR)/*.o

fclean: 		clean
				rm -f $(NAME)
				rm -f libft.a

re:				fclean all