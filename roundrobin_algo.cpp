#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0, p = 0, tq, max = 0, m, stack = 0;
    cout << "Enter the number of processes: ";
    cin >> n;
    int at[n], bt[n], ct[n], tat[n], wt[n], tempbt[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the arrival time of process " << i + 1 << endl;
        cin >> at[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the burst time of process " << i + 1 << endl;
        cin >> bt[i];
        tempbt[i] = bt[i];
        if (bt[i] > max)
        {
            max = bt[i];
        }
    }
    printf("Enter the time quantum\n");
    scanf("%d", &tq);

    int temp, temp1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (at[j] > at[j + 1])
            {
                temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;
                temp1 = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp1;
            }
        }
    }
    int i = 0;
    m = (max / tq) + 1;
    while (m > 0)
    {
        if (bt[i] > 0)
        {
            if ((bt[i] - tq) <= 0)
            {
                if (i == 0)
                {
                    ct[i] = stack + bt[i];
                    stack = ct[i];
                    bt[i] = 0;
                    if (i == n - 1)
                    {
                        i = 0;
                        m--;
                    }
                    i++;
                    continue;
                }
                else
                {
                    ct[i] = stack + bt[i];
                    stack = ct[i];
                    bt[i] = 0;
                    if (i == n - 1)
                    {
                        i = -1;
                        m--;
                    }
                    i++;
                    continue;
                }
            }
            else
            {
                ct[i] = stack + tq;
                stack = ct[i];
                bt[i] = bt[i] - tq;
                if (i == n - 1)
                {
                    i = -1;
                    m--;
                }
                i++;
                continue;
            }
        }
        else
        {
            if (i == n - 1)
            {
                i = -1;
                m--;
            }
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
    }
    for (int i = 0; i < n; i++)
    {
        wt[i] = tat[i] - tempbt[i];
    }
    for (int i = 0; i < n; i++)
    {
        s += tat[i];
    }
    for (int i = 0; i < n; i++)
    {
        p += wt[i];
    }
    cout << "completion time" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ct[i] << endl;
    }
    cout << "turn around time" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tat[i] << endl;
    }
    cout << "Waiting time" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << wt[i] << endl;
    }

    cout << "Average turn around time : " << s / n << endl;
    cout << "Average waiting time : " << p / n << endl;
}