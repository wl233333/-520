#include "addpoint.h"

void AddEdag(int chart[][100])
{
	int st, end;
	cout << "������ߵ�����һ���ڵ㣺" << endl;
	cin >> st;
	cout << "��������һ�ڵ�ֵ��" << endl;
	cin >> end;
	--st;
	--end;
	cout << "����Ȩ�أ�" << endl;
	cin >> chart[st][end];
	chart[end][st] = chart[st][end];
	cout << chart[st][end] << endl;
}
