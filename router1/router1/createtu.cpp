#include "createtu.h"
void Printlyb(int chart[][100], int length)
{
	int list[10010] = { 0 };
	int s[10010], DIST[10010];
	int u, v = 1, num, w, k, min;
	cout << "����Ҫ�鿴��·�������" << endl;
	cin >> v;
		v = v - 1;
		for (int i = 0; i < length; ++i) {
			s[i] = 0;
			DIST[i] = chart[v][i];
		}
		s[v] = 1;
		DIST[v] = 0;
		list[v] = v;
		for (num = 1; num <= length; ++num) {
			k = 100;
			for (w = 0; w < length; ++w) {
				if (DIST[w] < k&&s[w] == 0) {
					k = DIST[w];
					u = w;
				}
			}
			s[u] = 1;
			int tmp = u;
			for (w = 0; w < length; ++w) {
				if (list[u] == 0)list[u] = u;
				if (s[w] == 0) {
					min = (DIST[w] < (DIST[u] + chart[u][w])) ? DIST[w] : (DIST[u] + chart[u][w]);
					if (DIST[w] >= (DIST[u] + chart[u][w])) {
						list[w] = u;
						while (list[w] != list[u]) {
							list[w] = list[u];
							u = list[u];
						}
						u = tmp;
					}
					DIST[w] = min;
				}
			}
		}
	int i = 0;
	cout << "Ŀ��·����  " << "��һ�� " << endl;
	while (i < length) {
		if (i == v) { ++i; continue; }
		cout << i + 1 << "            " << list[i] + 1 << "  " << endl;
		++i;
	}
	cout << "" << endl;;
}
