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
    int n;
cout<<"enter number of students: ";
cin>>n;
struct smc s[n];
for(int i=0;i<n;i++){
    cout<<"enter name of student: ";
    cin>>s[i].name;
    cout<<"enter sem: ";
    cin>>s[i].sem;
    cout<<"enter UID: ";
    cin>>s[i].uid;
    cout<<"enter department: ";
    cin>>s[i].dep;
    cout<<"enter marks: ";
    cin>>s[i].marks;
}
cout<<"   ---STUDENT DETAILS---   "<<'\n';
for(int i=0;i<n;i++){
    cout<<"student "<<i<<":";
    cout<<"name: "<<s[i].name<<'\n';
    cout<<"sem: "<<s[i].sem<<'\n';
    cout<<"UID: "<<s[i].uid<<'\n';
    cout<<"department: "<<s[i].dep<<'\n';
    cout<<"MARKS obtained: "<<s[i].marks<<'\n';
}
}