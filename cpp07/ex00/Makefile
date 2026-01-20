NAME = main

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp MyClass.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

main.o: main.cpp MyClass.hpp
	$(CXX) $(CXXFLAGS) -c  main.cpp -o main.o

MyClass.o: MyClass.cpp MyClass.hpp
	$(CXX) $(CXXFLAGS) -c  MyClass.cpp -o MyClass.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all