#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pii pair<int,int>
#define mp(X,Y) make_pair(X,Y)
#define mt(X,Y) make_tuple(X,Y)
#define mtt(X,Y,Z) make_tuple(X,Y,Z)
#define ll long long
#define sz(v) (int)(v).size()

using namespace std;

typedef struct
{
	int y, x;
	int gas;
}car;

bool operator < (car a, car b) //true일경우 변경, top이 제일 우선순위가 높은 경우
{
	if (a.gas != b.gas)
		return a.gas < b.gas; 
	else if (a.y != b.y) //새로 들어온 y축이 더 작으면 우선순위가 높은것이므로 변경
		return a.y > b.y;
	else if (a.x != b.x)//새로 들어온 x축이 더 작으면 우선순위가 높은것이므로 변경
		return a.x > b.x;
	else
		return false;
}

bool cmp (car a, car b) //v는 
{
	if (a.gas != b.gas)
		return a.gas < b.gas; //gas가 더 큰게 뒤에 있고
	else if (a.y != b.y)
		return a.y > b.y; //y가 더 큰게  앞에 있어야 한다.
	else if (a.x != b.x)
		return a.x > b.x;
	else
		return false;
}

int main(void)
{
	fastio;
	priority_queue<car> pq;

	int n;
	cin >> n;



	for (int i = 0; i < n; i++)
	{
		int y, x, gas;
		cin >> y >> x >> gas;
		pq.push({ y, x, gas });
	}
	cout << "debuging point" << "\n";

	vector<car> v;
	for (int i = 0; i < n; i++)
	{
		int y, x, gas;
		cin >> y >> x >> gas;
		v.push_back({ y, x, gas });
	}
	sort(v.begin(), v.end(), cmp);
	cout << "debuging point" << "\n";
}

/*
3
3 3 4
2 2 5
1 3 5
3 3 4
2 2 5
1 3 5
*/
