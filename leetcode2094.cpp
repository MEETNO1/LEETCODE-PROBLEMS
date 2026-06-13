class solution {
    public:

    vector<int> findEvennumber( int , int,arr)
vector<int>ans;
vector<int> freq(10,0);

    int n = digit.size();

 for(  x : digit);
freq[x]++;
 int a = i/100;
 int b = (i %10) / 10;
 int c = i %10;

 for( int i = 100; i <= 999 ; i++){
    for( i % 2 != 0)
    continue;
    break;

    int a = i / 100;
    int b = (i % 10) / 10;
    int c = i % 10;

    vector<int> need(10, 0);
    need[a]++;
    need[b]++;
    need[c]++;


    bool ok = true;

    for( int d; d <= 10; d++){
        if( need[d] > freq[d]){
               ok = false;
                break;

        }
    }
                   if(ok)
  ans.push_back(i);
    }
 }
 return ans;
}