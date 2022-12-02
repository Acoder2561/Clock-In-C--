#include <string.h>
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{

    while (1)
    {
        system("CLS");
        time_t now = time(0);
        string date_time = ctime(&now);
        string hour = date_time.substr(11, 2);
        string minutes = date_time.substr(14, 2);
        string sec = date_time.substr(17, 2);
        cout << "\t\t\t------------------------------\t\t\t\n";
        cout << "\t\t\t------------------------------\t\t\t\n";
        cout << "\t\t\t| Current Time is : " << hour << ":" << minutes << ":" << sec << " |"  << endl;
        cout << "\t\t\t------------------------------\t\t\t\n";
        cout << "\t\t\t------------------------------\t\t\t\n";
        Sleep(1000);
        }
}