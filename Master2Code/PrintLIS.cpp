#define pb push_back
#define mp make_pair
#define sz size
#define fi first
#define se second
#define nl "\n"
#define all(x) (x).begin(), (x).end()

void LIS(int a[], int n){
	set<pair<int, int>>st;
	map<int, int> par;
	for(int i=0; i<n; i++){
		auto cur=mp(a[i], i);
		if(st.find(cur)!=st.end())
			continue;
		auto it=st.insert(cur).first;
		if(++it!=st.end())
			st.erase(it);
		it=st.find(cur);
		par[i]=(--it)->se;
	}
	stack<int>lis;
	int index=st.rbegin()->se;
	int k=st.sz();
	while(k--){
		lis.push(a[index]);
		index=par[index];
	}
	cout<<lis.sz()<<nl;
	while(!lis.empty()){
		cout<<lis.top()<<" ";
		lis.pop();
	}
}
