#include<iostream>
using namespace std;

float taxCalculator(char type, float price);
main()
{
    char type;
    float price;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    taxCalculator(type, price);
}
float taxCalculator(char type, float price)
{
    float finalprice;

     if(type == 'M'){
     finalprice=(price+price*6/100);
    
    
     cout<<"The final price of a vehicle of type"<<type<<" after adding the tax is $"<<finalprice<<".";
     }
if(type == 'E'){
  finalprice=(price+price*8/100);
 
     cout<<"The final price of a vehicle of type"<<type<<" after adding the tax is $"<<finalprice<<".";
     }
if(type == 'S'){
       finalprice=(price+price*10/100);
     cout<<"The final price of a vehicle of type"<<type<<" after adding the tax is $"<<finalprice<<".";
     }
if(type == 'V'){
       finalprice=(price+price*12/100);
     cout<<"The final price of a vehicle of type"<<type<<" after adding the tax is $"<<finalprice<<".";
     }
if(type == 'T'){
      finalprice=(price+price*15/100);
     cout<<"The final price of a vehicle of type"<<type<<" after adding the tax is $"<<finalprice<<".";
     }
 }
   
