#include<iostream>
using namespace std;
class painting{
string title,name;
int value;
public:
painting(){
value=400;
}
void scan(string title,string name){
this->title=title;
this->name=name;
}
void sc_val(int v){
if(v!=0){
this->value=v;
}
}
void display(){

cout<<"Title  :"<<title<<endl;
cout<<"Artist :"<<name<<endl;
cout<<"Value  :"<<value<<endl<<endl;
}
string get_name(){
return name;
}

};

class famouspainting: public painting{
public:
void check(){
string fam=get_name();
if(fam=="Degas" || fam=="Monet" || fam=="Picasso" || fam=="Rembrandt"){
int val=25000;
sc_val(val);
}
}

};


int main(){
famouspainting fp[10];
string a,b;
for(int i=0;i<10;i++){
cout<<"Enter the name of the artist:";
cin>>a;
cout<<"Enter the title of the painting:";
cin>>b;
fp[i].scan(b,a);
fp[i].check();
}
for(int i=0;i<10;i++){
fp[i].display();
}

return 0;
}