#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(){
			cout<<"A's contructor called\n";
		}
		virtual void display(){			//using virtual function to achieve runtime polymorphism
			cout<<"A's display\n";
		}
};

class B:public A{		//publicly inheriting class A
	int b;
	public:
		B(){
			cout<<"B's contructor\n";
		}
		void display()		// same name function as Base class(A)
		{
			cout<<"B's display\n";
		}
};
int main()
{
	B obj;
	A *ptr=&obj;	// creating base pointer to hold address of child's object
	ptr->display();  // finally calling child function using base pointer
	return 0;
}