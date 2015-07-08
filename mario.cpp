#include <iostream>

using namespace std;

int main()
{
    int h, i, j;
    cout << "Enter the height: ";
    cin >> h;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "@";
        }
        cout << endl;
    }
    return 0;
}
