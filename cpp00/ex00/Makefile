SRCS = megaphone.cpp

OS := $(shell uname)


CC = c++
ifeq ($(OS), Linux)
	CC = clang++
endif

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone


RM = rm -f

OBJS = $(SRCS:.cpp=.o)

%.o	:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

debug: CFLAGS+=-g
debug: re

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
		$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all fclean clean re debug bonus