class Solution {
public:
    using ll = long long;
    static constexpr ll LIMIT = (ll)1e18;

    ll C(int n, int r) {
        if (r < 0 || r > n) return 0;
        r = min(r, n - r);

        __int128 ans = 1;

        for (int i = 1; i <= r; i++) {
            ans = ans * (n - r + i);
            ans /= i;
            if (ans > LIMIT) return LIMIT;
        }

        return (ll)ans;
    }

    ll countWays(vector<int>& freq) {
        int rem = 0;
        for (int x : freq) rem += x;

        ll ans = 1;

        for (int x : freq) {
            if (x == 0) continue;

            __int128 cur = (__int128)ans * C(rem, x);

            if (cur > LIMIT)
                ans = LIMIT;
            else
                ans = (ll)cur;

            rem -= x;
        }

        return ans;
    }

    string smallestPalindrome(string s, long long k) {
        vector<int> freq(26);

        for (char c : s)
            freq[c - 'a']++;

        string mid = "";

        for (int i = 0; i < 26; i++) {
            if (freq[i] & 1)
                mid.push_back(char('a' + i));
            freq[i] /= 2;
        }

        if (countWays(freq) < k)
            return "";

        string left;

        int half = 0;
        for (int x : freq) half += x;

        while ((int)left.size() < half) {

            for (int c = 0; c < 26; c++) {

                if (freq[c] == 0)
                    continue;

                freq[c]--;

                ll ways = countWays(freq);

                if (ways >= k) {
                    left.push_back(char('a' + c));
                    break;
                }

                k -= ways;
                freq[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};