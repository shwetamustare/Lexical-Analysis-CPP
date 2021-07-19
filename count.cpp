#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	FILE *myfile;
	int cc=0,wc=0,lc=0;
	char c='\0';
	myfile=fopen("prog.c","r");
	while(c!=EOF)
	{
		c=fgetc(myfile);
		if(c!=EOF)
		{
			cout<<c;
		}
		cc++;
		if(c=='\n' || c==' ')
		{
			wc++;
		}
		if(c=='\n')
		{
			lc++;
		}
	}
	cout<<"\nCharacter count is: "<<cc<<endl;
	cout<<"Word count is: "<<wc<<endl;
	cout<<"Line count is : "<<lc<<endl;
	return 0;
}

