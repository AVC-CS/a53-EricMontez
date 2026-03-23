#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int begin, end, i, total=0;
    while (1)
    {
        cout << "Enter begin and end: ";
        cin >> begin >> end;
        if (begin <= end)
            break;
    }

    if (( begin % 2 == 1) || (begin % 2 == -1))
    {
        begin++; 
    }

    i = begin;
    while (i <= end)
    {
        total += i;
        i += 2;
    }
    cout << "Total is " << total << endl;
    return 0;
}
