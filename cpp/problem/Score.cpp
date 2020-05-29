#include <bits/stdc++.h>

using namespace std;

struct data {
	int chinese;
	int math;
	int english;
	int num;
	int total;
};

int main(int argc, const char *argv[])
{
	data score[301];
	int n;
	cin >> n;
	for( int i=1; i<=n; i++ ) {
		cin >> score[i].chinese >> score[i].math >> score[i].english;
		score[i].total = score[i].chinese + score[i].math + score[i].english;
		score[i].num = i;
	}


	for( int i=1; i<=n; ++i ) {
		for( int j=i+1; j<=n; ++j ) {
			if( score[i].total < score[j].total ) {
				data temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
		}
	}

	for( int i=1; i<=n; ++i ) {
		for( int j=i+1; j<=n; ++j ) {
			if( score[i].chinese < score[j].chinese && score[i].total == score[j].total ) {
				data temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
		}
	}

	for( int i=1; i<=5; ++i ) {
		cout << score[i].num << " " << score[i].total << endl;
	}

	return 0;
}
