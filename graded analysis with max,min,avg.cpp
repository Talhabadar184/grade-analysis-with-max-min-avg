#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int x,y;
	double temp=0,avg; 
	char ch;
	fstream file;
	file.open("example.txt",ios::out);
	cout<<"Enter the number of students: ";
	cin>>x;
	double i[x];
	for(y=0;y<x;y++)
	{
		cout<<"Enter the average persentage of student "<<y+1<<endl;
		cin>>i[y];
		temp=temp+i[y];
	}
	avg=temp/x;
	if(avg>=90&&avg<100)
	ch='A';
	else if(avg>=75&&avg<90)
	ch='B';
	else if(avg<75&&avg>=65)
	ch='C';
	else if(avg<65&&avg>=50)
	ch='D';
	else if(avg>50)
	ch='F';
	cout<<"Number of Class: "<<endl;
	for(y=0;y<x;y++)
	{
		cout<<i[y];
		if(y<x-1)
		cout<<",";
	}
	file<<ch<<avg<<endl;
	file.close();
	
 file.open("example.txt",ios::in);
	cout<<"The average and grade of class is"<<endl;
     char z;
     int Z;
    file>>z>>Z;    
    cout<<z<<" "<<Z;             
    
    
    
    file.close();
    
return 0;
}
