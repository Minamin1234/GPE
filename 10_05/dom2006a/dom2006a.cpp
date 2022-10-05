// dom2006a.cpp - �f�B���N���̎Z�p�����藝�p�֐���`
#include "dom2006a/dom2006a.h"
using namespace std;

namespace {
    // �f�����ǂ������肷��B
    //   ����
    //     n ����Ώۂ̐�
    //   �߂�l
    //     �f���ł����true
    bool is_prime_number(int n) {
        // �ꍇ���� (n <= 1)
        if (n <= 1)
            return false;

        // �ꍇ���� (n������)
        if (n % 2 == 0)
            return n == 2;

        // �ꍇ���� (n��3�ȏ�̊)
        for (int d = 3; d * d <= n; d += 2)
            if (n % d == 0)
                // d�Ŋ���؂��̂őf���ł͂Ȃ��B
                return false;

        // ����؂�鐔��������Ȃ������̂őf��
        return true;
    }
}

int dom2006a::dirichlet(int a, int d, int n) {
    int cnt = 0;  // ���������f���̌�

    while (!is_prime_number(a) || ++cnt < n)
        a += d;

    return a;
}
