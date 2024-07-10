#include <iostream>
using namespace std;
//driver code
int main()
{
	char op;
	float num1,num2;
	//it allows user to enter operator
	//i.e. +,-,*,/
	cin>>op;
	//it allows user to enter the operands
	
	cin>>num1>>num2;
	//switch statrement begins
	switch(op){
		//if user enter +
		case'+':
			cout<<num1+num2;
			break;
			//if user enter'-'
			case'-':
				cout<<num1-num2;
				break;
				//if user enter *
				case'*':
					cout<<num1*num2;
						break;
						//if user enter /
						case'/':
							cout<<num1/num2;
							break;
							default:cout<<"error! Operator is not correct";
	}
	



	return 0;
}
