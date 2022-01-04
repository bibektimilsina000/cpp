//creating a example of class and object 
#include<iostream>
#include<vector>


using namespace std;


class house
{private:
int length ,breath;
public:
void data (int x ,int y){


    length=x;
    breath=y;
}void area (){

    int area;
    area=length*breath;
    cout<<"the area of house is "<< area<<endl;
}

};

int main(){

house h1,h2;
h1.data(60,50);
h1.area();


h2.data(2,3);
h2.area();

return 0;
}
