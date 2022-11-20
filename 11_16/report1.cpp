// report1.cpp - 改善対象のソースコード

#include <algorithm>
#include <iostream> 
using namespace std; 
int H, W;

// 長方形の対角線の二乗
int tkj(int h, int w){
	return(h*h + w*w);
}
int main(){ 
	while(cin >> H >> W && H > 0){
		// 計算部分(開始)
		const pair<int, int> given(tkj(H, W), H);
		pair<int, int> best(tkj(150, 150), 150), ans;
		for(int h=1; h<=150; ++h){
			for(int w=1; w<=150; ++w){
				if(w<=h)continue;
				//--------------------------
				// 幅の方が長い長方形を扱う
				pair<int, int> x(tkj(h,w), h);
				//pair<int, int>による比較
				if(given < x && x < best){
					best=x;
					ans= make_pair(h, w);
				}
			}
		}
		// 計算部分(終了)
		cout << ans.first << ' ' << ans.second << endl;
	} 
} 
