#define str(x) #x
std::cout << str(test);

std::cout << "test";

#define glue(a,b) a ## b
glue(c,out) << "test";

std::cout << "test";