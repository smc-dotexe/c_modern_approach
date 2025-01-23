// demonstration of the concept, pointer to a function

#include <stdio.h>

void sayHello() {
    printf("Hello\n");
}

void sayGoodbye() {
    printf("Goodbye\n");
}

void executeFunction(void (*funcPtr)()) {
    funcPtr(); // call the function by pointer
}

int main() {
    void (*func)();
    func = sayHello;
    executeFunction(func);
    func = sayGoodbye;
    executeFunction(func);

    return 0;
}