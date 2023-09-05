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
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;
		cout << "����: ";
		switch (position)
		{
		case 0:
			cout << "���" << endl;
			break;
		case 1:
			cout << "����" << endl;
			break;
		case 2:
			cout << "�븮" << endl;
			break;
		case 3:
			cout << "����" << endl;
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