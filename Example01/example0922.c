#include <stdio.h>
//��Ǯ��ټ�
int main1000(){
	int cocks, chicks, hens;   //���幫����С����ĸ��
	//���������������������������20ֻ��С�����300ֻ��ĸ�����33ֻ
	for (cocks = 0; cocks <= 20; cocks++)  
	for (chicks=0;chicks<=100;chicks++)
	for (hens = 0; hens <= 33; hens++){
		//һֻ����ֵ��Ǯ��һֻĸ��ֵ��Ǯ����ֻС��ֵһǮ
		if ((5 * cocks + 3 * hens + chicks / 3.0 == 100) && (cocks + hens + chicks == 100)){
			printf("cocks=%2d,hens=%2d,chicks=%2d\n", cocks, hens, chicks);
		}
	}
	return 0;
}

//��Ǯ��ټ��㷨�Ż�
int main110(){
	int cock, chick, hen;
	for (cock = 9; cock <= 20; cock++)
		for (hen = 0; hen <= 33; hen++){
			chick = 100 - cock - hen;
			if (5 * cock + 3 * hen + chick / 3.0 == 100)
				printf("cock=%2d,hen=%2d,chick=%2d\n", cock, hen, chick);
	}
	return 0;
}