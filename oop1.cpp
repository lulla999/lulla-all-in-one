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
    cout<<"Enter the name of pharmaceutical company: ";
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
            cin.ignore();
            cout<<"Is the employee "<<j+1<<" in "<<i+1<<" department a department head? (Y for yes, N for no): ";
            char head;
            cin>>head;
            p.depart[i].emp[j].isHead = (head == 'Y' || head == 'y');
                        p.depart[i].emp[j].isHead = (head == 'N' || head == 'n');

            cin.ignore(); 
        }
    }
    cout<<"\nPharmaceutical Company: "<<p.pname<<endl;
    cout<<"\n========================================\n";
    for(int i=0;i<3;i++)
    {
        cout<<"\n========================================\n";
        cout<<"\nDepartment "<<i+1<<": "<<p.depart[i].dname<<"\nHead: "<<p.depart[i].dhead<<endl;
        cout<<"\n----------------------------------------\n";
        for(int j=0;j<5;j++)
        {
            cout<<"\nEmployee "<<j+1<<": "<<p.depart[i].emp[j].name<<"\nSalary: "<<p.depart[i].emp[j].salary<<"\nDepartment Head: "<<(p.depart[i].emp[j].isHead ? "Yes" : "No")<<endl;
        }
    }
    return 0;
}