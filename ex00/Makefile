NAME = animals

SRCS =	main.cpp \
		Dog.cpp \
		Cat.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

HEADERS =	Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -g -Wall -Werror -Wextra -std=c++98

RM = rm -fr

all: $(NAME)

$(NAME):	$(OBJS) $(HEADERS)
				$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:		
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re