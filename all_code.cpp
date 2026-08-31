#include <iostream>
using namespace std;
class A{

 private:
 string name;
 public:
 A(string n){

     name=n;
     
 }

 void print (){


     cout<<"your name is :"<<name<<endl;
 }

};
#include <iostream>
using namespace std;
  
  class B

{
private:
    int id;
public:
   B(int i){

       id=i;
   }
   void print(){

       cout<<"your is id is ="<<id<<endl;
   }

};


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
int main(){

     D ob1("omar",2504,11);
     ob1.print();




}



