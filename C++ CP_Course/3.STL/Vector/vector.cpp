#include<bits/stdc++.h>
#define int long long
using namespace std;



void prn(vector<int>vec,int sz){
	for(int i=0;i<sz;i++)
    	cout<<vec[i]<< " ";
    cout<<"\n";
}
int32_t main1()
{
    vector<int>p;
    int t;cin>>t;
    while(t--){
        int pp;
        cin>>pp;

        p.push_back(pp);
    }


    prn(p,p.size());
    p.pop_back();

    prn(p,p.size());

    bool check = p.empty();
    cout<<"EMPTY? = "<<check<<endl;
    cout<<p.front()<<endl;
    cout<<p.back()<<endl;
    
    sort(p.begin(),p.end());
    prn(p,p.size());

    p.erase(p.begin());
    prn(p,p.size());
    swap(p[0],p[1]);
    prn(p,p.size());
    cout<<p.max_size()<<endl;
    cout<<p.capacity()<<endl;

    return 0;
}

int32_t main(){
	vector<int>v1;
	cout<<v1.capacity()<<endl;
	v1.resize(10);
	cout<<v1.capacity()<<endl;
	int k;
	while(cin>>k)v1.push_back(k);
	prn(v1,v1.size());

	cout<<v1.capacity()<<endl;
	reverse(v1.begin(),v1.end());
	prn(v1,v1.size());
	
	v1.assign(7,5);
	v1.insert(v1.end()-3,7);
	prn(v1,v1.size());

}