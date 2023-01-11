#include<iostream>
using namespace std;

class highschool
{
	private:
		int id,stu_roll_no,stu_standard,stu_age;
		long long int stu_contact;
		string stu_name,stu_address;
		static string stu_edu_institute_name;
	
	public:
	    void setschool()
		{
		   cout << "Enter ID : ";
           cin >> id;
           cout << "Enter Name : ";
           cin >> stu_name;
           cout << "Enter Roll Number : ";
           cin >> stu_roll_no;
           cout << "Enter Standard : ";
           cin >> stu_standard;
           cout << "Enter Age : ";
           cin >> stu_age;
           cout << "Enter Contact : ";
           cin >> stu_contact;
           cout << "Enter Address: ";
           cin >> stu_address;	
		}
		static void headerschool()
		{
		    cout << endl << "\t\t\t\t\tSTUDENTS DETAILS\t\t\t\t\t\n";
            cout << "Index No\tId\tName\tRoll No\tSTD\tAge\tContact\t\tInstitute name\tAddress\n-------- \t------- ------- ------- ------- ------- -----------\t-------------- -----------\n";	
		}
		void getschool(int i)
		{
			cout << i << "\t\t" << id << "\t" << stu_name << "\t" << stu_roll_no << "\t" <<
            stu_standard << "\t" << stu_age << "\t" << stu_contact << "\t" << stu_edu_institute_name <<
            "\t\t" << stu_address << "\n";
		}			
};
class College
{
	private:
		int id, stu_roll_no, stu_standard, stu_age;
        long long int stu_contact;
        string stu_name, stu_address;
        static string stu_institute_name;
        
    public:
	    void setclg()
		{	
			cout << "Enter ID : ";
            cin >> id;
            cout << "Enter Name : ";
            cin >> stu_name;
            cout << "Enter Roll Number : ";
            cin >> stu_roll_no;
            cout << "Enter Standard : ";
            cin >> stu_standard;
            cout << "Enter Age : ";
            cin >> stu_age;
            cout << "Enter Contact : ";
            cin >> stu_contact;
            cout << "Enter Address: ";
            cin >> stu_address;
		}
		static void headerclg()
		{
			cout << endl << "\t\t\t\t\tCOLLAGE DETAILS\t\t\t\t\t\n";
            cout << "Index No\tId\tName\tRoll No\tSTD\tAge\tContact\t\tInstitute name\tAdress\n-------- \t------- ------- ------- ------- ------- -----------\t-------------- -----------\n";
	    }
		void getclg(int i)
		{
			cout << i << "\t\t" << id << "\t" << stu_name << "\t" << stu_roll_no << "\t" <<
            stu_standard << "\t" << stu_age << "\t" << stu_contact << "\t" << stu_institute_name <<
            "\t\t" << stu_address << "\n";
		}		
};

string HighSchool::stu_edu_institute_name = "GSEB";
string College::stu_institute_name = "R&W";

int main()
{
	int i,n;
	
	cout<<endl
	    <<"enter number of school student: ";
	cin>>n;
	
	highschool s1[n];
	
	for(i=0;i<n;i++)
	{
		cout<<endl;
		s1[i].setschool();
	} 
	highschool::headerschool();
	
	for(i=0;i<n;i++)  
	{
		s1[i].getschool(i + 1);
	} 
	
	int j,m;
	
	   cout<<endl
	       <<endl
	       <<"enter number of collage students: ";
	   cin>>m;
	   
	college c1[m];
	
	    for(j=0;j<n;j++)
		{
			cout << endl;
            c1[j].setClg();
	    }
		College::headerClg();
		
        for (j = 0; j < n; j++)  
		{
			c1[j].getclg(j + 1);
		}    
}
