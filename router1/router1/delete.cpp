#include "delete.h"
int DeleteVertex(int chart[][100], int length)
{
	int n, num, i, j;
	num = length;
	cout << "weili" << endl;
	cout << "��ǰ�ڵ���ĿΪ��" << num << endl;
	cout << "������ɾ���ڵ�����";
	cin >> n;
		cout << chart[0][8] << endl;
		n -= 1;
		for (i = 0; i < num; ++i) {//�е��ƶ�
			for (j = n; j < num; j++) {
				chart[i][j] = chart[i][j + 1];
			}
		}
		for (i = n; i < num; i++) {//�е��ƶ�
			for (j = 0; j < num; j++) {
				chart[i][j] = chart[i + 1][j];
			}
		}
		for (int i = 0; i <= length - 1; i++)chart[i][length - 1] = chart[10][10];
		for (int i = 0; i <= length - 1; i++)chart[length - 1][i] = chart[10][10];
		cout << chart[0][7];
		length = length - 1;
		return length;
	}
void DeleteEdge(int chart[][100])
{
	int st, end;
	cout << "������ߵ�����һ���ڵ㣺";
	cin >> st;
	cout << "��������һ�ڵ�ֵ��";
	cin >> end;
	--st;
	--end;
	cout << "ɾ���ɹ�" << endl;
	chart[st][end] = 100;
	chart[end][st] = chart[st][end];
	cout << endl;
}

