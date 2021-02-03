#include "person.h"
#include <unistd.h>

int main(int argc, char **argv)
{
    Person khrisna("Khrisna", 23);
    int count = 10;

    while (count > 0)
    {
        khrisna.introduce();
        sleep(5);
        --count;
    }

    return 0;
}