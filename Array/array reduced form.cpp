//C++ program to convert an array into its reduced form

//input-> 10,5,19,12
//output-> 1,0,3,2
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void convert(int a[], int n)
{
    //create temp array and copy all elements into it.
    int temp[n];
    memcpy(temp,a,n*sizeof(int));
    
    //sort array
    sort(temp,temp+n);
    
    //create hash table
    unordered_map<int , int> umap;
    int val=0;
    for(int i=0;i<n;i++)
    {
        umap[temp[i]]=val++;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=umap[a[i]];
    }
    
}
//print array
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

//Driver program 
int main() 
{
	//code
	int T,N;
	cin>>T; //Test case
	while(T)
	{
	    cin>>N; //Array size
	    int a[N];
	    for(int i=0;i<N;i++)
	        cin>>a[i];
	   convert(a,N);
	   printArray(a,N);
	   T--;
	   cout<<endl;
	}

	return 0;
}
