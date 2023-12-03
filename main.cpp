#include "day1.hpp"

using namespace std;

int main()
{
  int sum = 0;
  cout << "file name: input.txt" << endl;
  sum = sumPerLine("input.txt");
  cout << "Sum per line: " << sum << endl;
}