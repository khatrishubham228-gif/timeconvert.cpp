#include <iostream>
using namespace std;
class timeconverter
{

public:
    int Totalsec;
    int hr;
    int min;
    int remsec;
    int sec;

    void shoWdetail()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
};
int main()
{
    timeconverter t1;
    cout << "enter the total second:" << endl;
    cin >> t1.Totalsec;

    t1.hr = t1.Totalsec / 3600;
    t1.remsec = t1.Totalsec % 3600;
    t1.min = t1.remsec / 60;
    t1.sec = t1.remsec % 60;
    t1.shoWdetail();
    return 0;
}