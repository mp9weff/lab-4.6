#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double S, S1;
    int k, i;
    S = 0;
    k = 1;
    while (k <= 20)

    {
        S1 = 0;
        i = k;
        while (i <= 40 - k)

        {
            S1 += pow(i, 2);
            i++;

        }
        S += (1 + sqrt(S1)) / (pow(k, 2));
        k++;

    }
    cout << S << endl;

    S = 0;
    k = 1;
    do
    {
        S1 = 0;
        i = k;
        do
        {
            S1 += pow(i, 2);
            i++;
        } while (i <= 40 - k);
        S += (1 + sqrt(S1)) / (pow(k, 2));
        k++;
    } while (k <= 20);

    cout << S << endl;

    S = 0;
    for (k = 1; k <= 20; k++)

    {
        S1 = 0;
        for (i = k; i <= 40 - k; i++)

        {
            S1 += pow(i, 2);

        }
        S += (1 + sqrt(S1)) / (pow(k, 2));

    }
    cout << S << endl;

    S = 0;
    for (k = 20; k >= 1; k--)

    {
        S1 = 0;
        for (i = 40 - k; i >= k; i--)

        {
            S1 += pow(i, 2);
        }
        S += (1 + sqrt(S1)) / (pow(k, 2));
    }
    cout << S << endl;
    return 0;
}