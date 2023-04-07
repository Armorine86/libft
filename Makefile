## -----  NAME OF THE PROGRAM ----- ##
NAME 			= libft.a

## ----- CHOOSE COMPILER AND FLAGS ----- ##
CC				= clang
CFLAGS			= -Wall -Wextra -Werror

## ----- PATH TO FOLDERS ----- ##
SRCS_DIR		= srcs/

OBJ_DIR			= obj/

INCLUDE_DIR		= includes/

## ----- SOURCE FILES ----- ##
SRCS_FILES		= 	ft_atoi.c ft_isascii.c ft_memchr.c ft_putchar_fd.c ft_strchr.c \
					ft_strlen.c ft_strtrim.c ft_bzero.c ft_isdigit.c ft_memcmp.c \
					ft_putendl_fd.c ft_strdup.c ft_strmapi.c ft_substr.c ft_calloc.c \
					ft_isprint.c ft_memcpy.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c \
					ft_tolower.c ft_isalnum.c ft_itoa.c ft_memmove.c ft_putstr_fd.c \
					ft_strlcat.c ft_strncmp.c ft_toupper.c ft_isalpha.c ft_memccpy.c \
					ft_memset.c ft_split.c ft_strlcpy.c ft_strrchr.c ft_calloc.c \
					ft_memalloc.c ft_putchar.c ft_strnew.c ft_putnbr.c ft_putstr.c \
					ft_strcpy.c ft_putunsnbr.c ft_putnbr_base.c ft_nbrlen.c ft_strcmp.c \
					ft_putnchar.c ft_numlen.c ft_str_to_lower.c ft_isupper.c \
					ft_str_to_upper.c ft_isspace.c ft_atol.c ft_free.c get_next_line.c\
					ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
					ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
					ft_freetab.c ft_tabsize.c

## ----- .C TO .O CONVERT ----- ##
OBJ_FILES		= $(SRCS_FILES:.c=.o)

## ----- ADDPREFIX TO FILES ----- ##
# MAIN PROGRAMM #
SRCS			= $(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS			= $(addprefix $(OBJ_DIR), $(OBJ_FILES))
VPATH			= $(SRCS_DIR) 


#--------------------------------------------------------------#

## ----- TOOLS AND COLORS ----- ##
RM				= rm -Rf
NO_PRINT		= --no-print-directory
RED 			= \033[31m
GREEN 			= \033[32m
YELLOW 			= \033[33m
BLUE 			= \033[34m
PINK 			= \033[35m
AQUA 			= \033[36m
GREY 			= \033[37m
UNDERLINE 		= \033[4m
NORMAL 			= \033[0m

## ----- ALL ACTION DEPENDENCIES AND RECIPE FOR MAIN PROGRAM ----- ##
all: obj $(NAME)
	@echo "$(GREEN)Compilation Completed Successfully$(NORMAL)"

$(OBJ_DIR)%.o:%.c
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -o $@ -c $<
	@printf "\033[93m▓▓▓\033[0m"

$(NAME): $(OBJS)
	@ar rcs ${NAME} ${OBJS}
	@echo "\\n\033[32;1m\nLIBFT IS READY\033[0m\\n"

debug: CFLAGS += -g -fstandalone-debug -fno-limit-debug-info
debug: all

redebug : fclean debug

release: CFLAGS += -O2
release: all

obj:
	@mkdir -p $(OBJ_DIR)
	@echo "\033[34;1mCreating Object Directory\n\033[0m"
	@printf "\033[32;1m\nCompiling with: \033[38;5;208m$(CFLAGS)\033[0m\\n\\n"
	
## ----- CLEAN COMMANDS ----- ##
clean:
	@$(RM) $(OBJS) $(B_OBJS) $(OBJ_DIR)
	@echo "\033[34;1mLIBFT CLEANING DONE\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[34;1mLIBFT FCLEAN DONE\033[0m"

re: fclean all bonus

.PHONY: all clean fclean re
