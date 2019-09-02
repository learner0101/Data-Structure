//c++ program to  find sum of bit difference


/*
Input:  arr[] = {1, 3, 5}
Output: 8
All pairs in array are (1, 1), (1, 3), (1, 5)
                       (3, 1), (3, 3) (3, 5),
                       (5, 1), (5, 3), (5, 5)
Sum of bit differences =  0 + 1 + 1 +
                          1 + 0 + 2 +
                          1 + 2 + 0 
                       = 8
                       */

#include <iostream>
using namespace std;
int sumOfBitDiff(int arr[], int n)
{
    int ans = 0;  // Initialize result

    // traverse over all bits
    for (int i = 0; i < 32; i++)
    {
        // count number of elements with i'th bit set
        int count = 0;
        for (int j = 0; j < n; j++)
            if ( (arr[j] & (1 << i)) )
                count++;

        // Add "count * (n - count) * 2" to the answer
        ans += (count * (n - count) * 2);
    }

    return ans;
}

//driver function
int main() {
	int T,N;
	cin>>T;
	while(T)
	{
	    cin>>N;
	    int a[N];
	    for(int i=0;i<N;i++)
	        cin>>a[i];
	   cout<<sumOfBitDiff(a,N)<<endl;
	   T--;
	}
	return 0;
}
