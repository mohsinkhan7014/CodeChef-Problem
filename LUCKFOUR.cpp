#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        long int n,count=0;
        cin>>n;
        while(n>0)
        {
            if(4==n%10)
            {
                count++;
            }
            n/=10;
        }
        std::cout <<  count << std::endl;
        
    }
	return 0;
}
