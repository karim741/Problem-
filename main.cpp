#include <iostream>

using namespace std;

int main()
{
    float x,y,z=1;
    cout<<"                        (:  AHLAN YA USER YA HABIBI  :)"<<endl;
    cout<<"                                                       "<<endl;
    while(z==1){
    cout<<"Enter The Start Temperature :";
    cin>>x;
    cout<<"Enter The End Temperature :";
    cin>>y;

        if(x<=y){
    for (float i=x; i<=y; i++){

    cout<<"At "<<i<<" Degrees Celsius The Velocity of Sound is :";
    cout<<331.3 + i*0.61<<endl;
    }
        }

        if(y<x){
            for (float j=x; j>=y; j--){

    cout<<"At "<<j<<" Degrees Celsius The Velocity of Sound is :";
    cout<<331.3 + j*0.61<<endl;
    }
        }

    cout<<"Press 1 to Continue or Any Key to Leave :";
    cin>>z;

    }
    return 0;
}
