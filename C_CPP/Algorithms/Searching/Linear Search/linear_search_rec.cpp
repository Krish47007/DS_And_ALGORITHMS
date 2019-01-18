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

/*

This approach was bad as if n is quite large depth of stack would be
proportional to n. And we would get stackoverflow error for large n.


int linearSearch(int* a,int n,int key)
{
    if(n>=0)
    {
        return a[n] == key? n+1 : linearSearch(a,n-1,key);
    }

    return -1;
}

*/

int linearSearch(int* a,int beg,int _end,int key)
{
    if(beg <= _end)
    {
        if(a[beg] == key)
            return beg+1;
        else if(a[_end] == key)
            return _end+1;

        else
            return linearSearch(a,beg+1,_end-1,key);
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

        int pos = linearSearch(a,0,n-1,key);

        pos == -1 ? printf("Element Not found\n") : printf("Element found at %d\n",pos);

    }

    return EXIT_SUCCESS;
}




