#include <iostream>
#include "sales.h"

using namespace std;

int main(void)
{
	double vals1[12] = {1100, 1110, 1120, 1130, 1140, 1150, 1160, 1170, 1180, 1190, 1200, 1210};
	double vals2[12] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};

	Sales sales1(2011, vals1, 12);
	LabeledSales sales2("ABC", 2012, vals2, 12);

	try
	{
		//show sales1
		cout << "Year = " << sales1.Year() << endl;
		for(int i = 0; i < 12; i++)
		{
			cout << sales1[i] << ' ';
			if(i % 6 == 5)
				cout << endl; 
		}

		//show sales2
		cout << "Year = " << sales2.Year() << endl;
		cout << "Label = " << sales2.Label() << endl;
		for(int i = 0; i <= 12; i++)
		{
			cout << sales2[i] << ' ';
			if(i % 6 == 5)
				cout << endl;
		}
	}
	catch(Sales::bad_index &bad)
	{
		if(typeid(LabeledSales::nbad_index) == typeid(bad))
		{
			LabeledSales::nbad_index *p = dynamic_cast<LabeledSales::nbad_index *>(&bad);
			cout << bad.what();
			cout << "Company: " << p->label_val() << endl;
			cout << "bad index: " << p->bi_val() << endl;
		}
		if(typeid(Sales::bad_index) == typeid(bad))
		{
			cout << bad.what();
			cout << "bad index: " << bad.bi_val() << endl;
		}
	}

	cout << "----------------------------" << endl;
	try
	{
		sales2[2] = 40;
		sales1[20] = 3333;
	}
	catch(Sales::bad_index &bad)
	{
		if(typeid(LabeledSales::nbad_index) == typeid(bad))
		{
			LabeledSales::nbad_index *p = dynamic_cast<LabeledSales::nbad_index *>(&bad);
			cout << bad.what();
			cout << "Company: " << p->label_val() << endl;
			cout << "bad index: " << p->bi_val() << endl;
		}
		if(typeid(Sales::bad_index) == typeid(bad))
		{
			cout << bad.what();
			cout << "bad index: " << bad.bi_val() << endl;
		}
	}

	return 0;
}
