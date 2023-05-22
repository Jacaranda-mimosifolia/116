//初始化结构 
1.要用逗号隔开初始化数据！！ 
2.注意作用域，建议用初始化模板的方法 
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
struct demo2 demo[2]=//初始化结构 (模板)
{
	{//demo[0]; 
		{"TOM",{1,2,3,4,5,6}},//item
		"hello"//length[]]
	},//注意：要用逗号隔开！！ 
	{//demo[1];
		{"Jrrry",{1,2,3,4,5,6}},
		"world"
	}
}; 
