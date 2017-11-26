# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchow <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/08 12:32:07 by jchow             #+#    #+#              #
#    Updated: 2017/11/25 17:53:37 by jchow            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libft.a

SRC = 	ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strdup \
		ft_strcpy \
		ft_strncpy \
		ft_strcat \
		ft_strncat \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strstr \
		ft_strnstr \
		ft_strcmp \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_memalloc \
		ft_memdel \
		ft_strnew \
		ft_strdel \
		ft_strclr \
		ft_striter \
		ft_striteri \
		ft_strmap \
		ft_strmapi \
		ft_strequ \
		ft_strnequ \
		ft_strsub \
		ft_strjoin \
		ft_strtrim \
		ft_strsplit \
		ft_itoa \
		ft_putchar \
		ft_putstr \
		ft_putendl \
		ft_putnbr \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putnbr_fd \
		ft_putendl_fd \
		ft_lstnew \
		ft_lstdelone \
		ft_lstdel \
		ft_lstadd \
		ft_lstiter \
		ft_lstmap 

SRCX =	ft_get_next_line \
		ft_isupper \
		ft_islower \
		ft_iswhitespace \
		ft_swap \
		ft_strrev \
		ft_atoi_ec \
		ft_atoi_strict \
		ft_atoull_base \
		ft_ulltoa_base \
		ft_strupper \
		ft_strlower \
		ft_arrsize \
		ft_numsize \
		ft_indexof \
		ft_ishex \
		ft_strnjoin

SRC_DIR =		./
SRC_FILES =		$(addsuffix .c, $(SRC))
SRCS =			$(addprefix $(SRC_DIR), $(SRC_FILES))

SRCX_DIR =		extra/
SRCX_FILES =	$(addsuffix .c, $(SRCX))
SRCSX =			$(addprefix $(SRCX_DIR), $(SRCX_FILES))

OBJ_DIR =		obj/
OBJ_FILES =		$(addsuffix .o, $(SRC) $(SRCX))
OBJS =			$(addprefix $(OBJ_DIR), $(OBJ_FILES))

HDR_DIR =		-I includes
HDR_FILES =		includes/libft.h

C_FLAGS =		-Wall -Wextra -Werror

RED =				[31m
GREEN =				[32m
BLUE =				[34m
YELLOW =			[33m
MAGENTA =			[35m
GREY =				[37m
GREEN_LIGHT =		[92m
YELLOW_LIGHT =		[93m
YELLOW_BOLD =		[1;33m
YELLOW_LIGHT_BOLD =	[1;93m
MAGENTA_LIGHT =		[95m
BLINK =				[5m
GREEN_LIGHT_BLINK =	[5;92m
END_COLOUR =		\033[0m

.SILENT:

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling $(NAME)...$(END_COLOUR)"
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(GREEN)Successfully compiled $(NAME)!$(END_COLOUR)"

$(OBJS) : $(SRCS) $(SRCSX) $(HDR_FILES)
	@mkdir -p obj
	@gcc $(C_FLAGS) $(HDR_DIR) -c $< -o $@

force:
	@true

clean:
	@echo "$(YELLOW)Cleaning objects...$(END_COLOUR)"
	@/bin/rm -rf $(OBJ_DIR)
	@echo "$(GREEN)Successfully cleaned all objects!$(END_COLOUR)"

fclean: clean
	@echo "$(YELLOW)Cleaning executable...$(END_COLOUR)"
	@/bin/rm -f $(NAME)
	@echo "$(GREEN)Successfully cleaned everything!$(END_COLOUR)"

re:	fclean all

.PHONY: all force clean fclean re