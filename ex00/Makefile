NAME = diamondtrap

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -g -Wall -Werror -Wextra -std=c++98

RM = rm -fr

all: $(NAME)

$(NAME):	$(OBJS)
				$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:		
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re