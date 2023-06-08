#include<iostream>
using namespace std;

class Mountain{
private:
string name;
string country;
int elevation;

public:
void setter(string name,string country,int elevation){ //public setter #1docs
this->name=name;
this->country=country;
this->elevation=elevation;
}

//create strings for country and name, while elevation gets int 

string get_name(){
return this->name;
}

string get_country(){
return this->country;
}
int get_elevation(){
return this->elevation;
}

/* toMeters use float with equation given in step 1 in google docs
use elevation / ####
*/
float toMeters(){
return this->elevation/3.2808;
}

};