#include "addedge.h"
int AddVertex(int chart[][100], int length)
{
	int n, num, m;
	num = length;
	n = num;
	chart[num][num] = 0;
	while (num) {
	loop:
		cout << "�������½ڵ���ڵ�" << num << "�ľ��룺" << endl;
		cin >> m;
		if (m == 0) { cout << "�������" << endl; goto loop; }
		else {
			--num;
			chart[n][num] = m;
			chart[num][n] = chart[n][num];
		}
	}
	length = length + 1;
	return length;
}
