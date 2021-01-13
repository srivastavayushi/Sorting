#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class date
{
	public:
		int day;
		int month;
		int year;
		
	    void enter()
	    {
	    	cout<<"\nenter day, month and year respectiely";
	    	cin>>day>>month>>year;
		}
		
		void display()
		{
			cout<<day<<"-"<<month<<"-"<<year;
		}
};

class hackathon
{
	public:
		string name;
		date d;
		
		void enter()
		{
			cout<<"\nEnter the name of the hackathon";
			cin>>name;
			cout<<"\nEnter the date of commencement of the hackathon";
			d.enter();
		}
		void display()
		{
			cout<<setw(20)<<name<<setw(17);
			d.display();
		}
};

int main()
{
	int n;
	hackathon temp;
	hackathon hack[20];
	cout<<"\nEnter the no. of hackathons";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		hack[i].enter();
	}
	for(int i=0;i<n-1;i++)
	{
		x:
		for(int j=1;j<n;j++)
		{
			if(hack[i].name>hack[j].name)
			{
				temp.name=hack[i].name;
				hack[i].name=hack[j].name;
				hack[j].name=temp.name;
				temp.d.day=hack[i].d.day;
				hack[i].d.day=hack[j].d.day;
				hack[j].d.day=temp.d.day;
				temp.d.month=hack[i].d.month;
				hack[i].d.month=hack[j].d.month;
				hack[j].d.month=temp.d.month;
				temp.d.year=hack[i].d.year;
				hack[i].d.year=hack[j].d.year;
				hack[j].d.year=temp.d.year;
				goto x;
			}
		}
	}
	
	cout<<"\n";
	cout<<setw(3)<<"S.NO"<<setw(20)<<"NAME"<<setw(17)<<"DATE";
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<setw(3)<<i+1;
		hack[i].display();
	}
	return 0;
}
