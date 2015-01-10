#include "functions.h"

pthread_t  main_thread;

int main(int argc, char **argv)
{
    cout << "Main thread started\n";
    cout << "Press enter Ctrl-c\n";
    main_loop(NULL);

    return EXIT_SUCCESS;
}
