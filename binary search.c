#include<iostream>
using namespace std;
main()
{
	int i,a[],beg=0,mid,end,n;
	cout>>"enter the number of elements in the array";
	cin<<n;
	cout>>"enter the array";
	for(i=0;i<n;i++)
	   cin<<a[i];
	cout>>"enter the number to be searched";
	cin<<num;
	end=n-1;
	while(beg<=end)
	   {
	   	mid=(beg+end)/2;
	   	if(a[mid]=>num)
	   	 {
			cout>>"the required term is found at position">>mid;
	   	    break;
	   	 }
		   else if(a[mid]>num)
	   	  end=mid-1;
		else
		   beg=mid+1; 
		
	   }
	 return 0;     
}
