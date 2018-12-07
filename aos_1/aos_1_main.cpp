//Made by Anna Kravets, K-22

#include <time.h>
#include <windows.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;
const int N = 30000000;

//Helpers

double helperInt() {
	int a0 = 4, a1 =3, a2 = 5, a3 = 82, a4 = 3,
		a5 = 6, a6 = 4, a7 = 9, a8 = 7, a9 = 1;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a7; a1 = a2; a2 = a4; a3 = a4; a4 = a0;
		a5 = a6; a6 = a4; a7 = a4; a8 = a9; a9 = a2;
	}
	return GetTickCount()-t;
}

double helperLong() {
	long long a0 = 15, a1 = 13, a2 = 822, a3 = 42, a4 = 2,
		a5 = 246, a6 = 23, a7 = 32, a8 = 50, a9 = 61;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a7; a1 = a2; a2 = a4; a3 = a4; a4 = a0;
		a5 = a6; a6 = a4; a7 = a4; a8 = a9; a9 = a2;
	}
	return GetTickCount() - t;
}

double helperChar() {
	char a0 = '5', a1 = '1', a2 = 'o',a3 = '<', a4 = '9', a5 = '+',
		a6 = 'g', a7 = '0', a8 = '2', a9 = '.';
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a7; a1 = a2; a2 = a4; a3 = a4; a4 = a0;
		a5 = a6; a6 = a4; a7 = a4; a8 = a9; a9 = a2;
	}
	return GetTickCount() - t;
}

double helperFloat() {
	float a0 = 5.56, a1 = 5.8, a2 = 5.34, a3 = 40.34,a4 = 27.44, 
		a5 = 34.54543, a6 = 34.35,a7 = 43.34, a8 = 43.44, a9 = 31.4;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a7; a1 = a2; a2 = a4; a3 = a4; a4 = a0;
		a5 = a6; a6 = a4; a7 = a4; a8 = a9; a9 = a2;
	}
	return GetTickCount() - t;
}

double helperDouble() {
	double a0 = 45.646, a1 = 96.48, a2 = 55.4, a3 =80.65, a4 = 612.454, 
		a5 = 54.563, a6 = 33.43675, a7 = 843.374, a8 = 50.57, a9 = 14.4656;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a7; a1 = a2; a2 = a4; a3 = a4; a4 = a0;
		a5 = a6; a6 = a4; a7 = a4; a8 = a9; a9 = a2;
	}
	return GetTickCount() - t;
}


//Int

double addInt() {
	int a0 = 25, a1 = 67, a2 = 106, a3 = 23, a4 = 73,
		a5 = 9, a6 = 24, a7 = 32, a8 = 87, a9 = 87;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 + a7; a1 = a0 + a2; a2 = a1 + a4; a3 = a2 + a4;
		a4 = a3 + a6; a5 = a4 + a7; a6 = a5 + a4; a7 = a6 + a9;
		a8 = a7 + a0; a9 = a8 + a2;
	}
	return GetTickCount() - t;
}

double subtractInt() {
	int a0 = 1, a1 = 19, a2 = 179, 
		a3 = 767, a4 = 1991, a5 = 3004,
		a6 = 9356, a7 = 96749,
		a8 = 466619, a9 = 999999999;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 - a0; a1 = a2 - a1; a2 = a3 - a2; a3 = a4 - a3;
		a4 = a5 - a4;a5 = a6 - a5;a6 = a7 - a6;a7 = a7 - a8;
		a8 = a9 - a8; a9 = a9 - a0;
	}
	return GetTickCount()-t;
}

double multiplyInt() {
	int a0 = 1, a1 = 1, a2 = 2, a3 = 1, a4 = 1, a5 = 2, a6 = 2, 
		a7 = 1, a8 = 2, a9 = 1;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 *a2; a1 = a2 *a8; a2 = a2 * a4;a3 = a4 * a3;
		a4 = a9 * a6; a5 = a4 * a7; a6 = a8 * a4;a7 = a8 * a0;
		a8 = a1 * a1; a9 = a7 * a2;
	}
	return GetTickCount() - t;
}

double divideInt() {
	int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	double t = GetTickCount();
	for (int i = 1; i < N+1; i++) {
		a0 = 88%i+2; a1 = 360077; a2 = 173%i+2; a3 = 970867; a4 = 887009; a5 = 2003; a6 = 47873; 
		a7 = 120023; a8 = 922044; a9 = 116043;
		a1 = a2 /a0; a3 = a4 /a0; a4 = a9 /a0; a5 = a5 /a2;
		a6 = a8 / a2;a7 = a3 /a2;a8 = a1 /a2;a9 = a7 /a2;
		a0 = a6 / a0;a2 = a7 / a2;
	}
	return GetTickCount() - t;
}


//Long

double addLong() {
	long long a0 = 1354, a1 = 1755, a2 = 4345, a3 = 2453, a4 = 5347, 
		a5 = 47346, a6 = 25748, a7 = 1584, a8 = 340, a9 = 1354;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 + a8; a1 = a9 + a2; a2 = a9 + a4; a3 = a4 + a3;
		a4 = a3 + a6; a5 = a3 + a7; a6 = a2 + a3; a7 = a0 + a9;
		a8 = a7 + a2; a9 = a7 + a4;
	}
	return GetTickCount() - t;
}

double subtractLong() {
	long long a0 = 8444456457, a1 = 933232254, a2 = 45454533512, a3 = 543243235432, a4 = 5435647,
		a5 = 435235246, a6 = 53443542, a7 = 3437651, a8 = 234453530, a9 = 1633423343434;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 - a7; a1 = a0 - a2; a2 = a2 - a6;
		a3 = a5 - a3; a4 = a9 - a0; a5 = a7 - a5;
		a6 = a0 - a4; a7 = a8 - a9; a8 = a9 - a1;
		a9 = a2 - a3;
	}
	return GetTickCount() - t;
}

double multiplyLong() {
	long long a0 = 14545435, a1 = 142345354, a2 = 2543454, a3 = 14543, a4 = 1435, 
		a5 = 5343452, a6 = 43453545, a7 = 1532, a8 = 543252, a9 = 31;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 *a2; a1 = a2 *a8; a2 = a2 * a4; a3 = a4 * a3;
		a4 = a9 * a6; a5 = a4 * a7; a6 = a8 * a4; a7 = a8 * a0;
		a8 = a1 * a1; a9 = a7 * a2;
	}
	return GetTickCount() - t;
}

double divideLong() {
	long long a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	double t = GetTickCount();
	for (int i = 1; i < N + 1; i++) {
		a0 = 88 % i + 2; a1 = 36024542077; a2 = 173 % i + 2; a3 = 97082367; a4 = 887009; a5 = 207803; a6 = 4787873;
		a7 = 120088723; a8 = 92234454044; a9 = 1160454543;
		a1 = a2 / a0; a3 = a4 / a0; a4 = a9 / a0; a5 = a5 / a2; 
		a6 = a8 / a2; a7 = a3 / a2; a8 = a1 / a2; a9 = a7 / a2;
		a0 = a6 / a0; a2 = a7 / a2;
	}
	return GetTickCount() - t;
}


//Char

double addChar() {
	char a0 = 'c', a1 = '5', a2 = '0', a3 = 'n', a4 = 'y',
		a5 = '3', a6 = '0', a7 = 'n', a8 = '*', a9 = '~';
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 + a7; a1 = a0 + a2; a2 = a2 + a4; a3 = a4 + a3;
		a4 = a7 + a6; a5 = a6 + a7; a6 = a7 + a4; a7 = a8 + a9;
		a8 = a9 + a0; a9 = a0 + a2;
	}
	return GetTickCount() - t;
}

double subtractChar() {
	char a0 = 'c', a1 = '5', a2 = '0', a3 = 'n', a4 = 'y',
		a5 = '3', a6 = '0', a7 = 'n', a8 = '*', a9 = '~';
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 - a7; a1 = a0 - a2; a2 = a2 - a6; a3 = a5 - a3;
		a4 = a9 - a0; a5 = a7 - a5; a6 = a0 - a4; a7 = a8 - a9;
		a8 = a9 - a1; a9 = a2 - a3;
	}
	return GetTickCount() - t;
}

double multiplyChar() {
	char a0 = 'c', a1 = '5', a2 = '0', a3 = 'n', a4 = 'y',
		a5 = '3', a6 = '0', a7 = 'n', a8 = '*', a9 = '~';
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 *a2; a1 = a2 *a8; a2 = a2 * a4; a3 = a4 * a3;
		a4 = a9 * a6; a5 = a4 * a7; a6 = a8 * a4; a7 = a8 * a0;
		a8 = a1 * a1; a9 = a7 * a2;
	}
	return GetTickCount() - t;
}

double divideChar() {
	char a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	double t = GetTickCount();
	for (int i = 1; i < N + 1; i++) {
		a0 = 4 % i + 2; a1 = '['; a2 = 7 % i + 2; a3 = 't'; 
		a4 = 'r'; a5 = 'g'; a6 = '@'; a7 = '9'; a8 = 'm'; a9 = '}';
		a1 = a2 / a0; a3 = a4 / a0; a4 = a9 / a0; a5 = a5 / a2;
		a6 = a8 / a2; a7 = a3 / a2; a8 = a1 / a2; a9 = a7 / a2;
		a0 = a6 / a0; a2 = a7 / a2;
	}
	return GetTickCount() - t;
}


//Float

double addFloat() {
	float a0 = 15.85, a1 = 15.73, a2 = 242.46,
		a3 = 263.522, a4 = 702.63, a5 = 4346.56,
		a6 = 254.543, a7 = 14332.534, a8 = 7876.4343,
		a9 = 651.452;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 + a7; a1 = a0 + a2; a2 = a2 + a4; a3 = a4 + a3;
		a4 = a7 + a6; a5 = a6 + a7; a6 = a7 + a4; a7 = a8 + a9;
		a8 = a9 + a0; a9 = a0 + a2;
	}
	return GetTickCount() - t;
}

double subtractFloat() {
	float a0 = 84445.3444, a1 = -5644.459, a2 = -167.5462,
		a3 = 23343223.54, a4 = 708437554.433, a5 = 65653543.544,
		a6 = -2343433.5645, a7 = 1654343.554, a8 = -45343.4540,
		a9 = 165434.454;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 - a7; a1 = a0 - a2; a2 = a2 - a6; a3 = a5 - a3;
		a4 = a9 - a0; a5 = a7 - a5; a6 = a0 - a4; a7 = a8 - a9;
		a8 = a9 - a1; a9 = a2 - a3;
	}
	return GetTickCount() - t;
}

double multiplyFloat() {
	float a0 = 15.85, a1 = 15.73, a2 = 242.46,
		a3 = 263.522, a4 = 702.63, a5 = 4346.56,
		a6 = 254.543, a7 = 14332.534, a8 = 7876.4343,
		a9 = 651.452;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 *a2; a1 = a2 *a8; a2 = a2 * a4; a3 = a4 * a3;
		a4 = a9 * a6; a5 = a4 * a7; a6 = a8 * a4; a7 = a8 * a0;
		a8 = a1 * a1; a9 = a7 * a2;
	}
	return GetTickCount() - t;
}

double divideFloat() {
	float a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	double t = GetTickCount();
	for (int i = 1; i < N + 1; i++) {
		a0 = 132 % i + 1.563; a1 = 368 % i + 1.336;
		a2 = 4554353452.673; a3 = 9745540867.76;
		a4 = 83442700.679; a5 = 2054545334340.673;
		a6 = 4745358.735; a7 = 15655400.2453;
		a8 = 9657672.204; a9 = 1160.5454;
		a0 = a3 / a1; a1 = a7 / a1; a2 = a7 / a0; a3 = a3 / a0;
		a4 = a9 / a0; a5 = a8 / a0; a6 = a5 / a1; a7 = a4 / a1;
		a8 = a2 / a0; a9 = a6 / a1;
	}
	return GetTickCount() - t;
}

//Double

double addDouble() {
	double a0 = 1324.987875, a1 = 15767.778323, a2 = 2456322.46556, 
		a3 = 23.5654322, a4 = 74978802.645453, a5 = 434246.54656, 
		a6 = 2432354.54543, a7 = 14345432.534534, a8 = 7876.4354043, 
		a9 = 634451.4534432;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 + a7; a1 = a0 + a2; a2 = a2 + a4; a3 = a4 + a3;
		a4 = a7 + a6; a5 = a6 + a7; a6 = a7 + a4; a7 = a8 + a9;
		a8 = a9 + a0; a9 = a0 + a2;
	}
	return GetTickCount() - t;
}

double subtractDouble() {
	double a0 = 8443445.345344, a1 = -56344.453439, a2 = -167.54654662,
		a3 = 23343223.54, a4 = 708437554.433, a5 = 65653543.54354,
		a6 = -2343433.564645, a7 = 1654343.545654, a8 = -45343.453440, 
		a9 = 1653434.453434;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 - a7; a1 = a0 - a2; a2 = a2 - a6; a3 = a5 - a3;
		a4 = a9 - a0; a5 = a7 - a5; a6 = a0 - a4; a7 = a8 - a9;
		a8 = a9 - a1; a9 = a2 - a3;
	}
	return GetTickCount() - t;
}

double multiplyDouble() {
	double a0 = 8443445.873, a1 = 56367744.4539, a2 = -1676767.54654662,
		a3 = 23343223.5, a4 = 708437554.433, a5 = 65653543.54354,
		a6 = 2343433.55, a7 = 1654343.545654, a8 = 45343.453440,
		a9 = 1653434.4;
	double t = GetTickCount();
	for (int i = 0; i < N; i++) {
		a0 = a1 *a2; a1 = a2 *a8; a2 = a2 * a4; a3 = a4 * a3;
		a4 = a9 * a6; a5 = a4 * a7; a6 = a8 * a4; a7 = a8 * a0;
		a8 = a1 * a1; a9 = a7 * a2;
	}
	return GetTickCount() - t;
}

double divideDouble() {
	double a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	double t = GetTickCount();
	for (int i = 1; i < N + 1; i++) {
		a0 = 132 % i + 1.5373563; a1 = 368 % i + 1.326635263;
		a2 = 4554353452.676563; a3 = 9745540867.7745436;
		a4 = 83442348700.67679; a5 = 2054545334340.67673;
		a6 = 47454354358.73435; a7 = 156554200.2454355433;
		a8 = 96576567572.20434; a9 = 1166766560.435345454;
		a0 = a3 / a1; a1 = a7 / a1; a2 = a7 / a0; a3 = a3 / a0; 
		a4 = a9 / a0; a5 = a8 / a0; a6 = a5 / a1; a7 = a4 / a1; 
		a8 = a2 / a0; a9 = a6 / a1;
	}
	return GetTickCount() - t;
}

double myMax(double*arr, int n) {
	double ans = arr[0];
	for (int i = 1; i < n; i++)
		ans = max(ans, arr[i]);
	return ans;
}

void print(int n) {
	for (int i = 0; i < n; i++)
		cout << "X";
	cout << " ";
}



int main() {
	double arr[20], t;
	char names[4] = { '+', '-', '*', '/' };
	//Int
	t = helperInt();
	arr[0]= N*10.*1000. / (addInt()-t);
	arr[1]= N*10.*1000. / (subtractInt()-t);
	arr[2]= N*10.*1000. / (multiplyInt()-t);
	arr[3]= N*10.*1000. / (divideInt()-t);
	//Long
	t = helperLong();
	arr[4]= N*10.*1000. / (addLong()-t);
	arr[5]= N*10.*1000. / (subtractLong()-t);
	arr[6]= N*10.*1000. / (multiplyLong()-t);
	arr[7]= N*10.*1000. / (divideLong()-t);
	//Char
	t= helperChar();
	arr[8] = N*10.*1000. / (addChar()-t);
	arr[9] = N*10.*1000. / (subtractChar()-t);
	arr[10] = N*10.*1000. / (multiplyChar()-t);
	arr[11] = N*10.*1000. / (divideChar()-t);
	//Float
	t = helperFloat();
	arr[12] = N*10.*1000. / (addFloat()-t);
	arr[13] = N*10.*1000. / (subtractFloat()-t);
	arr[14] = N*10.*1000. / (multiplyFloat()-t);
	arr[15] = N*10.*1000. / (divideFloat()-t);
	//Double
	t = helperDouble();
	arr[16] = N*10.*1000. / (addDouble()-t);
	arr[17] = N*10.*1000. / (subtractDouble()-t);
	arr[18] = N*10.*1000. / (multiplyDouble()-t);
	arr[19] = N*10.*1000. / (divideDouble()-t);

	double maxValue = myMax(arr, 16);

    //print results

	//int
	for (int i = 0; i < 4; i++) {
		cout <<left<<setw(4) << names[i % 4] << 
			 setw(7) << "int" <<
			setw(18) <<arr[i];
		print(ceil(arr[i] / maxValue * 40));
		cout << setw(10) << (ceil(arr[i] / maxValue*100.)) << endl;
	}

	//long
	for (int i = 4; i < 8; i++) {
		cout << left<< setw(4) << names[i % 4] << 
			setw(7) << "long" <<
			setw(18) << arr[i];
		print(ceil(arr[i] / maxValue * 40));
		cout <<setw(10)<< (ceil(arr[i] / maxValue*100.)) << endl;
	}

	//char
	for (int i = 8; i < 12; i++) {
		cout << left << setw(4) << names[i % 4] <<
			setw(7) << "char" <<
			setw(18) << arr[i];
		print(ceil(arr[i] / maxValue * 40));
		cout << setw(10) << (ceil(arr[i] / maxValue*100.)) << endl;
	}

	//float
	for (int i = 12; i < 16; i++) {
		cout << left << setw(4) << names[i % 4] <<
			setw(7) << "float" <<
			setw(18) << arr[i];
		print(ceil(arr[i] / maxValue * 40));
		cout << setw(10) << (ceil(arr[i] / maxValue*100.))<<endl;
	}

	//double
	for (int i = 16; i < 20; i++) {
		cout << left << setw(4) << names[i % 4] <<
			setw(7) << "double" <<
			setw(18) << arr[i];
		print(ceil(arr[i] / maxValue * 40));
		cout << setw(10) << (ceil(arr[i] / maxValue*100.)) << endl;
	}

	system("pause");
	return 0;
}


