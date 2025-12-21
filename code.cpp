#include<bits/stdc++.h>
using namespace std;
struct smc{
    string name;
    int sem;
    int uid;
    string dep;
    float marks;
};
int main(){
    vector<smc>student;
    int n;
cout<<"enter number of students: ";
cin>>n;
for(int i=0;i<n;i++){
    smc s;
    cout<<"enter name of student: ";
    cin>>s.name;
    cout<<"enter sem: ";
    cin>>s.sem;
    cout<<"enter UID: ";
    cin>>s.uid;
    cout<<"enter department: ";
    cin>>s.dep;
    cout<<"enter marks: ";
    cin>>s.marks;
    student.push_back(s);
}
cout<<"   ---STUDENT DETAILS---   "<<'\n';
for(auto& s:student){
    cout<<"Name: "<<s.name<<'\n';
    cout<<"Sem: "<<s.sem<<'\n';
    cout<<"Uid: "<<s.uid<<'\n';
    cout<<"Dep: "<<s.dep<<'\n';
    cout<<"Marks: "<<s.marks<<'\n';
}
}