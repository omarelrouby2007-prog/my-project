#include <iostream>
using namespace std;
#include "classA.c++"
#include "classB.c++"
class D :public A,public B
{
private:
    int grade;
public:
        D(string n,int i,int gr):A(n),B(i){

            grade=gr;
        }
        void print (){

            A::print();
            B::print();

            cout<<"your grade is :"<<grade<<endl;
        }


    
};



