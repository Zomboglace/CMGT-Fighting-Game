
OBJ	=	build	\
		fighting_game

all: build

build:
	./build.sh

clean:
	rm -rf $(OBJ)

fclean: clean

re: fclean all
