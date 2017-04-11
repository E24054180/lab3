#include<iostream>
#include<vector>
#include<cstdlib>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
	const int size=8;
	int cows[size];
	vector<int>v(size);	
	int i,j,sum;
	int insert,movelterm;
	
	string headline;
	
	ifstream in("file.in",ios::in);
	
	getline(in,headline);
	
	
	

	
	for( i=0;i<8;++i)
        {in>>cows[i];
	
        v.at(i)=cows[i];
        
	
        }
	
		
	for(int next=1;next<size;++next	)
	{  
		insert=v.at(next);
		movelterm=next;
		while((movelterm>0)&&(v.at(movelterm-1)>insert))
		{v.at(movelterm)=v.at(movelterm-1);
			--movelterm;}
		v.at(movelterm)=insert;
		
		
		
		
	}
	sum=v.at(3)+v.at(4)+v.at(5)+v.at(6)+v.at(7);
	cout<<sum<<endl;


	return 0;
	}

