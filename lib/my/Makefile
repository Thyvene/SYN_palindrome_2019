##
## EPITECH PROJECT, 2020
## my_lib_include
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

NAME	=	my
COLOR_THEME	=	$(YELLO_C)
DEBUG_THEME	=	$(CYAN_C)

MY_PATH	=	./
PRINTF_PATH	=	./my_printf
GNL_PATH	=	./get_next_line
INCLUDE_PATH	=	../include

SRC_PRINTF	=	flag_bin.c \
			flag_char.c \
			flag_err.c \
			flag_float.c \
			flag_hash_bas.c \
			flag_hash.c \
			flag_hex.c \
			flag_int.c \
			flag_mod.c \
			flag_oct_s.c \
			flag_oct.c \
			flag_ptr.c \
			flag_sig.c \
			flag_str.c \
			flag_uint.c \
			dec_bas.c \
			dec_to_bas.c \
			my_putfloat.c \
			my_putstr_oct.c \
			check_flags.c \
			my_printf.c \

SRC_GNL		=	get_next_line.c \

SRCS	=	$(SRC_MY:%=$(MY_PATH)/%)
SRCS	+=	$(SRC_PRINTF:%=$(PRINTF_PATH)/%)
SRCS	+= 	$(SRC_GNL:%=$(GNL_PATH)/%)

OBJ	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -I $(INCLUDE_PATH)
DEBUG_FLAGS	=	-g3 -gdwarf-4

all:	message $(NAME)

message:
	@$(LINE_RETURN)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)" _     _ _                          " $(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"| |   (_) |__  _ __ __ _ _ __ _   _ " $(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"| |   | | '_ \| '__/ _\` | '__| | | |" $(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"| |___| | |_) | | | (_| | |  | |_| |" $(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"|_____|_|_.__/|_|  \__,_|_|   \__, |" $(DEFAULT)
	@$(ECHO) $(BOLD_T)$(COLOR_THEME)"                              |___/ " $(DEFAULT)
	@$(LINE_RETURN)

$(NAME):	$(OBJ)
	@ar rc ./lib$(NAME).a $(OBJ) && \
		$(ECHO) $(BOLD_T)$(GREEN_C)"\n[✔] COMPILED:" $(DEFAULT)$(LIGHT_GREEN) "lib$(NAME).a" $(DEFAULT) || \
		$(ECHO) $(BOLD_T)$(RED_C)"[✘] "$(UNDLN_T)"BUILD FAILED:" $(LIGHT_RED) "lib$(NAME).a"$(DEFAULT)

clean:
	@$(RM) $(OBJ)
	@$(ECHO) $(RED_C)$(DIM_T)"[clean]  "$(DEFAULT) \
		$(BOLD_T)$(RED_C)"DELETED: "$(DEFAULT) \
		$(LIGHT_RED)"lib$(NAME)'s object files"$(DEFAULT)

fclean:	clean
	@$(RM) ./lib$(NAME).a
	@$(ECHO) $(RED_C)$(DIM_T)"[fclean] "$(DEFAULT) \
		$(BOLD_T)$(RED_C)"DELETED: "$(DEFAULT) \
		$(LIGHT_RED)"Binary lib$(NAME).a"$(DEFAULT)

re:		fclean all

debug: CFLAGS += $(DEBUG_FLAGS)
debug: COLOR_THEME = $(DEBUG_THEME)
debug: all

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $< && \
		$(ECHO) $(DIM_T) "cc $(CFLAGS) -c "$<$(COLOR_THEME)" -o "$@ $(DEFAULT) || \
		$(ECHO) "\n"$(MAGEN_C) $(UNDLN_T)$(BOLD_T)"cc $(CFLAGS) -c "$<" -o "$@$(DEFAULT)"\n"

.PHONY: all $(NAME) message clean fclean re debug
