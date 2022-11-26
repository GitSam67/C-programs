#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0, p = 0;
    cout << "Enter the number of processes: ";
    cin >> n;
    int at[n], bt[n], ct[n], tat[n], wt[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the arrival time of process " << i + 1 << endl;
        cin >> at[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the burst time of process " << i + 1 << endl;
        cin >> bt[i];
    }
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
    for (int i = 1; i < n; i++)
    {
        ct[0] = bt[0];
        ct[i] = ct[i - 1] + bt[i];
    }
    for (int i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
    }
    for (int i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
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