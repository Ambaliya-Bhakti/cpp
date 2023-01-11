#include <iostream>
using namespace std;

class mother
{
    protected:
       string name;
       int age;
       
    public:
       void Setvalue()
       {
           cout << "\t\t\t\tEnter Name : ";
           cin >> name;
           cout << "\t\t\t\tEnter Age : ";
           cin >> age;
       }
};

class monkey : public mother
{
   public:
      void monkeydisplay()
      {
          cout << endl<< "\t\t\t\tThe monkey name is " << name << " ,\n\t\t\t\tThe monkey is " << age << "Years old" << endl
               << endl;
      } 
};

class Dolphin : public mother
{
    public:
       void dolphindisplay()
       {
           cout << endl << "\t\t\t\tThe Dolphin name is " << name << " ,\n\t\t\t\tThe Dolphin is " << age <<"Years old" << endl
                << endl;
       }
};

int main()
{
    monkey m1;
    Dolphin d1;
    
    cout << endl
         << "\t\t\t\t* Set Value For MONKEY *" << endl
         << endl;
         
    m1.Setvalue();
    
    cout << endl
         << "\t\t\t\t* Set Value For DOLPHIN *" << endl
         << endl;
         
    d1.Setvalue();
    
    cout << endl
         << "\t\t\t\t* MONKEY INFORMATION *"
         << endl;
         
    m1.monkeydisplay();
    
    cout << endl
         << "\t\t\t\t* DOLPHIN INFORMATION *"
         << endl;
         
d1.dolphindisplay();
}

