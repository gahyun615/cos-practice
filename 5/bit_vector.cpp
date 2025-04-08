#include <cstdio>
#include <cstdlib>
#include <cstring>
#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX BIT_VECTOR_LENGTH - 1
#define LSB_INDEX 0
#define TRUE 1
#define FALSE 0

void print_command(char *argv[]);
int check_validity(char *input);
void init_bit_vector(char *input, char *bv);
void print_bit_vector(char *bv);

int main(int argc, char *argv[])
{
    char bv1[BIT_VECTOR_LENGTH];
    char bv2[BIT_VECTOR_LENGTH];

    if (argc != 3)
    {
        printf("Error: invalid number of arguments\n");
        print_command(argv);
    }
    
    if (!(check_validity(argv[1]) && check_validity(argv[2])))
    {
        printf("Error: invalid argument\n");
        print_command(argv);
    }

    init_bit_vector(argv[1], bv1);
    init_bit_vector(argv[2], bv2);
    print_bit_vector(bv1);
    print_bit_vector(bv2);
    return 0;
}

void print_command(char *argv[])
{
    printf("Command: %s <fisrt bit vector> <second bit vector>", argv[0]);
    printf("Example: %s 0110 1000\n", argv[0]);
    exit(1);
}

int check_validity(char *input)
{
    int i, len, ret;
    ret = TRUE;

    // 1. the lenth of the input must be identical to BIT_VECTOR_LENGTH
    len = strlen(input);
    if (len != BIT_VECTOR_LENGTH)
        ret = FALSE;

    // 2. the bits must be either of 0 or 1
    for (i=0; i<len; i++)
    {
        if (!(input[i] == '0' || input[i] == '1'))
        {
            ret = FALSE;
            break;
        }
    }
    return ret;
}

void init_bit_vector(char *input, char *bv)
{

}

void print_bit_vector(char *bv)
{

}