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
	stack<char> a;//stack d? x? lý trong quá trình chuy?n
	for(int i=0;i<str.size();i++)//duy?t h?t chu?i str
	{
		if(str[i]=='(')
		{
			a.push(str[i]);
		}
		else if(str[i]>='A'&&str[i]<='Z')//n?u là toán H?NG thì cho ra chu?i kq out
		{
			out+=str[i];
		}
		else if(str[i]==')')//n?u là d?u (
		{
			while(true)
			{
				if(a.top()!='(')//khi nào khác d?u ( cho h?t vào chu?i kq
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
		else if(isoperator(str[i]))//n?u là operator
		{
			while(!a.empty()&&DoUuTien(a.top())>=DoUuTien(str[i]))//n?u stack khác r?ng và th?a dk
			{
				out+=a.top();
				a.pop();
			}
			a.push(str[i]);
		}
	}
		while(!a.empty())//n?u stack khác r?ng d?y h?t nh?ng gì còn l?i vào out
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
node* get_node(char data)//t?o m?t node b?t kì
{
	node *p=new node();
	p->data=data;
	p->pleft=p->pright=nullptr;
	return p;
}
typedef node* tree;//d?nh nghia l?i tên
void init(tree &t)//kh?i t?o tree
{
	t=nullptr;
}
void creat_tree(tree &t,string postifix)//postifix là chu?i h?u t? v?a chuy?n xong
{
	//init(t);
	stack<tree> a;//t?o m?t stack d? x? lý
	for(int i=0;i<postifix.size();i++)
	{
		if(isoperator(postifix[i])==false)//n?u không ph?i toán t?
		{
			t=get_node(postifix[i]);
			a.push(t);
		}
		else //n?u là toán t? thì t?o cây
		{
			t=get_node(postifix[i]);
			t->pright=a.top();//t?o nhánh ph?i cây
			a.pop();
			t->pleft=a.top();//t?o nhánh trái cây
			a.pop();

			a.push(t);
		}
	}
	t=a.top();//g?c c?a cây là ph?n t? còn l?i d?u tiên
	a.pop();
}
void LNR(tree t)//duy?t cây theo d?ng trung t?
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
	//chào các b?n :)
	system("pause");
}
