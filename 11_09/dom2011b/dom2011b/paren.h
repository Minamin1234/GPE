/** @file paren.h @brief ���E�̓V���������v���O�����̃w�b�_�t�@�C��
 *
 *  Copyright 2011 Akira Kitajima
 *
 *  @author �k�� ��
 *  @date 2011/11/25 �V�K�쐬
 *  @date 2017/12/1 �t�@�C������
 *
 *  @see http://icpc.iisf.or.jp/past-icpc/domestic2011/contest/all_ja.html
 */
#ifndef DOM2011B_PAREN_H_
#define DOM2011B_PAREN_H_

#include <string>

 /** ������@a s ���̊��ʂ��Ή����Ă��邩�`�F�b�N����B
  * ���܂��Ή����Ă�����^��Ԃ��B
  * @param s ������
  * @return ���茋��
  */
bool match_parens(const std::string& s);

#endif  // DOM2011B_PAREN_H_
