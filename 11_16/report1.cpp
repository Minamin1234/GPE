// report1.cpp - ���P�Ώۂ̃\�[�X�R�[�h

#include <algorithm>
#include <iostream> 
using namespace std; 
int H, W;

// �����`�̑Ίp���̓��
int tkj(int h, int w){
	return(h*h + w*w);
}
int main(){ 
	while(cin >> H >> W && H > 0){
		// �v�Z����(�J�n)
		const pair<int, int> given(tkj(H, W), H);
		pair<int, int> best(tkj(150, 150), 150), ans;
		for(int h=1; h<=150; ++h){
			for(int w=1; w<=150; ++w){
				if(w<=h)continue;
				//--------------------------
				// ���̕������������`������
				pair<int, int> x(tkj(h,w), h);
				//pair<int, int>�ɂ���r
				if(given < x && x < best){
					best=x;
					ans= make_pair(h, w);
				}
			}
		}
		// �v�Z����(�I��)
		cout << ans.first << ' ' << ans.second << endl;
	} 
} 
