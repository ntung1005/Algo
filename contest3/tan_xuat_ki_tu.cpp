#include <iostream>
#include<string.h>
using namespace std;

// hàm d?m s? l?n xu?t hi?n c?a t?ng ký t? phân bi?t
void Tan_Suat_Xuat_Hien(char s[])
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		bool KT = true; // gi? s? s[i] là ph?n t? phân bi?t
		// duy?t ngu?c v? d?u chu?i d? ki?m tra cái gi? s? ban d?u
		for (int j = i - 1; j >= 0; j--)
		{
			if (s[i] == s[j])
			{
				KT = false;
				break;
			}
		}
		if (KT == true)
		{
			// l?y s[i] phân bi?t duy?t l?i v?i chu?i ban d?u d? d?m s? l?n xu?t hi?n
			int dem = 0;
			for (int k = 0; k < n; k++)
			{
				if (s[i] == s[k])
				{
					dem++;
				}
			}
			cout << "\nKy tu " << s[i] << " xuat hien " << dem << " lan" ;
		}
	}
}
int main()
{
	char s[50] = "";
	cout << "\nNhap chuoi: ";
	cin>>s;
	Tan_Suat_Xuat_Hien(s);
	cout<<endl;
	return 0;
}
