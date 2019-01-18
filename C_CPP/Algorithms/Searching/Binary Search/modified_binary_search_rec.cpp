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

int binarySearch(int* a,int beg,int _end,int key)
{
    if(beg <= _end)
    {
        int mid = beg + (_end - beg)/2; //To prevent integer overflow

        if(a[mid] == key)
            return mid+1;
        else if(a[mid] > key)
            return binarySearch(a,0,mid-1,key);
        else
            return binarySearch(a,mid+1,_end,key);
    }
   else if(beg >= _end)
   {
       //When beg becomes greater than _end means element
       //is not present and _end+1 denotes the pos where it
       //should be present.

       return -(_end+1);    //Negative value is returned to make sure that's the index
                            // where that element should be present.
   }
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

        int pos = binarySearch(a,0,n-1,key);

        pos >0 ? printf("Element found at %d\n",pos) : printf("Element can be inserted at %d \n",abs(pos)+1); //For 1 based index

    }

    return EXIT_SUCCESS;
}




