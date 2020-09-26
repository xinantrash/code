#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {

	int n;
	string s;
	int ans[20] = {0};
	cin >> n;

	for ( int i=0; i<n; i++ ) {
		cin >> s;
		int nums[26] = {0};
		for ( int j=0; j<s.size(); j++ ) {
			if ( s[j] == 'a' ) {
				nums[0]++;
			}else if ( s[j] == 'b' ) {
				nums[1]++;
			}else if ( s[j] == 'c' ) {
				nums[2]++;
			}else if ( s[j] == 'd' ) {
				nums[3]++;
			}else if ( s[j] == 'e' ) {
				nums[4]++;
			}else if ( s[j] == 'f' ) {
				nums[5]++;
			}else if ( s[j] == 'g' ) {
				nums[6]++;
			}else if ( s[j] == 'h' ) {
				nums[7]++;
			}else if ( s[j] == 'i' ) {
				nums[8]++;
			}else if ( s[j] == 'j' ) {
				nums[9]++;
			}else if ( s[j] == 'k' ) {
				nums[10]++;
			}else if ( s[j] == 'l' ) {
				nums[11]++;
			}else if ( s[j] == 'm' ) {
				nums[12]++;
			}else if ( s[j] == 'n' ) {
				nums[13]++;
			}else if ( s[j] == 'o' ) {
				nums[14]++;
			}else if ( s[j] == 'p' ) {
				nums[15]++;
			}else if ( s[j] == 'q' ) {
				nums[16]++;
			}else if ( s[j] == 'r' ) {
				nums[17]++;
			}else if ( s[j] == 's' ) {
				nums[18]++;
			}else if ( s[j] == 't' ) {
				nums[19]++;
			}else if ( s[j] == 'u' ) {
				nums[20]++;
			}else if ( s[j] == 'v' ) {
				nums[21]++;
			}else if ( s[j] == 'w' ) {
				nums[22]++;
			}else if ( s[j] == 'x' ) {
				nums[23]++;
			}else if ( s[j] == 'y' ) {
				nums[24]++;
			}else {
				nums[25]++;
			}
		}
		sort(nums, nums+26);
		ans[i] = nums[25];
	}
	for ( int i=0; i<n; i++ ) {
		cout << "Case #" << i+1 << ": " << ans[i] << endl;
	}
	return 0;
}
