#include <iostream>
using namespace std;
class time
{
      private:
      int hours, minutes;

      public:
      void input()
      {
            cin>>hours>>minutes;
      }
      void display()
      {
            cout<<hours<<"hours "<<minutes<<"minutes";
      }
      void sum(time t1, time t2)
      {
            minutes=t1.minutes + t2.minutes;
            hours=minutes/60;
            minutes=minutes%60;
            hours=hours+t1.hours+t2.hours;
      }
};
int main()
{
      time t1,t2,t3;
      t1.input();
      t2.input();
      t3.sum(t1,t2);
      t3.display();

      return 0;
}