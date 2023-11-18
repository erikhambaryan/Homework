#include <iostream>
#include <csignal>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << argv[0] << "PIDPIDPID" << endl;
        return 1;
    }
    int signal_number = atoi(argv[1]);
    pid_t pid = atoi(argv[2]);



    if (kill(pid, signal_number) == -1)
    {
        perror("Error");
        return 1;
    }
    cout << "H" << signal_number << " xrgvel e " << pid << endl;
    return 0;
}
