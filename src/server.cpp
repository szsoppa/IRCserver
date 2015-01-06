#include "functions.h"

pthread_t  main_thread;

int main(int argc, char **argv)
{
    if ( pthread_create (&main_thread, NULL, main_loop, NULL) != 0) {
      printf ("Thread create error");
      exit(EXIT_FAILURE);
    }

    printf ("Main thread started\n");
    printf ("Press enter to exit");
    getc(stdin);

    return EXIT_SUCCESS;
}
