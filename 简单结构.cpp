//�򵥽ṹ 
�ṹ(structure)����һ����������(member)���ɵļ��ϣ������ǲ�ͬ����;
ʹ��struct�����ṹ����ӱ�ǩ(tag)��������(type name) 

struct ��ǩ 
{
	�ṹ��Ա;
	... 
}ʵ��; 

ʹ�ýṹ��
�ṹģ�壺
1.struct tag instance;
����ʵ���� 
2.first,second; 

//1.����ʵ�� 
struct coord
{
	int x;
	int y;
}first,second;//first,secondΪcoord��ʵ��(instance) 

//2.�ṹģ�� 
struct coord
{
	int x;
	int y;
};
struct coord first,second;//�ṹģ�� 

�ṹ��.��Ա��(.) 
�ṹ��Ա�����(structure member operator) 
�������(dot operator) 
first.x=50;
first.y=100;

first=second;//���Կ��ٿ��� 
