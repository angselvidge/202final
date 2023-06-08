/*
File: main.ccp + mountain.h
description:
Write a program that will include the following:
A class that will store mountain details which will included the following:

Member for the name, (make it private for java or c++)
Member for the country, (make it private for java or c++)
Member for the elevation, (make it private for java or c++)
Setters and getters for all the data members. (Make them public for java or c++)

A member function call toMeters that will take the elevation and convert the value from feet to meters and return the converted value.  The relationship for feet to meters is 1 meter per 3.2808 feet

In the main function of the Main class(for java, main function for c++ and  a main function for python with the __name__=="__main__" structure) , create 7 instances of Mountain objects and put the mountain data from the table above.
Put the mountain objects in an appropriate data structure for the language that you are writing this for.
Write a method called minElevation in the (Main class for java, main module for python, or the file that has main for c++) that will return the minimum elevation.
Iterate over the data structure that contains the Mountain objects and print out the Mountain details similar to the table above, with the addition of the elevation in feet and in meters.
Programmatically print out the elevation and name of the shortest mountain (do not hard code this)

Created: Monday June 5th 2023
Author: Angela Selvidge
Mail: angelag8562@student.vvc.edu

*/

#include<iostream>
#include"mountain.h"
#include<iomanip>
#include<climits>

using namespace std;
int minElevation(Mountain mnt[],int x){ // min elevation to return elevation
int min=INT_MAX; // max height for given mnt
int i;
for (i=0;i<7;++i){ // 7mnt in total, dont use min
    if(mnt[i].get_elevation() < min)
        min = mnt[i].get_elevation(); //
}
return min;
}

int main(){
Mountain mnt[7]; // setters and getters # 1, use the already given info on docs, keep mnt in order
mnt[0].setter("Chimborazo","Ecuador",20549);
mnt[1].setter("Matterhorn","Switzerland",14692);
mnt[2].setter("Olympus","Greece",9573);
mnt[3].setter("Everest","Nepal",29029);
mnt[4].setter("Mount Marcy Adirondacks","United States",5344);
mnt[5].setter("Mount Mitchell Blue Ridge","United States",6684);
mnt[6].setter("Zugspitze","Switzerland",9719);

cout<<setw(30)<<"Mountain"<<setw(20)<<" Country "<<setw(30)<<" Elevation "<<endl;

for (int i=0;i<7;i++){ 
    // print out all 7 mountain ranges with ft and mt
    cout<<setw(30)<<mnt[i].get_name()<<" "<<setw(20)<<mnt[i].get_country()
    <<" "<<setw(20)<<mnt[i].get_elevation()<<" ft "<<mnt[i].toMeters()
    <<" mt"<<endl;
}
int min = minElevation(mnt,7);// min elevation # 4
int i;
for(i=0;i<7;i++){ // shortest/ lowest mountain elevation
    if(min == mnt[i].get_elevation()){
        cout<<"Lowest elevation Mountain: "<<mnt[i].get_name()<<": "
        <<mnt[i].get_elevation()<<endl;
            break;
}
}

return 0;

}