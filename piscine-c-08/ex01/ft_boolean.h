#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define SUCCESS 0
#define EVEN(nbr) (nbr % 2 == 0) ? 1 : 0

typedef enum T_BOOL t_bool;
enum T_BOOL
{
    FALSE = 0,
    TRUE = 1
};