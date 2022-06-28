#include<iostream>
using namespace std;

class human{
    public :
    void speak() {
        cout <<"speaking";
    }

};

class dog{
    public :
    void speak(int x){
        cout <<"Barking";
    }
};


class hybrid : public human , public dog {
    

};





int main() {
    
    hybrid h1 ;

    h1.speak(10);

    return  0;
}