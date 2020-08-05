/**
 * Ref: 
 * - https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.1.0/com.ibm.zos.v2r1.cbclx01/cplr061.htm
 */

#include<iostream>

using namespace std;

class OutterClass {

public:

OutterClass() {

}

class InnerClass1 {    
    private:    
    int num;
    OutterClass& parent;
    
    public:    
    InnerClass1() {
    }

    void setNum(int num) {
        this->num = num;
    }

    int getNum() {
        return this->num; 
    }

    int getSum(int outterNum) {
        return outterNum + num; 
    }

};

private: 
    int outterNum{5};     

};

int main() {

    OutterClass outterObj; 


    cout<<"Nested classes in C++"<< endl;
    OutterClass :: InnerClass1 innerObj1;

    innerObj1.setNum(9);
   

    cout << "num = " << innerObj1.getSum(5) << endl; 

   return 0;
}