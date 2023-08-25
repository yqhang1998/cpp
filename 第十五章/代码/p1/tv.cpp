#include "tv.h"

bool Tv::volup()
{
	if(volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
		return false;
}

bool Tv::voldown()
{
	if(volume > MinVal)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup()
{
	if(channel < MaxChan)
		channel++;
	else
		channel = MinChan;
}

void Tv::chandown()
{
	if(channel > MinChan)
		channel--;
	else
		channel = MaxChan;
}

void Tv::show_settings() const
{
	cout << "TV is " << (state == off ? "off" : "on") << endl;
	if(state == on)
	{
		cout << "Volume = " << volume << endl;
		cout << "Channel = " << channel << endl;
		cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
	}
}

void Tv::set_remote_mode(Remote &r)
{
	if(state == on)
		r.set_remote_mode();	
}














