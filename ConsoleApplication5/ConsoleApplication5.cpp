#include <iostream>
using namespace std;

class CarFactory {
private:
    CarFactory(){}
    static int counter;
    static void Create();
    static void Count();
   
};
void CarFactory::Create() {

}
void CarFactory::Count() {
    CarFactory::counter = 0;
}




int main()
{
  
}

