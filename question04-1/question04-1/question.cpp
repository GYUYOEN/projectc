#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(const int& price, const int& num, const int& money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		if (numOfApples <= 0)
		{
			cout << "�ȼ��ִ� ������� ���̻� �����ϴ�." << endl;
			return 0;
		}
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() const
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int numOfApples;

public:
	void InitMembers(const int &money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	if (!(seller.SaleApples(1000) == 0))
	{
		FruitBuyer buyer;
		buyer.InitMembers(5000);
		buyer.BuyApples(seller, 2000);

		cout << "���� �Ǹ����� ��Ȳ" << endl;
		seller.ShowSalesResult();
		cout << "���� �������� ��Ȳ" << endl;
		buyer.ShowBuyResult();
	}

	cout << "�Ǹ� ���� ��� ����" << endl;

	return 0;
}