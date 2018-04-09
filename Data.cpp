#include<cstring>
#include<sstream>
using namespace std;
class Data
{

private:
	int rok;
	int miesiac;
	int dzien;
public:
	Data(int year, int month, int day)
	{
		rok = year;
		miesiac = month;
		dzien = day;
	}

	string pokazDate(int rok, int miesiac, int dzien)
	{
		stringstream ss;
		ss << dzien << "/" << miesiac << "/" << rok;
		return ss.str();
	}
};
