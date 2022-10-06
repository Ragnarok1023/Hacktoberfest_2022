#include <iostream>
#include <queue>
using namespace std;
int main()
{
 queue<string> s;
//  FIFO
 s.push("Hi");
 s.push("welcome to queue");
 s.push("cpp");
 cout << "Size: " << s.size() << endl;
 cout << "Top element: "<<s.front() << endl;
 s.pop();
 cout << "Size after pop: " << s.size() << endl;
 cout << "Top element: "<<s.front();
return 0;
}
