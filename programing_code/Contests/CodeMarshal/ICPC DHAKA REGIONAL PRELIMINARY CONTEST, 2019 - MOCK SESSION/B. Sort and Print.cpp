#include<bits/stdc++.h>
#include<string>
using namespace std;

struct Student
{
    int Roll;
    string name;
    int marks;
};
bool compareTwoStudents(Student a, Student b)
{

    if (a.marks != b.marks )
        return a.marks > b.marks;


    if (a.marks == b.marks)
        return a.Roll < b.Roll;

}
void computeRanks(Student a[],int n)
{
    sort(a,a+n, compareTwoStudents);
}

int main(void)
{
    int n,i,j,s;
    cin >> n;
    Student a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i].Roll;
        cin >> a[i].name;
        cin >> a[i].marks;
    }
    computeRanks(a,n);
    cout<< "Roll | Name       | Marks" << endl;
    cout<< "-------------------------"<<endl;
    for(i=0; i<n; i++)
    {
        if(a[i].Roll < 10) {
            cout<< "   ";
        }
        else if(a[i].Roll < 100) {
            cout<< "  ";
        }
        cout<< a[i].Roll << " | " << a[i].name;
        // eijagay "a[i].name" edar size koto seta = s lekte hobe

        for(j=1; j<=s; j++) {
            cout<< " ";
        }
        cout << "| " << a[i].marks << endl;
    }
    return 0;
}
