#include <iostream>
using namespace std;

class hotel
{
	private:
		string name;
		
	public:
	    hotel(string name)
		{
			cout<<endl
			    <<"welcome to the hotle..."<<endl;
			    
			this->name = name;
			
			cout<<"name :"<<name<<endl<<endl;	    
		}	
};
int main()
{
	hotel h1("bhakti");
}

