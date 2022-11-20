/** @file	report1_rewritten.cpp - report1.cpp�����P�����t�@�C��
* @see	http://icpc.iisf.or.jp/past-icpc/domestic2013/#section_A
* @author	�k���@��
* @author 	��@����
* @copyright	Copyright 2022 MINAMI Riku,KITAJIMA Akira
* @date	2022�N11���@�V�K�쐬
* @date	2022�N11��	�C��
*/
#include <algorithm>
#include <iostream>

/** �c�����ꂼ���悵�A���Z�����l��Ԃ��܂��B(�����`�̑Ίp���̓��)
* @param h	����
* @param w	��
* @returns	h,w���ꂼ���悵�ĉ��Z�����l
*/
int pow2HW(int h, int w) {
	return(h*h + w*w);
}

/** ���͂��ꂽH��W����œK�Ȓ����`�����߂܂��B
* @param H	����
* @param W	��
* @returns	���ɉ������œK�Ȓ����`�̃y�A
*/
std::pair<int, int> calculate(const int H, const int W) {
	const int HEIGHT_MAX = 150;  // �����̍ő�
	const int HEIGHT_MIN = 1;  // �����̍ŏ�
	const int WIDTH_MAX = 150;  // ���̒����̍ő�
	const int WIDTH_MIN = 1;  // ���̒����̍ŏ�

	// �e�X�g�P�[�X����^����ꂽ�����`�̃f�[�^
	const std::pair<int, int> given(pow2HW(H, W), H);
	// �ő�̒����ł��钷���`�f�[�^
	std::pair<int, int> best(pow2HW(HEIGHT_MAX, WIDTH_MAX), HEIGHT_MAX);
	std::pair<int, int> ans;  // �œK���̍����ƒ����̃y�A�[
	for(int h = HEIGHT_MIN; h <= HEIGHT_MAX; ++h) {
		for(int w = WIDTH_MIN; w <= WIDTH_MAX; ++w) {
			if(w <= h)continue;
			// --------------------------
			// ���̕������������`������
			std::pair<int, int> x(pow2HW(h, w), h);
			// pair<int, int>�ɂ���r
			if(given < x && x < best) {
				best = x;
				ans = std::make_pair(h, w);
			}
		}
	}
	return ans;
}

/** �e�X�g�P�[�X����̓���H,W���󂯎��A���ɉ����čœK�Ȓ����`�����߁A�o�͂���
*/
int main() {
	int H;  // ����(=Height)
	int W;  // ���̒���(=Width)
	while(std::cin >> H >> W && H > 0) {
		// �v�Z����(�J�n)
		// �œK�Ȓ����`�̃y�A
		std::pair<int, int> ans = calculate(H, W);
		// �v�Z����(�I��)
		std::cout << ans.first << ' ' << ans.second << std::endl;
	}
}
