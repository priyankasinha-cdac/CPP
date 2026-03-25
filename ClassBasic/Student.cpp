#include<iostream>
using namespace std;

class Student{
    private:
        int rollno;
        char name[25];
        int marks[3];
        int totalMarks;
        float avgMarks;
    
    public:
        void acceptStudentData();
        void calculateTotalAvgMarks();
        void displayStudentData();
};

void Student::acceptStudentData() {
//definition
cin>>rollno;
cin>>name;
for(int i=0; i<3; i++){
    cin>>marks[i];
}
}

void Student::calculateTotalAvgMarks() {
//definition
totalMarks = 0;
for(int i=0; i<3; i++){
    totalMarks += marks[i];
}
avgMarks = totalMarks/3.0;
}

void Student::displayStudentData() {
//definition
cout<<"Roll No: "<<rollno<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Marks: ";
for(int i=0; i<3; i++){
    cout<<marks[i]<<" ";
}
cout<<endl;
cout<<"Total Marks: "<<totalMarks<<endl;
cout<<"Average Marks: "<<avgMarks<<endl;
}

int main(){
    Student s[10];
    for(int i=0; i<10; i++){
        s[i].acceptStudentData();
        s[i].calculateTotalAvgMarks();  
        s[i].displayStudentData();
    }
    return 0;
}
    