#include<iostream>
using namespace std;

int permutation(int n, int r)
{
  if(n<0 || r<0)
   throw " INVALID ARGUEMENTS ";
else
    {
    	if(n> r)
    	return n*permutation( n-1 , r);
    	else
    	return 1;
	}
 
}

int combination(int n, int r)
{
	if(n<0 || r<0)
	 throw " INVALID ARGUMENTS ";
	 else
	 {
	 
	if(r==0)
	return 1;
	else
	 return n/r * combination(n-1,r-1) ;
	 }
  
}

int main()
{
  int n , r;
  cout<<endl<<"Enter the value of n : ";
  cin>>n;
  cout<<endl<<" Enter the vale of r : ";
  cin>>r;
  try{
  
  cout<<endl<<" Permutation is : "<< permutation(n,n-r);
  cout<<endl<<" Combination is : "<< combination(n,n-r);
}
catch( const char *str)
{
	cout<<str;
}
  return 0;
}
