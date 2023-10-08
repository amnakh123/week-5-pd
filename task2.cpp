#include<iostream>
using namespace std;

float pyramidVolume(int length, int width, int height, string desiredunit);
main()
{
    string desiredunit;
   int length, width, height;
   
   cout<<"Enter the length of the pyramid (in meters): ";
   cin>>length;
   cout<<"Enter the width of the pyramid (in meters): ";
   cin>>width;
   cout<<"Enter the height of the pyramid (in meters): ";
   cin>>height;
   cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
   cin>>desiredunit;
   float result;
     result= pyramidVolume(length, width, height, desiredunit);
  if(desiredunit == "meters"){
     cout<<"The volume of the pyramid is: "<<result<<" cubic meters";
     
     }
  if(desiredunit == "centimeters"){
     cout<<"The volume of the pyramid is: "<<result<<" cubic centimeters";
     }
 if(desiredunit == "millimeters"){
     cout<<"The volume of the pyramid is: "<<result<<" cubic millimeters";
     }
 if(desiredunit == "kilometers"){
     cout<<"The volume of the pyramid is: "<<result<<" cubic kilometers";
     }
  
}
float pyramidVolume(int length, int width, int height, string desiredunit)
{
 
   
   float volume=(height*width*length)/3;
   float v2=volume*100;
   float v3=volume*1000;
   float v4=volume/1000;
   if(desiredunit == "meters"){
     return volume;
     }
  if(desiredunit == "centimeters"){
     return v2;
     }
 if(desiredunit == "millimeters"){
     return v3;
     }
 if(desiredunit == "kilometers"){
     return v4;
     }
}
    
      
    
    
   