#include <iostream>
#include <ctime>

using namespace std;

int main() {

  time_t currentTime;
  time_t refCurrentTime;

  currentTime = time(NULL);
  time(&refCurrentTime);
  string timeStr = ctime(&currentTime);

  cout << "\ncurrent time = " << currentTime << endl;
  cout << "\ncurrent time pointer = " << refCurrentTime << endl;
  cout << "\ncurrent date time = " << timeStr << endl;

  return 0;
}
