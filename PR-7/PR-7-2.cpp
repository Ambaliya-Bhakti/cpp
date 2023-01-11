#include <iostream>
using namespace std;

class A
{
	protected:
		int a = 12;
	public:
		virtual void disA()
 {
    cout << "\nValue of A : " << a << endl <<endl;
 }
};

class B : virtual public A
{
	protected:
		int b = 57;
	public:
		virtual void disB()
 {
    cout << "Value of B : " << b << endl <<endl;
 }
};

class C : virtual public A
{
	protected:
		int c = 45;
	public:
		virtual void disC()
 {
    cout << "Value of C : " << c << endl <<endl;
 }
};

class D : public B, public C
{
	protected:
		int d = 65;
	public:
		virtual void disD()
  {
      cout << "Value of D : " << d << endl << endl << endl << endl;
  }
};

int main()
 {
	D d1;
	
	d1.disA();
	d1.disB();
	d1.disC();
	d1.disD();
}
