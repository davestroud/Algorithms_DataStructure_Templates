#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int calcHashCode(string key);
void insertHash(int hashCode, string item);
void displayTable();

const int TABLE_SIZE = 2048;

int calcHashCode(string key)
{
  // TODO: Use a loop to add together the ASCII value of
  // each character in the given string s.
  //
  // HINT: You can get the length of the string by calling the
  // function key.size() or key.length().

  return 0;
}

void insertHash(int hashCode, string item)
{
  // TODO: Implement the details of this function.
  // This function should insert items in the hashTable
  // at the hashCode position. Print an error message
  // if the position is occupied and do not insert
  // the string into the hash table.
  //
  // HINT: the hashTable variable is an array. The
  // position in the hashTable is occupied if the size()
  // or length() of the position is greater than 0.

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
