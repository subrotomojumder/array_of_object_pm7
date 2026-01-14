#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};
// int cmp(Student l, Student r)
// {
//     if (l.marks > r.marks)
//     {
//         return true;
//     }
//     else if (l.marks < r.marks)
//     {
//         return true;
//     }
//     else
//     {
//         return l.roll < r.roll;
//         // if (l.roll < r.roll)
//         // {
//         //     return true;
//         // }
//         // else
//         // {
//         //     return false;
//         // }
//     }
// };
int cmp(Student l, Student r)
{
    // if (l.marks == r.marks)
    // {
    //     return l.roll < r.roll;
    // }
    // else
    // {
    //     return l.marks > r.marks;
    // }
    return (l.marks == r.marks) ? (l.roll < r.roll) : (l.marks > r.marks);
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    return 0;
}