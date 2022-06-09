class Solution{
  public:
    long long findRank(string str) {

        //Calculating factorial values
        vector<long long> fact;
        fact.push_back(1);
        long long p = 1;
        for(int i=2; i<=18; i++) {
            p *= i;
            fact.push_back(p);
        }

        long long len = str.length();
        long long mul = fact[len-1];
        long long rank = 1;
     
        // all elements of count[] are initialized with 0
        long long count[26] = {0};
     
        // Populate the count array such that count[i]
        // contains count of characters which are present
        // in str and are smaller than i
        for (int i = 0; i<len; ++i)
            ++count[str[i]-'a'];
     
        for (int i = 1; i<26; ++i)
            count[i] += count[i-1];
     
        for (int i = 0; i < len; ++i) {
            mul /= (len - i);
     
            // count number of chars smaller than str[i]
            // fron str[i+1] to str[len-1]

            int x = (str[i] - 'a') - 1;
            if(x>=0)
                rank += count[x] * mul;
     
            // Reduce count of characters greater than str[i]
            for (int j = str[i]-'a'; j<26; ++j)
                --count[j];
        }
     
        return rank;
    }
};
