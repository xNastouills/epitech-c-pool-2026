CC          = epiclang

NAME        = cat

SRC         = cat.c

OBJ         = $(SRC:.c=.o)

TESTS_SRC   = ../tests/test_cat.c

TESTS_OBJ   = cat_test.o

TESTS_BIN   = unit_tests

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

tests_run: fclean
	$(CC) -c $(SRC) -o $(TESTS_OBJ) --coverage
	objcopy --redefine-sym main=cat_main $(TESTS_OBJ)
	$(CC) -o $(TESTS_BIN) $(TESTS_OBJ) $(TESTS_SRC) \
	--coverage -lcriterion
	./$(TESTS_BIN)

clean:
	rm -f $(OBJ) $(TESTS_OBJ)
	rm -f *.gcno *.gcda

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTS_BIN)

re: fclean all

.PHONY: all tests_run clean fclean re
