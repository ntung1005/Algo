#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isoperator(char x)
{
	if(x=='+'||x=='-'||x=='*'||x=='/')
	{
		return true;
	}
	return false;
}
int DoUuTien(char x)
{
	if(x=='*'||x=='/')
	{
		return 2;
	}
	if(x=='+'||x=='-')
	{
		return 1;
	}
	return 0;
}
string to_postifix(string str)//chuy?n chu?i string str sang d?ng h?u t?
{
	string out="";//chu?i h?u t?
	stack<char> a;//stack d? x? l� trong qu� tr�nh chuy?n
	for(int i=0;i<str.size();i++)//duy?t h?t chu?i str
	{
		if(str[i]=='(')
		{
			a.push(str[i]);
		}
		else if(str[i]>='A'&&str[i]<='Z')//n?u l� to�n H?NG th� cho ra chu?i kq out
		{
			out+=str[i];
		}
		else if(str[i]==')')//n?u l� d?u (
		{
			while(true)
			{
				if(a.top()!='(')//khi n�o kh�c d?u ( cho h?t v�o chu?i kq
				{
					out+=a.top();
					a.pop();
				}
				else 
				{
					a.pop();
					break;
				}
			}
		}
		else if(isoperator(str[i]))//n?u l� operator
		{
			while(!a.empty()&&DoUuTien(a.top())>=DoUuTien(str[i]))//n?u stack kh�c r?ng v� th?a dk
			{
				out+=a.top();
				a.pop();
			}
			a.push(str[i]);
		}
	}
		while(!a.empty())//n?u stack kh�c r?ng d?y h?t nh?ng g� c�n l?i v�o out
		{
			out+=a.top();
			a.pop();
		}
		return out;
}
struct node
{
	char data;
	node *pleft,*pright;
};
node* get_node(char data)//t?o m?t node b?t k�
{
	node *p=new node();
	p->data=data;
	p->pleft=p->pright=nullptr;
	return p;
}
typedef node* tree;//d?nh nghia l?i t�n
void init(tree &t)//kh?i t?o tree
{
	t=nullptr;
}
void creat_tree(tree &t,string postifix)//postifix l� chu?i h?u t? v?a chuy?n xong
{
	//init(t);
	stack<tree> a;//t?o m?t stack d? x? l�
	for(int i=0;i<postifix.size();i++)
	{
		if(isoperator(postifix[i])==false)//n?u kh�ng ph?i to�n t?
		{
			t=get_node(postifix[i]);
			a.push(t);
		}
		else //n?u l� to�n t? th� t?o c�y
		{
			t=get_node(postifix[i]);
			t->pright=a.top();//t?o nh�nh ph?i c�y
			a.pop();
			t->pleft=a.top();//t?o nh�nh tr�i c�y
			a.pop();

			a.push(t);
		}
	}
	t=a.top();//g?c c?a c�y l� ph?n t? c�n l?i d?u ti�n
	a.pop();
}
void LNR(tree t)//duy?t c�y theo d?ng trung t?
{
	if(t!=nullptr)
	{
		LNR(t->pleft);
		cout<<t->data;
		LNR(t->pright);
	}
}
void LRN(tree t)//h?u t?
{
	if(t)
	{
		LRN(t->pleft);
		LRN(t->pright);
		cout<<t->data;
	}
}
void NLR(tree t)
{
	if(t)
	{
		cout<<t->data;
		NLR(t->pleft);
		NLR(t->pright);
	}
}
int main()
{
	tree t;
	string str="A+(B-C)";
	//cout<<to_postifix(str);
	creat_tree(t,to_postifix(str));
	cout<<"Trung to:";LNR(t);
	cout<<"\nHau to";LRN(t);
	cout<<"\nTien to: ";NLR(t);
	//ch�o c�c b?n :)
	system("pause");
}
