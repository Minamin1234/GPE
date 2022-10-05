// dom2007a.h - ICPC���_�W�v�\�t�g�E�F�A�p�w�b�_�t�@�C��
#pragma once
#ifndef DOM2007A_H_
#define DOM2007A_H_

#include <algorithm>

namespace dom2007a {

// ���v�l�A�ŏ��l�A�ő�l�̕ϐ��l���X�V����B
//   ����
//     sum     ���v�l (�X�V)
//     min_val �ŏ��l (�X�V)
//     max_val �ő�l (�X�V)
//     s       �V�����R���̓_��
void update(int& sum, int& min_val, int& max_val, int s);

// �f�[�^���A���v�l�A�ŏ��l�A�ő�l�����ƂɁA���_���v�Z����B
//   ����
//     n       �f�[�^��
//     sum     ���v�l
//     min_val �ŏ��l
//     max_val �ő�l
//
//   �߂�l  �v�Z�������_
int calc_result(int n, int sum, int min_val, int max_val);

// ICPC�̓_�����W�v����N���X
class score_totalizer {
public:
	// �_���̍ŏ��l�E�ő�l���w�肵�ď����ݒ���s���B
	//   ����
	//     score_min �_���̍ŏ��l
	//     score_max �_���̍ő�l
	score_totalizer(int score_min, int score_max) :
		n(0),
		sum(0),
		min_val(score_max),
		max_val(score_min) {
	}

	// ���v�l�A�ŏ��l�A�ő�l�̕ϐ��l���X�V����B
	//   ����
	//     s       �V�����R���̓_��
	void update(int s) {
		sum += s;
		min_val = std::min(min_val, s);
		max_val = std::max(max_val, s);
		n++;
	}

	// �f�[�^���A���v�l�A�ŏ��l�A�ő�l�����ƂɁA���_���v�Z����B
	//   �߂�l  �v�Z�������_
	int calc_result() {
		return (sum - min_val - max_val) / (n - 2);
	}

private:
	int n;  // �f�[�^��
	int sum;  // ���v�l
	int min_val;  // �ŏ��l
	int max_val;  // �ő�l
};

} // namespace dom2007a

#endif  // DOM2007A_H_
