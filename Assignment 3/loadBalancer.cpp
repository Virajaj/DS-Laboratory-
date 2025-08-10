//number of server, number of client requests. client iD --> hash value 

#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout<<"Enter the number of Servers:\n";
	int serverCount ;
	cin >> serverCount;
	int serverNumber[serverCount];
	int ipAddress = 0;
	int hash;
	string ch;
	while(1)
	{
		
		for(int i = 0;i<serverCount;i++)
		{	
			cout<<"Enter your IP address:\n";
			cin>>ipAddress;
			hash = ipAddress%serverCount;
			serverNumber[hash] = hash+1;
			cout<<"You are connected to Server"<<serverNumber[hash]<<endl;
			cout<<"Do you want to continue ? Press Y to continue."<<endl;
			cin>>ch;
		}
		if(ch == "y" || ch == "Y")
		{	
			cout<<"Thank you for using this program!!"<<endl;
			break;
		}
		else
		{
			break;
		}
		
	}
	/*
	cout<<"Do you want to print the IP Addresses you inputted ? If yes, press y."<<endl;
	string ch1;
	cin>> ch1;
	if(ch1 == "y" || ch1 == "Y")
	{
		for(int j=0;j<serverCount;j++)
		{
			cout<<serverNumber[j]<<"\t";
		}
	
	}
	*/
	
	return 0;

}
		 

