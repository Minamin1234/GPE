// ScoreTotalizer.h - ACM ICPC2007�����\�IA ICPC���_�W�v�\�t�g�E�F�A�̃N���X
// �O���[�v�v���O���~���O���K ���K�ۑ�2 (���p�ۑ�)
#pragma once
#ifndef SCORETOTALIZER_H_
#define SCORETOTALIZER_H_

#include <algorithm>

// �X�R�A�v�Z����N���X
class ScoreTotalizer {
public:
    // �X�R�A�̍ō��l���w�肵�ď���������B(�R���X�g���N�^)
    // ����
    //   max_score �X�R�A�̍ō��l
    ScoreTotalizer(int max_score) :
        n(0),
        min_val(max_score),
        max_val(0),
        sum(0) {
    }

    // ���v�l�A�ŏ��l�A�ő�l�̕ϐ��l���X�V����B
    //   ����
    //     s �V�����R���̓_��
    void update(int s) {
        sum += s;
        min_val = std::min(min_val, s);
        max_val = std::max(max_val, s);
        n++;    // �f�[�^���������Ă����B
    }

    // ���݂̃f�[�^�����Ƃɕ��σX�R�A���v�Z����B
    //   �߂�l  �v�Z�������_
    int calc_result() const {
        return (sum - min_val - max_val) / (n - 2);
    }

private:
    int n;			// �l�� (�f�[�^��)
    int min_val;    // �ŏ��_
    int max_val;	// �ő�_
    int sum;		// ���v�_
};

#endif // SCORETOTALIZER_H_
