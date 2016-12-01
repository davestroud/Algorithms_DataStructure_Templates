#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int calcHashCode(string key);
void insertHash(int hashCode, string item);
void displayTable();

const int TABLE_SIZE = 2048;

string hashTable[TABLE_SIZE]; // size declarator for string array

int main(int argc, char **argv) // why the two **'s
{
  string data[] = {
      "Bones", "Scotty", "Chekov", "Uhura", "Sulu", "Nurse Chapel",
      "Dax", "O'Brien", "Quark", "Dr. Bashier", "Kira", "B'Elanna",
      "Picard", "Riker", "Data", "La Forge", "Worf", "Dr. Crusher",
      "Reed", "Travis", "Hoshi", "Dr. Phlox", "Kirk", "Spock",
      "Dr. Pulaski", "Wesley", "Troi", "Tasha", "Sisko", "Odo"
  };

  const int numberOfDataItems = 30;
  int hash = 0;

  for (int i = 0; i < numberOfDataItems; i++)
  {
    hash = calcHashCode(data[i]);
    cout << data[i] << " hashCode = " << hash << endl;
    insertHash(hash, data[i]);
  }

  displayTable();

  cout <<"\n** Press any key to continue **\n";
  getchar();

  return 0;
}

int calcHashCode(string key)
{
  return 0;
}

void insertHash(int hashCode, string item)
{
  return;
}


void displayTable()
{
  cout << "\nHash Table:" << endl;
  cout << "Index\tKey"  << endl;

  for (int i = 0; i < TABLE_SIZE; i++)
  {
    if (hashTable[i].length() > 0)
    {
      cout << i << "\t" << hashTable[i] << endl;
    }
  }
  return;
}
