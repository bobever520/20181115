#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,t,z,i,j, s[5];                                                  //�ŧi�ܼ�
	                                                                      
	printf("�п�J5�ӼƦr:");                                             //��ܤ�r
	for (z = 0; z < 5; z++)                                               //��for��J�}�C
		scanf_s("%d", &s[z]);                                             //�q�}�C��0~4��m

	for (i = 0; i < 5; i++)                                               //5�ӼƳ̦h�u�ݭn5���_�w�ƧǴN�৹��
	{
		if (!(s[4] > s[3] && s[3] > s[2] && s[2] > s[1] && s[1] > s[0]))  //�P�_�O�_�w�g�Ƨǧ���
		{
			for (j = 0; j < 4; j++)                                       //�ϥΫ_�w�Ƨ�
			{
				if (s[j]>s[j + 1])										  //�p�G�ثe�o��j���診��
				{
					t = s[j];											  //�h�N�ثe�o���m�Ȧs��
					s[j] = s[j + 1];                                      //�Ϋ�診����N�ثe�o��
					s[j + 1] = t;                                         //�N�Ȧs�Ϫ��Ȩ��N��診��
				}                                                         //�����洫���ʧ@
			}

			for (x = 0; x < 5; x++)                                       //��for��X�o���Ƨǧ��᪺���G
				printf("%d  ", s[x]);
			printf("\n");                                                 //����
		}
	}
	system("pause");                                                      //����������@������
	return 0;
}


