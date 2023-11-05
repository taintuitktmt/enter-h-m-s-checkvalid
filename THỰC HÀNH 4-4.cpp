//Nhập vào số giờ, phút, giây từ bàn phím.Kiểm tra xem thời gian nhập vào có hợp lệ hay ko và in kết quả ra màn hình.
//Thời gian hợp lệ được quy định như sau : Giờ được tính từ 0 đến 23, phút và giây được tính từ 0 đến 59.

#include <iostream>
using namespace std;

int main()
{
	int hour, minute, second;
	cout << "Nhap gio: "; cin >> hour;
	cout << "Nhap phut: "; cin >> minute;
	cout << "Nhap giay: "; cin >> second;

	bool hours = hour >= 0 && hour <= 23;
	bool minutes = minute >= 0 && minute <= 59;
	bool seconds = second >= 0 && second <= 59;

	if (hours && minutes && seconds)
	{
		cout << "Ket qua hop le";
	}
	else
	{
		cout << "Ket qua khong hop le";
	}

}