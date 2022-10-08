/**
 * @file main.cpp
 * @author ��@����
 * @brief ICPC �ߋ���� ���_�W�v���s�����̃��C��
 * 
 * @see http://icpc.iisf.or.jp/past-icpc/domestic2007/A_ja.html
 * 
 * @date 2022-10-08 �X�V
 * 
 * @copyright Copyright (c) 2022 MINAMI Riku
 * 
 */
#include <iostream>
#include <vector>
#include "ScoreTotalizer.h"

using namespace std;

/**
 * @brief �f�[�^�Z�b�g�̌�����͂��A�S�Ă̓��͂�������ɂ܂Ƃ߂ďo�͂���B
 * 
 * @return int �I���R�[�h
 */
int main()
{
    //�f�[�^�Z�b�g��
    int T = 4;
    //���ƒl
    int n,s;
    //�o�͌��ʂ��i�[���Ă����z��
    vector<int> res;
    //�f�[�^�Z�b�g���̉񐔌J��Ԃ�
    for(int i = 0;i < T;i++)
    {
        //���_�̌��̓���
        cin >> n;
        //�ŏ��̓��_�̓���
        cin >> s;
        //���_�v�Z�@������������@�����l�̓f�[�^�Z�b�g�ŏ��̒l
        ScoreTotalizer st(s);
        //�ŏ��̒l�����čX�V����
        st.update(s);
        //�ŏ��̓��_����͂����̂ň���炷
        n--;
        //�c��̓��_�̐������J��Ԃ�
        for(int i = 0;i < n;i++)
        {
            //�V���ȓ��_�����
            cin >> s;
            //���_�����čX�V
            st.update(s);
        }
        //���_���v�Z���A���ʂ�z��ɒǉ�����
        res.push_back(st.calc_result());
    }
    //���ʂ����ׂďo�͂���
    for(int i : res)
    {
        cout << i << endl;
    }
    return 0;
}