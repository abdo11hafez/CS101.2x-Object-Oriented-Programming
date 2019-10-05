#include<iostream>

using namespace std;

struct  student {
    string name;
    int age;
    float marks;
};
student *initiateStudent(string name, int age, float marks);
student* highestScorer(student **stud,int totalStudents);
int main ( )
{
    int totalStudents = 1;
    string name;
    int age;
    float marks;

    cin >> totalStudents;
    student *stud[totalStudents];

    for( int i = 0; i < totalStudents; i++ )
        {
            cin >> name >> age >> marks;
            stud[i] = initiateStudent(name,age,marks);
        }
    for( int i = 0; i < totalStudents; i++ )
        {
            cout<<stud[i]->name<<", "<<stud[i]->age<<", "<<stud[i]->marks<<endl;

        }

    student *topper = highestScorer(stud,totalStudents);

    cout << topper->name << " is the topper with " << topper->marks << " marks" << endl;

    return 0;

}

student *initiateStudent(string name, int age, float marks)
{
    //Write your solution code below this lin
    student *X = new student;
    X->name = name;
    X->age = age;
    X->marks = marks;

    return X;
}


student* highestScorer(student **stud,int totalStudents)
{
    //Write your solution code below this line
    student * top= *stud ;
    int i;

    for(i=1;i<totalStudents;i++)
    {
        if((top->marks)>=((*(stud+i))->marks)) {  }
        else top =stud[i];
    }

    return top;
}

