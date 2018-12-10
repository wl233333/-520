#include<iostream>
#include"addedge.h"
#include"addpoint.h"
#include"delete.h"
#include"createtu.h"
#include"read.h"
#define N 100
using namespace std;
int main() {
	int length = 9, chart[N][N];//length为数组长度，chart为网络图转化的二维数组
	int a;
	cout << "          ********控制菜单*******" << endl;
	cout << "输入1输出路由表			输入2增加操作" << endl;
	cout << "输入3删除操作			输入4结束应用" << endl;
	cout << endl;
	cout << "输入要进行的操作的数字：";
	ReadFile(chart, length);
	while (cin >> a) {
		int b, c;
		switch (a) {
		case (1): {
			Printlyb(chart, length);
			break;
		}
		case (2): {
			cout << "增加指定边输入1     	增加指定点输入2" << endl;
			cout << "输入数字：";
			cin >> b;
			if (b == 1) {
				AddEdag(chart);
			}
			else if (b == 2) {
				length = AddVertex(chart, length);
			}
			else if (b == 3) {
				break;
			}
			break;
		}
		case (3): {
			cout << "删除边操作1	    删除节点操作2" << endl;
			cout << "输入数字：";
			cin >> c;
			if (c == 1) {
				DeleteEdge(chart);
				Printlyb(chart, length);
			}
			else if (c == 2) {
				cout << chart[0][8] << endl;
				length = DeleteVertex(chart, length);
				Printlyb(chart, length);
			}
			else if (c == 3) {
				break;
			}
			break;
		}
		case (4): {
			cout << "应用结束" << endl;
			return 0;
		}
		}
		cout << endl << "输入数字：";
	}
	cout << "应用结束" << endl;
	cout << endl;
	return 0;
}