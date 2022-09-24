#include <iostream>
class Rectangle
{
public:
	Rectangle() {}
	explicit Rectangle(float i) : l(i), b(i)
	{

    }
	Rectangle(float s, float e) :l(s), b(e)
	{

	}
	void Calculate() { std::cout << l * b<<std::endl; }


private:
	float l {0},
		   b {0};

};
int main()
{
    float i,s,e;
      printf("Enter the length for rectangle with 1 parameter: ");
      scanf("%f",&i);
      printf("Enter the length for rectangle with 2 parameters: ");
      scanf("%f",&s);
      printf("Enter the breadth for rectangle with 2 parameters: ");
      scanf("%f",&e);

	Rectangle l1;
	Rectangle l2{ i };

	Rectangle l3{ s,e };
	l1.Calculate();
	l2.Calculate();
	l3.Calculate();
	return 0;
}
