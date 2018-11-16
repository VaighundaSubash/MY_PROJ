#include<iostream>
#include<conio.h>

using namespace std;

class Birds
{
public:
	Birds() {

	}
	virtual void sound()
	{
		cout << "From birds sound!!" << endl;
	}
};

class Hen : public Birds
{
public:
	void sound()
	{
		cout << "Cluck...Cluck...!!!" << endl;
	}
};

class Cock : public Birds
{
public:
	void sound()
	{
		cout << "Cock a doodle dooo.....!!!!!" << endl;
	}
};

void SoundTest(Birds *bi[], int size)
{
	for (int i = 0; i < size; i++) {
		bi[i]->sound();
	}
}

int main()
{
	cout << "Hello World!"<<endl;

	///////////////////////
	int i = 0, count = 0;

	while (2 > count) {
		cout << "i = " << i << endl;
		i--;
		count++;
	}
	///////////////////////

	///////////////////////
	Birds** p = new Birds*[2];
	for (int i = 0; i < 2; i++) {
		if (i == 0)
			p[i] = new Hen();
		else
			p[i] = new Cock();
	}
	SoundTest(p, 2);

	for (int i = 0; i < 2; i++) {
		delete p[i];
	}
	delete[] p;
	///////////////////////

	_getch();
	return 0;
}