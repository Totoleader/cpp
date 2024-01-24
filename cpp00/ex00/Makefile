CC		:= g++
NAME	:= ex00
CFLAGS	:= -Wall -Wextra -Werror -g

HEADERS	:= -I ./include

SRCS	:= src/main.cpp \
			src/Megaphone.cpp

OBJS	:= ${SRCS:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<)\n"

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(HEADERS) -o $(NAME) $(CFLAGS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: clean all

.PHONY: all, clean, fclean, re