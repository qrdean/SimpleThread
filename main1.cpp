//Quinton Dean
//Lab-9 SleepThread

/* This lab uses the thread library in C++
*/

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
void Sleep(int x);
void f(int agent);
mutex lock1;
int main()
{
    thread t[5];
    int agent;
    t[0]=thread (f,0);
    t[1]=thread (f,1);
    t[2]=thread (f,2);
    t[3]=thread (f,3);
    t[4]=thread (f,4);
    for(int y=0; y<5; y++)
    {
        t[y].join();
    }
    return 0;
}
void Sleep(int x)

{
   std::this_thread::sleep_for(std::chrono::seconds(x));

}
void f(int agent)

{
        for(int ticket=0; ticket <10; ticket++)
        {
            Sleep(1);
        }
        lock1.lock();
        cout << "Agent " << agent+1 << " Finished" << endl;
        lock1.unlock();
}
