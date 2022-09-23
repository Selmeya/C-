#include <iostream>
using namespace std;
class Fruit
{
public:
  static int FruitCounter;
  Fruit()
  {
    FruitCounter++;
  }
  ~Fruit()
  {
   FruitCounter--;
  }
};
class Apples: public Fruit
{
public:
  static int ApplesCounter;
  Apples():Fruit()
  {
    ApplesCounter++;
  }
  ~Apples()
  {
    ApplesCounter--;
  }
};
class Mangoes: public Fruit
{
public:
  static int MangoesCounter;
  Mangoes():Fruit()
  {
    MangoesCounter++;
  }
  ~Mangoes()
  {
    MangoesCounter--;
  }
};
int Fruit::FruitCounter = 0;
int Apples::ApplesCounter = 0;
int Mangoes::MangoesCounter = 0;
int main()
{
  Apples firstApple,secondApple,thirdApple;
  Mangoes firstMango,secondMango,thirdMango,fourthMango;
  cout << "Total number of fruits: " << Fruit::FruitCounter << endl;
  cout << "Number of apples: " << Apples::ApplesCounter << endl;
  cout << "Number of mangoes: " << Mangoes::MangoesCounter << endl;
  return 0;
}

