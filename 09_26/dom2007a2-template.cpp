// dom2007a.cpp - ACM ICPC2007�����\�IA ICPC���_�W�v�\�t�g�E�F�A
// �O���[�v�v���O���~���O���K ���K�ۑ�1 (���p�ۑ�)

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

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
        min_val = min(min_val, s);
        max_val = max(max_val, s);
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

/// @brief 1�Z�b�g�̃f�[�^���͂ɑ΂��ĉ𓚂��܂��B
/// @return ���̃f�[�^�Z�b�g�ɑ΂����
int solve()
{
    int n;
    int p;
    cin >> n;
    cin >> p;
    ScoreTotalizer score(p);
    score.update(p);
    for(int i = 0;i < n-1;i++)
    {
        cin >> p;
        score.update(p);
    }
    return score.calc_result();
}

int main() {
    // *** �ȉ��̕������쐬���Ă��������B ***
    vector<int> res;
    int n = 4;
    for(int i = 0;i < n;i++)
    {
        res.push_back(solve());
    }

    cout << endl;
    for(auto i : res)
    {
        cout << i << endl;
    }
    return 0;
}
