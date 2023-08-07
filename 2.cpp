#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int maxt, maxn, maxsum;
        cin >> maxt >> maxn >> maxsum;
        int count = 0;
        int sum = 0;
        int a = 0;
        for (int j = 1; j <= maxt; j++)
        {
            if (maxsum >= (sum + maxn))
            {
                sum += maxn;
                count++;
            }
            else
            {
                a = maxsum - sum;
            }
        }
        int ressum = 0;
        for (int k = 1; k <= count; k++)
        {
            ressum += maxn * maxn;
        }
        ressum += a * a;
        cout << ressum << endl;
    }
    return 0;
}
