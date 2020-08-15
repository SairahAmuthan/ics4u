#include <iostream>
#include <string>
using namespace std;

class cake{
public:
  string type;
  
  float price_per_pound, weight;
  float cost();
  float tax();
  
  
};

float cake::cost(){
    return (price_per_pound*weight);
   
  }
  
float cake::tax(){
   return ((price_per_pound*weight)*0.13);
}
  
int main() {
  cake chocolate, vanilla;
  
  cout<<"Enter the cake type"<<endl;
  cin>>chocolate.type;
  cout<<endl;
  
  cout<<"Enter the cake price-per-pound"<<endl;
  cin>>chocolate.price_per_pound;
  cout<<endl;
  
  cout<<"Enter the cake weight"<<endl;
  cin>>chocolate.weight;
  cout<<endl;
  
  cout<<"Enter the cake type"<<endl;
  cin>>vanilla.type;
  cout<<endl;
  
  cout<<"Enter the cake price-per-pound"<<endl;
  cin>>vanilla.price_per_pound;
  cout<<endl;
  
  cout<<"Enter the cake weight"<<endl;
  cin>>vanilla.weight;
  cout<<endl;
  
  cout<<"The price per pound is $"<<chocolate.price_per_pound<<endl;
  cout<<"The weight is "<<chocolate.weight<<" pounds"<<endl;
  cout<<"The "<<chocolate.type<<" cake costs $"<<chocolate.cost()<<endl;
  cout<<"The tax will be an additional $"<<chocolate.tax()<<endl;
  cout<<endl;
  
  cout<<"The price per pound is $"<<vanilla.price_per_pound<<endl;
  cout<<"The weight is "<<vanilla.weight<<" pounds"<<endl;
  cout<<"The "<<vanilla.type<<" cake costs "<<vanilla.cost()<<endl;
  cout<<"The tax will be an additional $"<<vanilla.tax()<<endl;
  
  return 0;
}

