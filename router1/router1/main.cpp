#include<iostream>
#include"addedge.h"
#include"addpoint.h"
#include"delete.h"
#include"createtu.h"
#include"read.h"
#define N 100
using namespace std;
int main() {
	int length = 9, chart[N][N];//lengthΪ���鳤�ȣ�chartΪ����ͼת���Ķ�ά����
	int a;
	cout << "          ********���Ʋ˵�*******" << endl;
	cout << "����1���·�ɱ�			����2���Ӳ���" << endl;
	cout << "����3ɾ������			����4����Ӧ��" << endl;
	cout << endl;
	cout << "����Ҫ���еĲ��������֣�";
	ReadFile(chart, length);
	while (cin >> a) {
		int b, c;
		switch (a) {
		case (1): {
			Printlyb(chart, length);
			break;
		}
		case (2): {
			cout << "����ָ��������1     	����ָ��������2" << endl;
			cout << "�������֣�";
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
			cout << "ɾ���߲���1	    ɾ���ڵ����2" << endl;
			cout << "�������֣�";
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
			cout << "Ӧ�ý���" << endl;
			return 0;
		}
		}
		cout << endl << "�������֣�";
	}
	cout << "Ӧ�ý���" << endl;
	cout << endl;
	return 0;
}