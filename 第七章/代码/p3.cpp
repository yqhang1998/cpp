#include <iostream>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void set_box(box *p_b);
void show(box b);

int main(void)
{
	box b = {"cube", 3, 4, 5};

	set_box(&b);
	show(b);

	return 0;
}

void set_box(box *p_b)
{
	p_b->volume = p_b->height * p_b->width * p_b->length;
}

void show(box b)
{
	cout << "maker: " << b.maker << endl;
	cout << "height: " << b.height << endl;
	cout << "width: " << b.width << endl;
	cout << "length: " << b.length << endl;
	cout << "volume: " << b.volume << endl;
}
