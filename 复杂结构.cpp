//���ӽṹ 
struct coord
{
	int x;
	int y;
};
struct mybox
{
	struct coord A;
	struct coord B;
}rectangle;
A(rectangle.A.x,rectangle.A.y);
B(rectangle.B.x,rectangle.B.y);
//mybox �ṹ������coord �ṹ��
//1.������ģ��coord��������Ҫ��mybox��������
//2.����int���ͣ�Ҳ������char��short�����ͣ�

struct demo
{
	int array1[100];
	char array2[100];
}array;
//demo �ṹ������array1��array2�������飬�����ö��ַ����������Ǵ��Σ� 

