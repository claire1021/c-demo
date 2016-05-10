#include<iostream>
class A{
public:
	A();
	A(int x1):x(x1){}
	~A();
	void printfA(){
		std::cout<<"This is a ~~~~"<<std::endl;
	}

	void printfX(){
		std::cout<<"x = "<<x<<std::endl;
	}

private:
	int x ;
};