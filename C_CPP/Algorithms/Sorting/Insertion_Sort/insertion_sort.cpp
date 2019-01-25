#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int* a,int n)
{
    for(int i=1;i<n;i++)  //First element is always sorted so start the loop from i=1
    {
        int j = i-1;    // j marks the position up to which the array is sorted
        int key = a[i];

        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = key;   //Inserting the element in the correct position.
    }
}


int main()
{
    int n;
    printf("Enter size\n");
    scanf("%d",&n);

    int* a = (int* )calloc(sizeof(int),n);

    printf("Enter %d elements\n",n);

    for(int i=0;i<n;i++)
        scanf("%d",(a+i));

    insertion_sort(a,n);

    printf("After sorting\n");

    for(int i=0;i<n;i++)
        printf("%d\t",*(a+i));

}
