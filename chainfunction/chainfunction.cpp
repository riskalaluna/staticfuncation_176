#include <iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this;	//chain function
	}
	string getjudul()
	{
		return this->judul;
	}

} bukunya;

int main()
{
	// bukunya.setJudul("Matamatika");
	// cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getjudul();	//chain function calls
	return 0;
}