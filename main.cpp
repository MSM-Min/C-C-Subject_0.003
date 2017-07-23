//file :main.c

#include <cstdlib>
#include <iostream>

using namespace std;

//*********************************
class Fruit{
public:   
   int no ;
   double weight; 
   char key; 

   Fruit(void):no(5){
     
   } 
   void print() {   }
   virtual void process(){   }
};
 
//*********************************
class Apple: public Fruit{
public:
   int size;
   char type;

   void save() {   }
   virtual void process(){   }
};

//*********************************
int main(int argc, char *argv[])
{
    cout << "Press the enter key to continue ...";
    cout <<"\n"<<endl;
    cout <<sizeof(Fruit)<<endl;
    cout <<sizeof(Apple)<<endl;
    
    Fruit fr1; //创建三个对象 
    Fruit fr2;
    Apple ap1;  
    cout <<"*****************************************"<<endl;
    int* pf1 = (int*)&fr1;//让pf1指针指向这个对象 
    int* pf2 = (int*)&fr2; //让pf2指针指向这个对象
    
    cout << *pf1 << endl << *(pf1+1) << endl;
    cout <<"\n"<<endl;
    cout << *pf2 << endl << *(pf2+1) << endl; 
     
    cout <<"*****************************************"<<endl;   
    cout <<"pf1        = %x"<< &fr1<<endl;
    cout<<"pf1.no     = %x"<< &fr1.no << endl;
    cout<<"pf1.weight = %x"<< &fr1.weight<< endl;
    cout<<"pf1.key    = %x"<<&fr1.key<< endl;
    cout <<"\n"<<endl;
    cout<<"ap1        = %x"<<&ap1<< endl;
    cout<<"ap1.no     = %x"<<&ap1.no<< endl;
    cout<<"ap1.weight = %x"<<&ap1.weight<< endl;
    cout<<"ap1.key    = %x"<<&ap1.key<< endl;
    cout<<"ap1.size   = %x"<< &ap1.size<< endl;
    cout<<"ap1.type   = %x"<<&ap1.type<< endl;
    
    cin.get();
    return EXIT_SUCCESS;
}
