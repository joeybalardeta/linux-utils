int arg_parser(const char* input);

void print_error(int input);

void conversion_router(int input, int argc, char** argv);

char* decimal_to_binary(int input);

int binary_to_decimal(char* input);

char* rgb_to_xrgb(char* input);

char* xrgb_to_rgb(char* input);
