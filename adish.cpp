#include<iostream>
#include<string>
using namespace std;
class Student{
    int rollno;
    string name;
    public:
    void setdata(int rn, string nm){
        rollno = rn;
        name = nm;
    }
    void getdata(){
        cout<<name<<endl;
        cout<<rollno;
    }
};
int main(){
    Student s1,s2;
    s1.setdata(100,"saurav");
    s1.getdata();
    return 0;
}
