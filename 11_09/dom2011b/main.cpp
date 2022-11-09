/** @file main.cpp @brief ���E�̓V���������v���O�����̃��C������
 *
 *  Copyright 2011 Akira Kitajima
 *
 *  @author �k�� ��
 *  @date 2011/11/25 �V�K�쐬
 *  @date 2017/12/1 �t�@�C������
 *
 *  @see http://icpc.iisf.or.jp/past-icpc/domestic2011/contest/all_ja.html
 */
#include <iostream>
#include <string>
#include "dom2011b/paren.h"
using namespace std;

/** �W�����͂���f�[�^�𓾂ĕW���o�͂Ɍ��ʂ��o�͂���B
 * @return �I���X�e�[�^�X
 */
int main() {
	for (;;) {
		// �f�[�^�𓾂�B
		string s;  // �^����ꂽ������
		getline(cin, s);
		if (s == ".")  // ���͂̏I���
			break;

		// ���ʂ��o�͂���B

		cout << (match_parens(s) ? "yes" : "no") << endl;
	}
	return 0;
}
