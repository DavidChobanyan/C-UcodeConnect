#include "minilibmx.h"

int main(int argc, char* argv[]) {
    enum e_operation p = -1;
    enum e_error mistake = -1;
    t_operation top;

    if (argc != 4) {
        mx_printerr("usage: ./calc [operand1] [operation] [operand2]\n");
        return -1;
    }
    int a = mx_atoi(argv[1]);
    char* b = argv[2];
    int c = mx_atoi(argv[3]);
    switch (b[0]) {
        case '-':
            p = SUB;
            top.f = mx_sub;
            break;
        case '+':
            p = ADD;
            top.f = mx_add;
            break;
        case '*':
            p = MUL;
            top.f = mx_mul;
            break;
        case '/':
            p = DIV;
            top.f = mx_div;
            break;
        case '%':
            p = MOD;
            top.f = mx_mod;
            break;
        default:
            mistake = INCORRECT_OPERATION;
            break;
    }
    top.op = p;

    if (c == (0)) {
        if (p == DIV)
            mistake = DIV_BY_ZERO;
        else
            mistake = INCORRECT_OPERAND;
    }
    switch (mistake) {
        case INCORRECT_OPERATION:
            mx_printerr("error: invalid operation\n");
            return -3;
            break;
        case DIV_BY_ZERO:
             mx_printerr("error: division by zero\n");
             return -3;
             break;
	case INCORRECT_OPERAND:
             mx_printerr("error: invalid number\n");
             return -2;
             break;
    }
    int res = top.f(a, c);

    mx_printint(res);
    mx_printchar('\n');
}
