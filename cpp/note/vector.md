## vector的介绍
	vector是一种对象实体，能够容纳许多其他类型相同的元素,
	因此又被称为容器。属于STL中的一种自定义的数据类型。

## vector的声明和初始化
`vector<int> vec;` 			//声明一个int型的容器;<br>
`vector<int> vec(10);` 		//声明一个初始大小为10的int型容器;<br>
`vector<int> vec(10,1);` 	//声明一个初始大小为10且初始值都为1的容器;<br>
`vector<int> a(vec);` 		//声明并用容器vec初始化a;<br>
`vector<int> b(a.begin(),a.begin()+3);` //声明并将容器a的第0个到第2个作为容量b的初始化;

除此之外，还有直接使用数组来初始化容器<br>
`int n[] = { 1, 2, 3, 4, 5 };`<br>
`vector<int> a(n,n+5);`<br>
`vector<int> a(&n[1], &n[4]);`

## vector的基本操作
`vector.size();`<br>
`vector.clear();`<br> 
`a=b;`<br>
`a==b;`<br>

##### 插入操作
`vector.insert(a.begin(), 1000);`<br>
`vector.insert(a.begin(), 3, 1000);`<br>
`1. vector<int> a(5, 1);`<br>
`2. vector<int> b(10);`<br>
`3. a.insert(b.begin(), a.begin(), a.end());`<br>

##### 删除操作
`b.erase(b.begin());`<br>
`b.erase(b.begin(), a.begin()+3);`<br>

##### 交换操作
`b.swap(a);`

## 二维容器
`vector <vector<int>> vec(10, vector<int>(5));`<br>
// 创建一个10*5的int型二维容器;
