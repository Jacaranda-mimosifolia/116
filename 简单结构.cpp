//简单结构 
结构(structure)，由一个或多个变量(member)构成的集合，可以是不同类型;
使用struct声明结构，后接标签(tag)或类型名(type name) 

struct 标签 
{
	结构成员;
	... 
}实例; 

使用结构：
结构模板：
1.struct tag instance;
声明实例： 
2.first,second; 

//1.声明实例 
struct coord
{
	int x;
	int y;
}first,second;//first,second为coord的实例(instance) 

//2.结构模板 
struct coord
{
	int x;
	int y;
};
struct coord first,second;//结构模板 

结构名.成员名(.) 
结构成员运算符(structure member operator) 
点运算符(dot operator) 
first.x=50;
first.y=100;

first=second;//可以快速拷贝 
