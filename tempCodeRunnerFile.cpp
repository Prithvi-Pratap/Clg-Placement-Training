#include<bits/stdc++.h>
using namespace std;

bool isPrime(long n)
    { 
	    int count=1;
	    for(int i=1;i<=n/2;i++){
		    if(n%i==0){
			    count++;
	    	}
	    }
	    return (count==2);
    }

    int countPrimes(int n) {
        int count=0;
        while(n>0){
            count+=isPrime(n);
            n--;
        }
        return count;        
    }

int main(){
  int num;
  cin>>num;
  cout<<countPrimes(num);
  return 0;
}