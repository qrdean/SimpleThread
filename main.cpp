#include <iostream>
#include <thread>
using namespace std;
void Sleep(int x);

int main()
{
    for(int agent=0; agent < 5; agent++)
    {

        for(int ticket=0; ticket <10; ticket++)
        {

            Sleep(1);
        }
        cout << "Agent " << agent+1 << " Finished" << endl;


    }
    return 0;
}
void Sleep(int x)

{
   std::this_thread::sleep_for(std::chrono::seconds(x));

}
