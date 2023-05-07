/*
 * 从键盘输入一个百分制的成绩，（无小数），将输入的数据转换成等级ABCDEFGHIJX
 * 90-100A,90-89B,70-79C
 * 60-69D,50-59E,40-49F
 * 30-39G,20-29H,10-19I
 * 0-9J,其他超出正常范围分数为x
 */

#include<stdio.h>
int main()
{
    int a,n;
    printf("input the score:");
    scanf("%d",&a);
    n = a/10;
    if(a>=0 && a<=9)
    {
        printf("score = %d,grade = J",a);
    }
    else
    {
        switch (n)
        {
            case 10:
                printf("score = %d,grade = A", a);
                break;
            case 9:
                printf("score = %d,grade = A", a);
                break;
            case 8:
                printf("score = %d,grade = B", a);
                break;
            case 7:
                printf("score = %d,grade = C", a);
                break;
            case 6:
                printf("score = %d,grade = D", a);
                break;
            case 5:
                printf("score = %d,grade = E", a);
                break;
            case 4:
                printf("socre = %d,grade = F", a);
                break;
            case 3:
                printf("scode = %d,grade = G", a);
                break;
            case 2:
                printf("score = %d,grade = H", a);
                break;
            case 1:
                printf("scode = %d,grade = I", a);
                break;
            default:
                printf("score = %d,grade = X", a);
                break;
        }
    }
    return 0;

}
/*
#include<stdio.h>

int main(void)
{
	int fs, m;
	char dj;

	printf("please input the score(0-100): ");

	scanf("%d", &fs);
	m = fs / 10;

	switch (m)
	{
		case 10:
		case 9:
			dj = 'A';
			break;
		case 8:
			dj = 'B';
			break;
		case 7:
			dj = 'C';
			break;
		case 6:
			dj = 'D';
			break;
		case 5:
			dj = 'E';
			break;
		case 4:
			dj = 'F';
			break;
		case 3:
			dj = 'G';
			break;
		case 2:
			dj = 'H';
			break;
		case 1:
			dj = 'I';
			break;
		case 0:
			dj = 'J';
			break;
		default :
			dj = 'X';
	}
	printf("\nscore=%d, grade=%c", fs, dj);
	return 0;
}

*/
