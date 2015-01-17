#include "functions.h"

pthread_t  main_thread;

int main(int argc, char **argv)
{
    create_channels();
    create_users_file();
    create_nicknames_file();
    if ( pthread_create (&main_thread, NULL, main_loop, NULL) != 0) 
    {
        printf ("Thread create error");
        exit(EXIT_FAILURE);
    }
    cout << "Main thread started.\n";
    cout << "Press enter to stop server.\n";
    getc(stdin);
    cout << "Server terminated.\n";
    remove("data/nicknames/nicknames.txt");
    return EXIT_SUCCESS;
}
