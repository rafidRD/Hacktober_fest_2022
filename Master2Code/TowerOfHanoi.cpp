#include<iostream>
using namespace std;

void ToH(int n,char S, char Aux,char D)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<S<<" to "<<D<<endl;
		return;
	}
	
	ToH(n-1,S,D,Aux);
	cout<<"Move Disk "<<n<<" from "<<S<<" to "<<D<<endl;
	TOH(n-1,Aux,S,D);
}


int main()
{ 
	int n;

	cout<<"Enter no. of disks:";	
	cin>>n;
	ToH(n,'A','B','C');
	
	return 0;
}
