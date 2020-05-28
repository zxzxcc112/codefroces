#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main ()
{
	map<int, int> mp;
	int n, a[200005], maxLen = 0, maxNum = 0;
	mp.clear();
	
	cin >> n;
	
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		mp[a[i]] = mp[a[i]-1] + 1;
		if (mp[a[i]] > maxLen)
		{
			maxLen = mp[a[i]];
			maxNum = a[i];
		}
	}
	
	cout << maxLen << endl;
	int num = maxNum - maxLen + 1;
	for (int i = 1;i <= n;i++)
	{
		if(a[i] == num)
		{
			cout << i << " ";
			num++;
		}
	}
	
	return 0;
}
