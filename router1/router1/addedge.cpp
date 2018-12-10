#include "addedge.h"
int AddVertex(int chart[][100], int length)
{
	int n, num, m;
	num = length;
	n = num;
	chart[num][num] = 0;
	while (num) {
	loop:
		cout << "请输入新节点与节点" << num << "的距离：" << endl;
		cin >> m;
		if (m == 0) { cout << "输入错误" << endl; goto loop; }
		else {
			--num;
			chart[n][num] = m;
			chart[num][n] = chart[n][num];
		}
	}
	length = length + 1;
	return length;
}
