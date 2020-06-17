##
## EPITECH PROJECT, 2020
## PSU_minishell2_2019
## File description:
## Makefile
##

ECHO	=	/bin/echo -e
DEFAULT	=	"\e[0m"
BOLD_T	=	"\e[1m"
DIM_T	=	"\e[2m"
UNDLN_T	=	"\e[4m"
BLACK_C	=	"\e[30m"
RED_C	=	"\e[31m"
GREEN_C	=	"\e[32m"
YELLO_C	=	"\e[33m"
BLUE_C	=	"\e[34m"
MAGEN_C	=	"\e[35m"
CYAN_C	=	"\e[36m"
DEFAULT_C	=	"\e[39m"
LIGHT_RED	=	"\e[91m"
LIGHT_GREEN	=	"\e[92m"
LIGHT_YELLO	=	"\e[93m"
LIGHT_BLUE	=	"\e[94m"
LIGHT_MAGEN	=	"\e[95m"
LIGHT_CYAN	=	"\e[96m"
LINE_RETURN	=	$(ECHO) ""

NAME	=	unit_tests
ROOT_PATH	=	../
SRC_NAME	=	src
INCL_NAME	=	include
TESTS_NAME	=	tests
INCL_PATH	=	$(ROOT_PATH)$(INCL_NAME)
TESTS_PATH	=	$(ROOT_PATH)$(TESTS_NAME)
SRC_PATH	=	$(ROOT_PATH)$(SRC_NAME)
SRC_LIB		=	lib/

SRC_TESTS	=	$(SRC_LIB)test_my_getnbr.c \
				$(SRC_LIB)test_my_is_prime.c \
				$(SRC_LIB)test_my_printf_two.c \
				$(SRC_LIB)test_my_printf.c \
				$(SRC_LIB)test_my_putstr.c \
				$(SRC_LIB)test_my_revstr.c \
				$(SRC_LIB)test_my_str_isalpha.c \
				$(SRC_LIB)test_my_str_islower.c \
				$(SRC_LIB)test_my_str_isnum.c \
				$(SRC_LIB)test_my_str_isupper.c \
				$(SRC_LIB)test_my_strcat.c \
				$(SRC_LIB)test_my_strlen.c \
				$(SRC_LIB)test_my_strlowcase.c \
				$(SRC_LIB)test_my_strncat.c \
				$(SRC_LIB)test_my_strncpy.c \
				$(SRC_LIB)test_my_strstr.c \
				$(SRC_LIB)test_my_strupcase.c \
				$(SRC_LIB)test_my_swap.c \
				basic_tests.c \
				basic_bad_args.c \

SRCS	=	$(SRC:%=$(SRC_PATH)/%) $(SRC_TESTS)
OBJ	=	$(SRCS:.c=.test_o)
LIB_PATHS_FLAG	=	$(LIB_PATHS:%=-L$(ROOT_PATH)%)

CFLAGS	=	-Wall -Wextra -I $(INCL_PATH) --coverage
LDFLAGS	=	$(LIB_PATHS_FLAG) $(LIBRARIES) -lcriterion
CSFML	=	-l csfml-system -l csfml-window -l csfml-graphics -l csfml-audio -l csfml-network

all:	message $(NAME)

message:
	@$(LINE_RETURN)
	@$(ECHO) $(BOLD_T)\\$(COLOR_THEME)" _   _       _ _     _____         _"$(DEFAULT)
	@$(ECHO) $(BOLD_T)\\$(COLOR_THEME)"| | | |_ __ (_) |_  |_   _|__  ___| |_ ___"$(DEFAULT)
	@$(ECHO) $(BOLD_T)\\$(COLOR_THEME)"| | | | '_ \| | __|   | |/ _ \/ __| __/ __|"$(DEFAULT)
	@$(ECHO) $(BOLD_T)\\$(COLOR_THEME)'| |_| | | | | | |_    | |  __/\__ \ |_\__ \\'$(DEFAULT)
	@$(ECHO) $(BOLD_T)\\$(COLOR_THEME)" \___/|_| |_|_|\__|   |_|\___||___/\__|___/\n"$(DEFAULT)
	@$(LINE_RETURN)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) $(CSFML) && \
		$(ECHO) $(BOLD_T)$(GREEN_C)"\n[✔] COMPILED:" $(DEFAULT)$(LIGHT_GREEN) "$(NAME)\n"$(DEFAULT) || \
		$(ECHO) $(BOLD_T)$(RED_C)"[✘] "$(UNDLN_T)"BUILD FAILED:" $(LIGHT_RED) "$(NAME)\n"$(DEFAULT)
	@./$(NAME)

clean:
	@$(RM) $(OBJ:%=%.gcno)
	@$(RM) $(OBJ:%=%.gcda)
	@$(ECHO) $(RED_C)$(DIM_T)"[clean]  "$(DEFAULT) \
		$(BOLD_T)$(RED_C)"DELETED: "$(DEFAULT) \
		$(LIGHT_RED)"$(NAME)'s coverage files"$(DEFAULT)
	@$(RM) $(OBJ)
	@$(ECHO) $(RED_C)$(DIM_T)"[clean]  "$(DEFAULT) \
		$(BOLD_T)$(RED_C)"DELETED: "$(DEFAULT) \
		$(LIGHT_RED)"$(NAME)'s object files"$(DEFAULT)

fclean:	clean
	@$(RM) $(NAME)
	@$(ECHO) $(RED_C)$(DIM_T)"[fclean] "$(DEFAULT) \
		$(BOLD_T)$(RED_C)"DELETED: "$(DEFAULT) \
		$(LIGHT_RED)"Binary $(NAME)"$(DEFAULT)

re:		fclean all

%.test_o: %.c
	@$(CC) -c $(CFLAGS) $(CSFML) -o $@ $< && \
		$(ECHO) $(DIM_T) "cc $(CFLAGS) -c "$<\\$(COLOR_THEME)" -o "$@ $(DEFAULT) || \
		$(ECHO) "\n"$(MAGEN_C) $(UNDLN_T)$(BOLD_T)"cc $(CFLAGS) -c "$<" -o "$@$(DEFAULT)"\n"

.PHONY: all $(NAME) message clean fclean re
