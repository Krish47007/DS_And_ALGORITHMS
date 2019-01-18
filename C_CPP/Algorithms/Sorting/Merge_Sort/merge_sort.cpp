#include<bits/stdc++.h>

using namespace std;

void merge_array(int* a,int p,int q,int r)
{
    int n1 = q-p+1;
    int n2 = r-q;

    int* L = (int*)calloc(sizeof(int),n1);
    int* R = (int*)calloc(sizeof(int),n2);

    //Copy elements from p to q to 1st array
    for(int i=0;i<n1;i++)
        L[i] = a[p+i];

    //Copy elements from q+1 to r to 2nd array
    for(int i=0;i<n2;i++)
        R[i] = a[q+1+i];

    int i=0;    //Index of 1st sub-array
    int j=0;    //Index of 2nd sub-array
    int k=p;    //Index of merged array

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
            k++;
        }
        else
        {
            a[k] = R[j];
            j++;
            k++;
        }
    }

    //If any element is left in 1st array
    while(i<n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    //If any element is left in 2nd array
    while(j<n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }


}

void merge_sort(int* a,int p,int r)
{
    if(p < r)
    {
        int q = p + ( r - p)/2;

        merge_sort(a,p,q);  //Sort 1st half
        merge_sort(a,q+1,r);//Sort 2nd half
        merge_array(a,p,q,r); //Finally merge the sorted arrays
    }
}


int main()
{
    int n;
    printf("Enter size\n");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);

    int* a = (int* )calloc(sizeof(int),n);

    for(int i=0;i<n;i++)
        scanf("%d",(a+i));

    printf("Elements after sorting:\n");

    merge_sort(a,0,n-1);

    for(int i=0;i<n;i++)
        printf("%d\t",*(a+i));

    return 0;

}

