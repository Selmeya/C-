#include <iostream>


using namespace std;
class Mammals{
	public:
		void a1() {
			cout << "I am mammal" << endl;
		}
};
class MarineAnimals {
	public:
		void a2() {
			cout << "I am a marine animal" << endl;
		}
};
class BlueWhale : public Mammals, public MarineAnimals {
	public:
		void a3() {
			cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
		}
};


int main()
{
	Mammals se;
	MarineAnimals lm;
	BlueWhale iy;

	se.a1();
	lm.a2();
	iy.a3();
	iy.a1();
	iy.a2();
	return 0;
}

