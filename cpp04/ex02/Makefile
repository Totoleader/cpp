CC		:= c++
NAME	:= ex02
CFLAGS	:= -Wall -Wextra -Werror -g -std=c++98

HEADERS	:= -I ./headers -I. -I ./src

SRCS	:= src/main.cpp \
			src/AAnimal.cpp \
			src/Cat.cpp \
			src/Dog.cpp \
			src/WrongAnimal.cpp \
			src/WrongCat.cpp \
			src/Brain.cpp \

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