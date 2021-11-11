#include<iostream>
using namespace std;
class Salary
{
  public:
      int pac;
      int mont;
      void calcSal()
      {
          cout<<"Enter the package provided by the company:";
          cin>>pac;
          mont=pac/12;
          cout<<"\namount given by the company to you in a month is:"<<mont;
      }
};
class ActMont:public Salary
{
 public:
     void actMont()
     {
         int n,c=0;
         int sal;
         int k=0;
         cout<<"\nEnter the number of days in a particular month:";
         cin>>n;
         char arr[100];
         for(int i=1;i<=n;i++)
         {
            cout<<"\nEnter the presence status of an employee in a particular day:";
            cin>>arr[i];
             if(arr[i]=='p' || arr[i]=='h') //here p represent present and h represent public holidays
             {
                 c+=1;
             }
             else if(arr[i]=='a') //here a represent absent
             {
                 k+=1;
             }
         }
         cout<<"\nNumber of days in a month in which you was absent is:"<<k;
         cout<<"\nNumber of days in a month for which your income will be generated is:"<<c;
         sal=c*(mont/n);
         cout<<"\nYour total monthly income which will be generated is:"<<sal;
     }
};
int main()
{
    ActMont obj;
    obj.calcSal();
    obj.actMont();
    return 0;
}
