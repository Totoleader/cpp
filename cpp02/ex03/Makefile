CC		:= c++
NAME	:= ex03
CFLAGS	:= -Wall -Wextra -Werror -g -std=c++98

HEADERS	:= -I ./headers -I. -I ./src

SRCS	:= src/main.cpp \
			src/bsp.cpp \
			src/Fixed.cpp \
			src/Point.cpp \

OBJS	:= $(patsubst src/%.cpp,bin/%.o,$(SRCS))

all: $(NAME)

bin/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<)\n"

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(HEADERS) -o $(NAME) $(CFLAGS)

clean:
	@rm -rf bin

fclean: clean
	@rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re