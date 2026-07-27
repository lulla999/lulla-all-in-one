#include<iostream>
using namespace std;
struct employee{
    char name[50];
    float salary;
    bool isHead;
};
struct department{
    char dname[50];
       char dhead[50];
    struct employee emp[5];
};
struct pharmacy{
    char pname[50];
    struct department depart[3];
};
int main(){
    struct pharmacy p;
    cout<<"Enter the name of the pharmaceutical company: ";
    cin.getline(p.pname,50);
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the name of department : "<<i+1<<": ";
        cin.getline(p.depart[i].dname,50);
        cout<<"Enter the head of department "<<i+1<<": ";
        cin.getline(p.depart[i].dhead,50);
        for(int j=0;j<5;j++)
        {
            cout<<"Enter the name of employee "<<j+1<<" in department "<<i+1<<": ";
            cin.getline(p.depart[i].emp[j].name,50);
            cout<<"Enter the salary of employee "<<j+1<<" in department "<<i+1<<": ";
            cin>>p.depart[i].emp[j].salary;
            cout<<"Is employee "<<j+1<<" in  "<<i+1<<" department a department head? (1 for yes, 0 for no): ";
            cin>>p.depart[i].emp[j].isHead;
            cin.ignore(); 
        }
    }
    cout<<"\nDepartment Heads:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(p.depart[i].emp[j].isHead)
            {
                cout<<"Department: "<<p.depart[i].dname<<", Head: "<<p.depart[i].emp[j].name<<endl;
            }
        }
    }
    return 0;
}
