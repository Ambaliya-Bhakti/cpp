#include <iostream>
using namespace std;

class A
{
	public:
		virtual void bhakti()
  {
      cout << "\n\nHELLO BHAKTI" << endl << endl;
  }
};

class B : virtual public A
{
	public:
		void hello()
  {
	cout << "jimin : How are you???" << endl;
  }
};

class C : public A
{
	public:
		void how()
  {
	cout << "bhakti : I am fine!!!" << endl << endl << endl;
  }
};

int main()
{
	B b1;
	C c1;
	
	c1.bhakti();
	b1.hello();
	c1.how();
}
