
/*
int *f; f is the pointer to int*
int *f, *g;
int *f(); f is function which return int*
int (*f)(); f is pointer to function which return int 
int *(*f)(); f is pointer to function whick return int*

int f[]; f is variable and sequence of int
int *f[]; f is varialbe and sequence of int*

int f()[]; //illegal
int f[](); //illegal
int (*f[])(); f is pointer to array which item is int
int *(*f[])(); f is pointer to array which item is int*

int (*(*f)())[10]; f is pointer to fucntion returning pointer to array 10 of int
int (*(*x)[10])(); x is pointer to array 10 of pointer to function return int

//pointer jump table
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

double (*oper_func[])(double, double) = {add, sub, mul, div};
result = oper_func[oper](op1, op2);

putchar("0123456789ABCDEF"[value % 16]);
rmainder = value % 16;
if(remainder < 10)
	putchar( remainder + '0');
else
	putchar( remainder - 10 + 'A');
*/