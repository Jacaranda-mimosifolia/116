//��ʼ���ṹ 
1.Ҫ�ö��Ÿ�����ʼ�����ݣ��� 
2.ע�������򣬽����ó�ʼ��ģ��ķ��� 
struct demo1
{
	char name[10];
	int numble[10];
};

struct demo2
{
	struct demo1 item;
	char length[10];
};
struct demo2 demo[2]=//��ʼ���ṹ (ģ��)
{
	{//demo[0]; 
		{"TOM",{1,2,3,4,5,6}},//item
		"hello"//length[]]
	},//ע�⣺Ҫ�ö��Ÿ������� 
	{//demo[1];
		{"Jrrry",{1,2,3,4,5,6}},
		"world"
	}
}; 
