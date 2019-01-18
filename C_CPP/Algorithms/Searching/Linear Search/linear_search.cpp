#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define REP_2(i,a,b) for (int i = a; i < b; i++)
#define SQ(a) (a)*(a)
#define toDigit(c) (c-'0')

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef vector<int> vi;
typedef pair<int,int> pi;

int linearSearch(int* a,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i] == key)
            return i+1;
    }

    return -1;
}

int main()
{
    printf("Enter size\n");
    int n,key;
    scanf("%d",&n);

    int* a = new int[n];

    printf("Enter %d elements\n",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }

    while(1)
    {
        printf("Enter element to be searched\n");

        scanf("%d",&key);

        int pos = linearSearch(a,n,key);

        pos == -1 ? printf("Element Not found\n") : printf("Element found at %d\n",pos);

    }

    return EXIT_SUCCESS;
}




