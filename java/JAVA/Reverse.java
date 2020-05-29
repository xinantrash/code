public class Reverse {
    public int reverse(int x) {
        int num = 0;
        int ans = 0;
        if( x < 0 ) {
            num = -x;
            while( num != 0 ) {
                ans *= 10;
                ans += num%10;
                num /= 10;
            }
            ans = -ans;
        }
        if( x > 0 ) {
            num = x;
            while( num != 0 ) {
                ans *= 10;
                ans += num%10;
                num /= 10;
            }
        }
        return ans;
    }
}
