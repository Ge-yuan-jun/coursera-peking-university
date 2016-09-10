/**
 * 描述
 *
 * 输入一串长度不超过500个符号的字符串，输出在串中出现第2多的英语字母(大小写字母认为相同)和次数（如果串中有其它符号，则忽略不考虑）。如果有多个字母的次数都是第2多，则按串中字母出现的顺序输出第1个。
 *
 * 例 ab&dcAab&c9defgb
 *
 * 这里，a 和 b都出现3次，c和d都出现2次，e、f 和 g 各出现1次，其中的符号&和9均忽略不考虑。因此，出现第2多的应该是 c 和 d，但是 d 开始出现的位置在 c 的前面，因此，输出为
 *
 * D+d:2
 *
 * (假定在字符串中，次数第2多的字母总存在)
 *
 * 输入
 *
 * 一个字符串
 *
 * 输出
 *
 * 大写字母+小写字母:个数
 *
 * 样例输入
 *
 * ab&dcAab&c9defgb
 *
 * 样例输出
 *
 * D+d:2
 **/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main () {
	int count1[26] = { 0 };
	char a[1000];

	cin.getline(a, 1000);

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] >= 65 && a[i] <= 90) {	// uppercase
			count1[a[i] - 65] ++;
		} else if (a[i] >= 97 && a[i] <= 122) { // lowercase to upper
			count1[a[i] -97] ++;
			a[i] -= 32;
		}
	}

	int firstMax = 0, secondMax = 0;

	for (int i = 0; i < 26; ++i) {	// handle max
		if (count1[firstMax] <= count1[i]) {
			firstMax = i;
		}
	}

	// use 'for' to set max equal 0, in case max more than 1
	for (int i = 0; i < 26; ++i) {
		if (count1[i] == count1[firstMax]) {
			count1[i] = 0;
		}
	}


	for (int i = 0; i < 26; ++i) {
		if (count1[secondMax] <= count1[i]) {
			secondMax = i;
		}
	}

	int num = count1[secondMax];

	for (int i = 0; i < 26; i++) {
		if (count1[secondMax] == count1[i]) {
			count1[i] = 500;
		}
	}


	for (int i = 0; i < strlen(a); i++) {
		if (count1[a[i] - 65] == 500) {
			cout << char(a[i]) << "+" << char(a[i] + 32) << ":" << num;
			return 0;
		}
	}
	return 0;
}
