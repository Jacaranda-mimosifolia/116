//复杂结构 
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
//mybox 结构包含了coord 结构；
//1.不必在模板coord后声明，要在mybox中声明；
//2.除了int类型，也可以是char，short等类型；

struct demo
{
	int array1[100];
	char array2[100];
}array;
//demo 结构包含了array1和array2两个数组，可以用多种方法来给它们传参； 

