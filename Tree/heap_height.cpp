//Height of heap
//ceil(log2(N+1)-1);

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,size;
    cin>>T;
    while(T)
    {
        cin>>size;
        int heap_data[size];
        for(int i=0;i<size;i++)
            cin>>heap_data[i];
        cout<<ceil(log2(size+1)-1)<<endl;
        T--;
    }

	return 0;
}
