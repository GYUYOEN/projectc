#include <iostream>
using namespace std;

enum COM_POS {
	CLERK, SENIOR, ASSIST, MANAGER
};

class NameCard
{
private:
	string name;
	string company;
	string phone;
	int position;
public:
	NameCard(string nm, string cp, string ph, int ps)
		: name(nm), company(cp), phone(ph), position(ps) {};
	void ShowNameCardInfo()
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << phone << endl;
		cout << "직급: ";
		switch (position)
		{
		case 0:
			cout << "사원" << endl;
			break;
		case 1:
			cout << "주임" << endl;
			break;
		case 2:
			cout << "대리" << endl;
			break;
		case 3:
			cout << "과장" << endl;
			break;
		}
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COM_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COM_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COM_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}