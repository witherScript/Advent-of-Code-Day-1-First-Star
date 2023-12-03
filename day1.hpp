#include<iostream>
#include <fstream>
#include <string>
#include<ctype.h>

std::string getFirstLastNumOfLine(std::string line)
{
  bool found = false;
  std::string curr;
  std::string final = "none";
  std::string result;
  for (int i = 0; i < line.size(); i++)
  {
    curr = line[i];
    if(isdigit(line[i]))
    {
      if (found == false)
      {
        found = true;
        result = result.append(curr);
      }
      else{
        final = curr;
      }   
    }
  }
  if(final == "none")
  {
    result = result.append(result);
  }
  else 
  {
    result = result.append(final);
  }
  return result;
}

int sumPerLine(std::string fileName)
{
  std::string line;
  std::ifstream elvenWordTextFile;

  int resultSum=0;
  std::string currStrToAddAsInt;

  elvenWordTextFile.open(fileName);
  while (std::getline(elvenWordTextFile, line))
  {
    currStrToAddAsInt = getFirstLastNumOfLine(line);
    resultSum += std::stoi(currStrToAddAsInt);
  }
  elvenWordTextFile.close();
  return resultSum;
}