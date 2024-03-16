#include <iostream>
#include <fstream>
 
using namespace std;
 
int main ()
{
    long long c[8]={6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};
    long long a, b;
    cin >> a >> b;
    bool ok = false;
    for(int i = 0; i < 8; i++)
    {
        if(c[i] >= a && c[i] <= b)
        {
            cout << c[i] << endl;
            ok = true;
        }
    }
 
    if(!ok)
        cout << "Absent" << endl;
    return 0;
}