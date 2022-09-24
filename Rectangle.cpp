#include <iostream>
class Rectangle
{
public:
	Rectangle() {}
	explicit Rectangle(float i) : l(i), b(i)
	{

    }
	Rectangle(float a, float b) :l(a), b(b)
	{

	}
	void Calculate() { std::cout << l * b<<std::endl; }


private:
	float l {0},
		   b {0};

};
int main()
{
    float i,a,b;
      printf("Enter the length for rectangle with 1 parameter: ");
      scanf("%f",&i);
      printf("Enter the length for rectangle with 2 parameters: ");
      scanf("%f",&a);
      printf("Enter the length for rectangle with 2 parameters: ");
      scanf("%f",&b);

	Rectangle s1;
	Rectangle s2{ i };

	Rectangle s3{ a,b };
	s1.Calculate();
	s2.Calculate();
	s3.Calculate();
	return 0;
}
