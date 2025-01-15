#include<iostream>
#include<algorithm>
using namespace std;
struct process
{
	int at,bt,wt,ct,tat;
};
int main()
{
	int n,tq,rt[n],t=0,twt=0;
	bool complete=false;
	cout<<"enter no. of processes:";
	cin>>n;
	cout<<"enter time quantum:";
	cin>>tq;
	process proc[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter arrival time for process "<<i+1<<":";
		cin>>proc[i].at;
		cout<<"enter burst time for process "<<i+1<<":";
		cin>>proc[i].bt;
		rt[i]=proc[i].bt;
	}
    while(!complete)
	{
		complete=true;
	    for(int i=0;i<n;i++)
	    {
		   	if(rt[i]>0)
		   	{
				complete=false;
	    		if(rt[i]>tq)		    
				{
		    		t=t+tq;
		   		    rt[i]=rt[i]-tq;
			    }
		        else if(rt[i]<=tq)
			    {
			  		t=t+rt[i];
			   		rt[i]=0;
					proc[i].ct=t;	
				}
		    }
	    }
    }	
	for(int i=0;i<n;i++)
	{
		proc[i].tat=proc[i].ct-proc[i].at;
		proc[i].wt=proc[i].tat-proc[i].bt;
		twt=twt+proc[i].wt;
	}
	cout<<"Arrival Time\tBurst Time\tWaiting time\tCompletion time\tTurn around time\n";
    for(int i=0;i<n; i++) 
	{
        cout<<"\t"<<proc[i].at<<"\t\t"<<proc[i].bt<<"\t\t"<<proc[i].wt<<"\t\t"<<proc[i].ct<<"\t\t"<<proc[i].tat<<endl;
    }
    cout<<"average waiting time:"<<twt/n<<endl;
}
