#ifndef header
#define header

typedef struct format
{
	char *f;
	void (*func)(void *);
} format_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void int_format(void *);
void char_ptr_format(void *var);
void float_format(void *var);
void char_format(void *var);

#endif
