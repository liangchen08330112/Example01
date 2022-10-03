#include <stdio.h>
//百钱买百鸡
int main1000(){
	int cocks, chicks, hens;   //定义公鸡，小鸡和母鸡
	//控制三个变量的数量。公鸡最多20只，小鸡最多300只，母鸡最多33只
	for (cocks = 0; cocks <= 20; cocks++)  
	for (chicks=0;chicks<=100;chicks++)
	for (hens = 0; hens <= 33; hens++){
		//一只公鸡值三钱，一只母鸡值三钱，三只小鸡值一钱
		if ((5 * cocks + 3 * hens + chicks / 3.0 == 100) && (cocks + hens + chicks == 100)){
			printf("cocks=%2d,hens=%2d,chicks=%2d\n", cocks, hens, chicks);
		}
	}
	return 0;
}

//百钱买百鸡算法优化
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