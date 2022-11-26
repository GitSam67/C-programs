#include <stdio.h>

int n; // size of array :

int max(int x[])
{                             // Function to find the largest element in an array :
    int k = x[0];
    for (int i = 0; i < n; i++)
    {
        if (k < x[i])
        {
            k = x[i];
        }
    }
    return k;
}

// Using Bubble Sort Algorithm :

void bubble_sort(int a[], int n)
{
    int swap;
    for (int j = 1; j <= n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap = a[i + 1];
                a[i + 1] = a[i];
                a[i] = swap;
            }
        }
    }
}

// Using Insertion Sort Algorithm :

void insertion_sort(int a[], int n)
{
    int k, j;
    for (int i = 0; i < n - 1; i++)
    {
        j = i;
        while (j >= 0)
        {
            k = a[j + 1];
            if (a[j + 1] < a[j])
            {
                a[j + 1] = a[j];
                j--;
                a[j + 1] = k;
            }
            else
            {
                a[j + 1] = k;
                break;
            }
        }
    }
}

// Using Selection Sort Algorithm :

void selection_sort(int a[], int n)
{
    int j, min, swap, k;
    for (int i = 0; i < n - 1; i++)
    {
        min = a[i];
        j = i + 1;
        while (j < n)
        {
            if (a[j] < min)
            {
                min = a[j];
                k = j;
            }
            j++;
        }
        if (a[i] > a[k])
        {
            swap = a[i];
            a[i] = a[k];
            a[k] = swap;
        }
    }
}

// Using Quick Sort Algorithm :

int partition(int a[], int low, int high)
{
    int p = a[low];
    int i = low + 1;
    int j = high - 1;

    while (i < j)
    {
        while (a[i] <= p)
        {
            i++;
        }
        while (a[j] > p)
        {
            j--;
        }
        if (i < j)
        {
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    if (i > j)
    {
        int swap;
        swap = a[j];
        a[j] = a[low];
        a[low] = swap;
    }
    return j;
}

void quick_sort(int a[], int low, int high)
{
    int x;
    if (low < high)
    {
        x = partition(a, low, high);
        quick_sort(a, low, x - 1);
        quick_sort(a, x + 1, high);
    }
}

// Using Merge Sort Algorithm :

void merge(int a[], int low, int mid, int high)
{
    int i, j, k, b[n];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else if (a[j] < a[i])
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= high)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void mergesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

// Using Count Sort Algorithm :

void countsort(int a[], int n)
{
    int j = 0;
    int k = max(a) + 1;
    int b[k];
    for (int i = 0; i < k; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    for (int i = 0; i < k; i++)
    {
        while (b[i] != 0 && j<n)
        {
            b[i]--;
            a[j] = i;
            j++;
        }
    }
}

int main()
{
    int a[100];
    printf("Enter size of array:\n");
    scanf("%d", &n);
    printf("Enter values of n:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Series before sorting:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    //  bubble_sort(a, n);
    //  insertion_sort(a, n);
    //  selection_sort(a, n);
    // quick_sort(a, 0, n);
    mergesort(a,0,n-1);
    // countsort(a, n);

    printf("\n");
    printf("Series after sorting:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
