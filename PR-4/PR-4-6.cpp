#include <iostream>
using namespace std;

class bhakti 
{
	private:
		int id;
		char nm[200];
		
	public:
	    bhakti()
		{ 
		   cout<<"welcome to the hotel..."<<endl;
		   
		   cout<<"enter customer ID :";
		   cin>>id;
		   
		   cout<<"enter customer name :";
		   cin>>nm;
		   
		   cout
		       <<"\n\tCUSTOMER DETAILS\n";
		       
		   cout
		       <<"customer ID\tcustomer name\n-------------- -------------\n";
			   
		   cout<<id<<"\t\t"<<nm<<"\t"<<endl;	      
		}	
};

int main()
{
	bhakti s1;
}
