#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	double a,c,x,y;
	int b,d,a2;
	int a1;
	cout<<"1(size)2(common)"<<endl;
	cin>>a1;
	if(a1==1)
	{
		cout<<"(0)stop(1)n^m(2)circular cout>0!!!"<<endl;
		cin>>a2;
		while(a2!=0)
		{
		if(a2==1)
		{
			cin>>x>>y;
			x=pow(x,y);
			cout<<"answer  "<<x<<endl;
		}
		if(a2==2)
		{
			double p=3.14;
			cout<<"(1)c,(2)s"<<endl;
			cin>>x;
			if(x==1)
			{
				cout<<"r=() >0!!!"<<endl;
				cin>>y;
				if(y<0)
				{
				cout<<"wrong"<<endl;
				}
				if(y>=0)
				{
				cout<<"answer  "<<(double)2*y*p<<endl;
			}
			}
			if(x==2)
			{
				cout<<"r=() >0!!!"<<endl;
				cin>>y;
				if(y<0)
				{
						cout<<"wrong"<<endl;				
				}
				else
				{
				cout<<"answer  "<<(double)p*p*y<<endl;
			}
			}
			else
			{
				cout<<"wrong"<<endl;
			}
		}
		else
		{
			cout<<"wrong"<<endl;
		}
		cout<<"(1)n^m(2)circular"<<endl;
		cin>>a2;
	}
}
	if(a1==2)
	{
	cout<<"1(+)2(-)3(*)4(/)0(stop)"<<endl;
	cin>>a>>b>>c;
	while(b!=0)
	{
	if(b==1)
	{
		cout<<"answer  "<<a+c<<endl;
		d++;
	}
	if(b==2)
	{
		cout<<"answer  "<<a-c<<endl;
		d++;
	}
	if(b==3)
	{
		cout<<"answer  "<<a*c<<endl;
		d++;
	}
	if(b==4)
	{
		if(c==0) cout<<"wrong"<<endl;
		else
		{
		cout<<"answer  "<<a/c<<endl;
		d++;
	}
	}
	if(b==5)
	{
		cout<<"0.000"<<endl;
		printf("%3f\n",a/c);
	}
	else
	{
		cout<<"wrong"<<endl;
		cout<<"1(+)2(-)3(*)4(/)0(stop)"<<endl;
		cin>>a>>b>>c;
	}
		cin>>a>>b>>c;
		if(d==6)//可改
		{
			cout<<"1(+)2(-)3(*)4(/)0(stop)"<<endl;
		}
}
    }
    if(a1==666)
    {
    	int n;
    	cout<<"welcome to manager's personal home"<<endl;
    	cout<<"sign in"<<endl;
    	cin>>n;
    	if(n==999)
    	{
    		int a3;
    		cout<<"source code URL"<<endl;
    		cout<<"https://github.com/AAAnYuan/out"<<endl;
    		cin>>a3;
		}
		else
		{
			int u;
			u=0;
			while(u!=9999)
			{
				cout<<"Reminder that you are not a manager"<<endl;
				u++;
				if(u==9999)
				{
					cout<<"congratulations you passed the admin test"<<endl;
					cout<<"here is the key"<<endl<<"999"<<endl;
					cin>>n;
				}
			}
		}
	}
    else
    {
    	cout<<"wrong"<<endl;
    	cout<<"1(size)2(common)"<<endl;
    	cin>>a1;
	}

	return 0;
}