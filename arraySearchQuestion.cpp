/*
W15664768
Midterm Arrary Search Question:
n the array received form the user,
find the smallest and the largest number and print it out.
*/
# include <iostream>
using namespace std;

void arrayBuild();
int lowly(int arr[],int s);

int main()
{
  arrayBuild();
  return 0;
}

void arrayBuild()
{
  int s,f, lowest;
  cout << "Array Size: ";
  cin >> s;
  int user[s];
  for (int h = 0; h < s; h++)
  {
    cout << "Whole number: ";
    cin >> f;
    user[h] = f;
  }
  int low = lowly(user,s);
}

int lowly(int arr[], int size)
{
  int lowest;
  cout << "Array: ";
  for (int d = 0; d < size;d++)
  {
    cout << arr[d] << " " ;
    for (int a = 1; a < d; a++)
      if (arr[a] < arr[d])
        lowest = arr[a];
   
  }
  //lowest = arr[0];
  cout << endl << "Lowest: " << lowest;
  return lowest;
}