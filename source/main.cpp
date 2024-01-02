#include "console.hpp"

int main(int argc, char *argv[])
{
    auto console = Console(100, 100);
    console.start();
    return 0;
}