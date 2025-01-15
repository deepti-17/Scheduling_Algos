#include<iostream>
#include<cmath>
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
	int complete=0,rt[n],t=0;
	float twt=0;
	for(int i=0;i<n;i++)
	{
		cout<<"enter arrival time for process "<<i+1<<":";
		cin>>proc[i].at;
		cout<<"enter burst time for process "<<i+1<<":";
		cin>>proc[i].bt;
	}
	for(int i=0;i<n;i++)
	{
		rt[i]=proc[i].bt;
	}
	for(int i=0;i<n-1;i++)
	{
		int smallest=i;
		for(int j=i;j<n;j++)
		{
			if(proc[j].bt<proc[smallest].bt)
			{
				smallest=j;
			}
		}
		swap(proc[smallest].bt,proc[i].bt);
		swap(proc[smallest].at,proc[i].at);
	}
	while(complete<n)
	{
		for(int i=0;i<n;i++)
	    {
		    if(proc[i].at<=t&&rt[i]>0)
		    {
			    t=t+proc[i].bt;
			    rt[i]=0;
			    rt[i]=0;
		        proc[i].wt=t-proc[i].at-proc[i].bt;
		        complete++;
		    }                  
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


