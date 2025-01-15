#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
struct process
{
	int at,bt,wt,p;
};
int main()
{
	int n,t=0,complete=0;
	float twt=0;
	cout<<"enter no. of processes:";
    cin>>n;
	int rt[n];
	process proc[n];
    for(int i=0;i<n;i++)
	{
		cout<<"enter arrival time for process "<<i+1<<":";
		cin>>proc[i].at;
		cout<<"enter burst time for process "<<i+1<<":";
		cin>>proc[i].bt;
		cout<<"enter priority for process "<<i+1<<":";
		cin>>proc[i].p;
		rt[i]=proc[i].bt;
	}
	while(complete<n)
	{
		int temp=-1;
		int max=-1;
		for(int i=0;i<n;i++)
	    {
		    if(proc[i].at<=t&&rt[i]>0)
		    {
		    	if(proc[i].p>max)
		    	{
		    		max=proc[i].p;
		    		temp=i;
				}
				if(proc[i].p==max)
				{
					if(proc[i].at<proc[temp].at)
					{
						max=proc[i].p;
						temp=i;
					}
				}
		    }
		}
		if(temp!=-1)
		{
			rt[temp]--;
			t++;
			if(rt[temp]==0)
			{
				complete++;
				proc[temp].wt=t-proc[temp].at-proc[temp].bt;
				twt=twt+proc[temp].wt;
			}
		}
		else
		{
			t++;
		}
	}
	cout<<"Arrival Time\tBurst Time\tWaiting time\n";
    for(int i=0;i<n; i++) 
	{
        cout<<"\t"<<proc[i].at<<"\t\t"<<proc[i].bt<<"\t\t"<<proc[i].wt<<endl;
    }
    cout<<"average waiting time:"<<twt/n<<endl;
}
