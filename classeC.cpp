#include <iostream>

using namespace std;

class C{
    private:
        int C1;
        float C2;
    
    public:
        C(){
            C1 = 0;
            C2 = 0;    
        }

        int getC1(){
            return C1;
        }   
        void setC1(int C1){
            this.C1 = C1;
        }  
        float getC2(){
            return C2;
        }
        void setC2(int C2){
            this.C2 = C2;
        }  

        void MC1(){
            cout<<"MC1"<<endl;
        }
        void MC2(){
            cout<<"MC2"<<endl;
        }
}

int main(){
}
