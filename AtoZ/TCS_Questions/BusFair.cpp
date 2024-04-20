#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

float findCharges(string start, string end)
{
    string BusStops[] = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    int Path[] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    transform(start.begin(), start.end(), start.begin(), ::toupper);
    transform(end.begin(), end.end(), end.begin(), ::toupper);
    int indexStart = -1;
    int indexEnd = -1;
    float charges = 0;
    if (start == end)
    {
        return -1;
    }
    for (int i = 0; i < 8; i++)
    {
        if (BusStops[i] == start)
        {
            indexStart = i;
        }
        if (BusStops[i] == end)
        {
            indexEnd = i;
        }
    }
    if (indexStart == -1 || indexEnd == -1)
    {
        return -1;
    }
    if (indexStart >= indexEnd)
    {
        for (int i = indexEnd; i <= indexStart; i++)
        {
            charges = charges + Path[i];
        }
    }
    else
    {
        for (int i = indexStart; i <= indexEnd; i++)
        {
            charges = charges + Path[i];
        }
    }
    return charges;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string start, end;
        cin >> start >> end;
        float charges = findCharges(start, end);
        if (charges == -1)
        {
            cout << "INVALID OUTPUT" << endl;
        }
        else
        {
            cout << "Charges from " << start << " to " << end << " is: " << (charges / 1000) * 5 << endl;
        }
    }
    return 0;
}