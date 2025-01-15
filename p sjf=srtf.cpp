#include<iostream>
#include<algorithm>
using namespace std;
struct process
{
	int at,bt,wt;
};
int main()
{
	int n;
	cout<<"enter no. of processes:";
	cin>>n;
	process proc[n];
	int complete=0,rt[n],t=0,temp=0;
	float twt=0;
	for(int i=0;i<n;i++)
	{
		cout<<"enter arrival time for process "<<i+1<<":";
		cin>>proc[i].at;
		cout<<"enter burst time for process "<<i+1<<":";
		cin>>proc[i].bt;
		rt[i]=proc[i].bt;
	}
	while(complete<n)
	{
		for(int i=0;i<n;i++)
	    {
		    if(proc[i].at<=t&&rt[i]>0)
		    {
		    	temp=i;
		    }
		}
		rt[temp]--;
		t++;
		if(rt[temp]==0)
		{
		    complete++;
		}
		proc[temp].wt=t-proc[temp].at-proc[temp].bt;
		if(proc[temp].wt<0)
		{
			proc[temp].wt=0;
		}
	}	
	for(int i=0;i<n;i++)
	{
		twt=twt+proc[i].wt;
	}
	cout<<"Arrival Time\tBurst Time\tWaiting time\n";
    for(int i=0;i<n; i++) 
	{
        cout<<"\t"<<proc[i].at<<"\t\t"<<proc[i].bt<<"\t\t"<<proc[i].wt<<endl;
    }
    cout<<"average waiting time:"<<twt/n<<endl;
}
