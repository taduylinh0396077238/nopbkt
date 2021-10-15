#include <stdio.h>
#include <stdlib.h>

int xeploai(int a, int b, int c);

 main() {
	int tb;
	int as,lythuyet,thuchanh;
	char chon;
	do {
    printf("nhap diem  as \n");
    scanf("%d",&as);
	printf("nhap diem ly thuyet \n");
	scanf("%d",&lythuyet);
	printf("nhap diem thuc hanh \n ");
	scanf("%d",&thuchanh);
	tb = xeploai(as,lythuyet,thuchanh);
	switch(tb){
			case 0:
				printf("\nBan da bi truot mon!");
				break;
			case 1:
			    printf("\nBan dat xep loai trung binh");
				break;
			case 2:
			    printf("\nBan dat xep loai kha");
				break;
			case 3:
			    printf("\nBan dat xep loai gioi");
				break;			
		}
		
	printf("Ban muon tra cuu diem thi hay khong\n ?");
	printf("Co xin moi ban nhap y\n");
	printf("khong thi chon n\n");
	fflush(stdin);
	scanf("%c",&chon);
	} while(chon == 'Y' || chon =='y');
	if(chon != 'Y' && chon !='y')
	printf("chuc ban thi tot!!");
	return 0;
	}
	int xeploai(int a, int b, int c)
    {
	float tb = (float)(a + b + c)/3;
    if(tb < 40)
	        return 0;
	    else if(tb>40 && tb<60)
		    return 1;
		else if(tb>=60 && tb<80)
		    return 2;
		else if(tb>=80)
		    return 3;		
	}
