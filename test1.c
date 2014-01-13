#include<iostream.h>
#include<conio.h>
class Calculator
{
	private:
	int Num,a,b;
	public:
	Calculator(int n,int m)
	{
		a=n;
		b=m;
	}
	void calc(int ch)
	{
    	switch(ch)
		{
			case 1: Num=a+b;
				break;
			case 2: Num=a-b;
				break;
			case 3: Num=a*b;
				break;
			case 4: Num=a/b;
				break;
		}	 	 
	}
	void Display()
	{
	    cout<<"\nResult :"<<Num;
		
	}
};

int main()
{
	int a,b,c;
	while(1)
	{
		cout<<"\n Enter two operands : ";
		cin>>a>>b;
		Calculator Obj(a,b);
		cout<<"\n1. Add\n2. Sub\n3. Product\n4. Division\nEnter your choice : ";
		cin>>c;
		Obj.calc(c);
		Obj.Display();
		getch();
		cout<<"\n\n 1.Continue \t 0.Exit: ";
		cin>>c;
		if(c==0)
			break; 
			
	}

	return 0;
}	

