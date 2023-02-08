int my_func_ex(char * msg);

#define GENERATE_FUNC(name) \
static int __attribute__((unused)) my_func_ ## name(char * msg) { \
    return my_func_ex(msg); \
}

GENERATE_FUNC(custom1)
GENERATE_FUNC(custom2)

#define my_func_1 my_func_custom1
#define my_func_2 my_func_custom2