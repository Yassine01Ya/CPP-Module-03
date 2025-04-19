SOURCE =  ClapTrap.cpp main.cpp

OBJECT = $(SOURCE:.cpp=.o)


CXX = c++

NAME = ClapTrap

CFLAGS =-Wall -Werror -Wextra -std=c++98

.PHONY : re fclean clean all

%.o : %.cpp
	$(CXX) $(CFLAGS) $< -c -o $@

all : $(NAME)

$(NAME): $(OBJECT)
	$(CXX) $(CFLAGS) $(OBJECT) -o $(NAME)


clean :
	rm -f  $(OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all
