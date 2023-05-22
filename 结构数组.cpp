//结构数组 
结构体的数组
struct demo
{
	char name[10];
	char numble[10];
}array[10];
//相当于有十个学生，创建十个变量demo，每个demo里包含name和numble，也就是一共有十个学生的信息模板 
例如：
array[0].name="Tom";array[0].numble="22110941";
array[1].name="Jerry";array[1].numble="21110941";
//1.strcpy()
//2.指针
//3.赋值array[0].numble[3]=array[1].numble[4];
//3.移动array[3]=array[2]; 
