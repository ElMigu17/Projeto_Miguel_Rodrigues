#include <iostream>

using namespace std;

class D{
    private:
        int D1;
        float D2;
    
    public:
        D(){
            D1 = 0;
            D2 = 0;    
        }

        int getD1(){
            return D1;
        }   
        void setD1(int D1){
            this.D1 = D1;
        }  
        float getD2(){
            return D2;
        }
        void setD2(int D2){
            this.D2 = D2;
        }  

        void MD1(){
            cout<<"MD1"<<endl;
        }
        void MD2(){
            cout<<"MD2"<<endl;
        }
        void MD3(){
            cout<<"MD3"<<endl;
        }
}

int main(){
}
