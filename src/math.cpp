#include <iostream>
#include <array>
#include <string>
//void Log(const char* message);
// int Multiply(int a, int b) {
//	Log("Multiply");
//	return a * b;
//}
//int main() 
//{
//	/*std::cout << Multiply(5, 8) << std::endl;*/
//	std::cin.get();
//#include "EndBrace.h"
//// //证明 #include 仅仅是复制粘贴
//int main()
//{
//	int a = 8;
//	a++;
//	const char* c = nullptr;
//	if (c)
//	{
//		std::cout << c << std::endl;
//	}
//	else if(a==9) //"else if" is just that "else" and "if" in the same line;
//	{
//		a++;
//		std::cout << a << std::endl;
//	}
//	else
//	{
//		std::cout << a << std::endl;
//	}
//	std::cin.get();
//} 
//int main()
//{
//	for (int i = 0; i < 5; i++) //第三部分是下一次循环前会执行的代码
//	{
//		std::cout << "Hello World!" << std::endl;
//		std::cout << i << std::endl;
//	}
//	// i是临时变量
//	// std::cout << i << std::endl;  ->error C2065: “i”: 未声明的标识符
//	//  equal
//	int i = 0;
//	for (; i < 5; ) //第三部分是下一次循环前会执行的代码
//	{
//		std::cout << "Hello World!" << std::endl;
//		i++;
//	}
//	// equal
//	i = 0;
//	bool flag = true;
//	for (; flag; ) //第三部分是下一次循环前会执行的代码
//	{
//		std::cout << "Hello World!" << std::endl;
//		i++;
//		if (!(i < 5)) flag = false;
//	}
//	std::cin.get();
//}
//int main ()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		std::cout << "iloveyou" << std::endl;
//		i++;
//	}
//	
//	do // 至少执行一次
//	{
//		std::cout << "metoo" <<std::endl;
//	} while (false);
//	std::cin.get();
//}

// 15 continue break return
//int main()
//{
//	for (int i = 0; i < 5; i++) //第三部分是下一次循环前会执行的代码
//	{
//		if (i > 2)
//			continue; // 只要运行到 continue 就开始了下一次循环的迭代
//		std::cout << "Hello World!"<<std::endl;
//		std::cout << i << std::endl;
//	}   
//}
// 16 pointer  所有类型的指针都是一个整数，存放一个内存地址,与类型无关
//int main()
//{ 
//	int var = 8;
//	int* ptr = &var;
//	*ptr = 10; 
//
//	std::cout << var << std::endl;
//	std::cin.get();
//}
//int main()
//{
//	char* buffer = new char[8]; // 8 bytes
//	memset(buffer, 0, 8); // 0x00
//	// 为指定区域分配数据 ptr,data,size
//	char** ptr = &buffer;
//
//	delete[] buffer;
//	
//	std::cin.get();
//}
//-----------------------
//void Increment(int value)
//{
//	value++;
//}
//void Increment2(int* value)
//{
//	(*value)++;
//}
//void Increment3(int& value)
//{
//	value++;
//}
//int main()
//{
//	int a = 8;
//	Increment(a); // a没有增加，只是value增加了
//	std::cout << a << std::endl;
//	Increment2(&a); // a增加,传地址
//	std::cout << a << std::endl;
//	Increment3(a); // a增加,传数值给引用
//	std::cout << a << std::endl;
//
//	int& ref = a; // 别名,这个 ref 变量并不真正存在，它只存在在我们的源码里
//	int b = 8;
//	std::cout << ref << std::endl;
//	// 还有一件重要的事就是一旦你声明了一个引用，你就不能更改它所引用的对象
//	//int& ref = b;
//	//std::cout << ref << std::endl;
//	//std::cin.get();
//	int* ref1 = &a;
//	*ref1 = 2;
//	ref1 = &b;
//	*ref1 = 100;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//}
//----------------

// 18 class:类是一种将数据和函数组织在一起的方式
//
//class Player
//{ // 默认情况下，类中的成员的访问控制都是私有的,意味着只有类内部的函数才能访问这些变量,需要public
//public:
//	int x, y;
//	int Speed;
//	// 类内的函数称作 method (方法)
//	void Move(int xa, int ya) 
//	{
//		x += xa;
//		y += ya;
//	}
//};
//int main() 
//{
//	Player player; // 由类类型制成的变量叫做对象,新创建的过程叫做实例化
//	player.x = 0;
//	player.y = 0;
//	player.Move(1, 1);
//}
//// C只有结构体而且结构体不能有方法，C++的结构体可以有方法,C++结构体和Class的唯一区别是前者默认public，后者默认private

// 20 Log Class
//class Log
//{
//public:
//	const int LogLevelError = 0;
//	const int LogLevelWarning = 1;
//	const int LogLevelInfo = 2;
//private:
//	int m_LogLevel = LogLevelInfo; // m 前缀 A 一般表明这是个私有的类成员变量
//public:
//	void SetLevel(int level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if (m_LogLevel >= LogLevelError)
//		std::cout << "[ERROR]:" << message << std::endl;
//	}
//
//	void Warn(const char* message)
//	{
//		if (m_LogLevel >= LogLevelWarning)
//		std::cout << "[WARNING]:" << message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= LogLevelInfo)
//		std::cout << "[INFO]:" << message << std::endl;
//	}
//
//
//
//
//};
//int main()
//{
//
//	Log log;
//	log.SetLevel(log.LogLevelInfo);
//	log.Warn("Hello!");
//	log.Error("World!");
//	log.Info("Iloveyou!");
//	std::cin.get();
//}
// 21 static: 类外的 static 修饰的符号在 link 阶段是局部的 , 也就是它只对定义它的编译单元 (. ob) 可见
//    而类或者结构体里面的 static , 表示这部分内存是这个类的所有实例共享的,简单来说，就算你实例化了很多
//    次这个类或结构体 , 但那个静态 (static) 变量只会有一个实例
// s 开头的命名表示这个变量是 staticl 的

/*在C++中，static关键字有多种用途，但主要用于控制变量的存储期和可见性。这里讨论的是static在类外和类内使用时的不同含义。
类外的static
当static用于类外的全局变量或函数时，它将该变量或函数的链接性从外部链接性改为内部链接性。这意味着这些静态全局变量或函数
只在定义它们的编译单元（通常是一个.cpp文件及其包含的头文件）内可见。即使其他编译单元声明了相同名称的外部变量或函数，它
们也是不同的实体。这有助于避免全局命名空间的污染，同时允许在不同的编译单元中使用相同的名称。
类内的static
当static用于类或结构体内部的成员变量时，它改变了成员变量的存储期和作用域。这样的静态成员变量不属于类的任何单个实例，而
是由该类的所有实例共享。无论创建了多少个类的实例，静态成员变量只有一个副本。这对于存储类级别的状态（例如，计数类的实例
数量）非常有用。
静态成员函数也类似，它们不属于类的任何单个实例。因此，静态成员函数只能访问类的静态成员变量和其他静态成员函数。它们不能
访问类的非静态成员变量或函数，因为这些成员需要一个类的实例才能存在。*/

//extern int s_Variable; // If Static.cpp contains the static keyword, there will be an error.
//void Function()
//{
//
//}
//// 尽量让全局函数和变量用 static 标记
//int main() 
//{
//	
//	std::cout << s_Variable << std::endl;
//	std::cin.get();
//}

//struct Entity
//{
//	static int x;
//	static int y;
//	static void Print() // 静态方法不能访问非静态变量
//	{
//		std::cout << x << "," << y << std::endl;
//	}
//};
//
//int Entity::x;
//int Entity::y;
//int main()
//{
//	Entity e;
//	Entity::x = 2;
//	Entity::y = 3;
//	Entity::Print();
//
//	Entity e1;
//	Entity::x = 5;
//	Entity::y = 8;
//	Entity::Print();
//
//	std::cin.get();
//}
// 22
//struct Entity
//{
//	int x;
//	int y;
//	static void Print() // 静态方法不能访问非静态变量  静态方法没有那个隐藏参数 (this)
//	{
//		std::cout << x << "," << y << std::endl;
//	}
//};
//
//static void Print(Entity e) // 非静态方法的真正运行方式
//{
//   std::cout << e.x << ", " << e.y << std::endl;
//}
//
//int main()
//{
//	Entity e;
//	e.x = 2;
//	e.y = 3;
//	Print(e); 
//
//	Entity e1;
//	e1.x = 5;
//	e1.y = 8;
//	Print(e1);
//
//	std::cin.get();
//}

// git:
/* 提取（fetch）：从远程获取最新版本文件到本地，不自动合并，最新版本在“分支”选项中
“remotes/origin”文件夹下可以查看，可以选择将其合并到master分支上。

拉取（pull）从远程仓库拉取最新版本文件到本地，自动合并/merge。

这二者的区别是提取（pull）不会自动合并或覆盖本地代码，而是将其储存在分支选项卡中，
供开发者自行选择合并，可以避免云端与本地一些代码起冲突时的数据丢失。

而拉取（pull）则是暴力合并，如果该项目仅由你一人进行开发，那么用拉取（pull）更方便，
因为没有其他人的改动，但如果是和团队一起协作开发则建议用提取（fetch），避免引起不必
要的冲突。

推送即将本地仓库上传至云端，同步包括拉取和推送两个步骤。

同样地，如果是一人开发项目，或者仅仅是想同步本地代码到云端，那推送就足够了。

但如果是团队协作开发，那么强烈建议使用同步，即先拉取再推送，不然可能会出现项目中其他
部分未和最新的云端仓库保持一致的提示。*/

// 23 Local Static 
// 而静态局部 (local static) 变量允许我们声明一个变量,它的生命周期是整个程序的生存期,
// 但是作用域被限制在这个函数里

/*
所以 在你想要全局变量
又不想要任何人都能访问到这个变量时
你可以在局部作用域下面声明静态变量*/
//void Function ()
//{
//	static int i = 0;
//	int j = 0;
//	i++;
//	j++;
//	std::cout << i << std::endl;
//	std::cout << j << std::endl;
//}
//
//int main()
//{
//	Function();
//	Function();
//	std::cin.get();
//}

// 24 ENUMS 枚举 
// 默认情况下，第一个变量的值是 0，然后接下来变量会一个接一个的递增 (1,2,3.)
//enum Example :int 
//{
//	A = 5, B, C
//};
//int main()
//{
//	if (B == 6) 
//	{
//		std::cout << A << std::endl;
//	}
//	std::cin.get();
//}


//class Log
//{
//public:
//	enum level // 对于普通的枚举来说，Level 不是一个命名空间
//	{
//		levelError, levelWarning , levelInfo
//	};
//private:
//	level m_LogLevel = levelInfo; // m 前缀 A 一般表明这是个私有的类成员变量
//public:
//	void SetLevel(level level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if (m_LogLevel >= levelError)
//			std::cout << "[ERROR]:" << message << std::endl;
//	}
//
//	void Warn(const char* message)
//	{
//		if (m_LogLevel >= levelWarning)
//			std::cout << "[WARNING]:" << message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= levelInfo)
//			std::cout << "[INFO]:" << message << std::endl;
//	}
//};
//int main()
//{
//
//	Log log;
//	log.SetLevel(Log::levelError);
//	log.Warn("Hello!");
//	log.Error("World!");
//	log.Info("Iloveyou!");
//	std::cin.get();
//}

// 25 构造函数 : 构造函数是一种特殊的方法，它在类每次实例化的时候运行,它的命名必须和类名
// 一样

//class Entity
//{
//public:
//	float X, Y;
//
//	Entity() // 默认会有一个什么也不做的构造函数
//	{
//		X = 0.0f;
//		Y = 0.0f;
//	}
//// 我可以写很多个构造函数,但是要给他们提供不同的参数，这个我写同名方法是一
////  样的,其实这叫函数重载，就是相同的函数名有不同的参数的不同版本函数,
//	Entity(float x, float y) 
//	{
//
//		X = x;
//		Y = y;
//	}
//	void Print()
//	{
//		std::cout << X << "," << Y << std::endl;
//	}
//};
//class Log
//{
////隐藏构造函数
////1.
//private:
//	Log(){}
////2.
//	Log() = delete;
//};
//int main()
//{
//	Log l;
//	Entity e(10,5);
//	e.Print();
//
//}

// 26 析构函数(destructor)
// 在任何时候，当一个对象被销毁的时候，析构函数都会被调用
//class Entity
//{
//public:
//	float X, Y;
//
//	Entity() // 默认会有一个什么也不做的构造函数
//	{
//		X = 0.0f;
//		Y = 0.0f;
//		std::cout << "Created Entity !" << std::endl;
//	}
//	
//
//	~Entity()
//	{
//		std::cout << "Destroyed Entity !" << std::endl;
//	}
//	void Print()
//	{
//		std::cout << X << "," << Y << std::endl;
//	}
//};
//void Function()
//{
//	Entity e;
//	e.Print();
//}
//int main()
//{
//	Function();
//	std::cin.get();
//}
//
// 27 继承
//class Entity
//{
//public:
//	float X, Y;
//
//	void Move(float xa, float ya)
//	{
//		X = X + xa;
//		Y = Y + ya;
//	}
//};
//class Player : public Entity
//{
//public:
//	const char* Name;
//
//	void PrintName()
//	{
//		std::cout << Name << std::endl;
//	}
//};
//int main()
//{
//	std::cout << sizeof(Player) << std::endl;
//	Player e;
//	e.Move(1,2);
//	e.PrintName();
//
//
//
//	std::cin.get();
//
//}

// 28 虚函数 ：虚函数可以让我们在子类中重写方法，B是A的子类，如果我们在A类里新建一个方
// 法并把它标记为虚函数，我们可也在 B 类中重写这个方法让去做些其他的事情。
//class Entity
//{
//public:
//	virtual std::string GetName() { return "Entity"; }
//	// 如果没有 virtual，会打印两次"Entity",原因是如果我们在类中正常声明函数或方法,当调用这个
//	// 方法的时候，它总是会去调用属于这个类型的方法,看看这个PrintName函数，它的参数
//	// 类型是Entity*,意味着它会调用Entity内部的GetName函数，它只会在Entity的内部寻
//	// 找和调用GetName
//
//};
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//public:
//	Player(const std::string& name) { m_Name = name; }
//	std::string GetName() { return m_Name; }
//
//};
//
//void PrintName(Entity* entity)
//{
//	std::cout << entity->GetName() << std::endl;
//}
//int  main ()
//{
//	Entity* e = new Entity();
//	PrintName(e);
//
//	Player* p = new Player("YUAN");
//	PrintName(p);
//	std::cin.get();
//
//}
// 29 纯虚函数:在面向对象程序设计中，创建一个只包含未实现方法,然后交由子类去实际实现功能的类是非常普遍的

//class Entity
//{
//public:
//	virtual std::string GetName() = 0; // =0 实际上将它变成了一个纯虚函数,不可实例化,如课你想实例化这个类，那么这个函数必须
//									   // 在子类中实现,未实现此方法的子类也不允许实例化,你只能实例化一个实现了所有纯虚函数的类
//
//};
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//public:
//	Player(const std::string& name) { m_Name = name; }
//	std::string GetName() { return m_Name; }
//	void Sample() 
//	{
//
//	}
//
//};
//
//void PrintName(Entity* entity)
//{
//	std::cout << entity->GetName() << std::endl;
//}
//int  main ()
//{
//
//
//	Player* p = new Player("YUAN");
//	PrintName(p);
//	std::cin.get();
//
//}
// -------------------------
//class Printable
//{
//public:
//	virtual std::string GetClassName() = 0;
//};
//class Entity : public Printable
//{
//public:
//	virtual std::string GetName() { return "Entity"; }
//	std::string GetClassName() override { return "Entity"; }
//};
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//public:
//	Player(const std::string& name) { m_Name = name; }
//	std::string GetName() { return m_Name; }
//	std::string GetClassName () override {return "Player";}
//	// 如果子类没有重写父类的方法，就按父类的方法打印
//};
//void Print(Printable* obj)
//{
//	std::cout << obj->GetClassName() << std :: endl;
//}
//
//int main()
//{
//	Entity* e = new Entity();
//	Entity* p = new Player("YUAN");
//	Print(e);
//	Print(p);
//	//Print(new A());
//	std::cin.get();
//}
// 30 可见性 private, protected, public
// 父类的private只有自己和friend可以访问，连子类也不行
// protected的意思是这舍兴以及它的所有派生类都可以访问到这些成员

// 31 数组
//class Entity
//{
//public:
//	int* MemoryIndirection = new int[5];
//	Entity ()
//	{
//		int a[5];
//		int count = sizeof(a) / sizeof(int); // 栈可以用这种方式计算大小，sizeof(a)得到20
//		int MemoryIndirectioncount = sizeof(MemoryIndirection) / sizeof(int); // 堆不能用这种方式计算大小
//		// sizeof(MemoryIndirection) 得到了这个指针大小4
//	    for (int i = 0; i < 5; i++)
//		{
//			MemoryIndirection[i] = 2;
//			
//		}
//		std::cout << count << std::endl;
//		std::cout << MemoryIndirectioncount << std::endl;
//	}
//
//};
//int main()
//{
//	int example[5];
//	int* ptr = example;
//
//	for (int i = 0; i < 5; i++)
//	{
//		example[i] = 2;
//	}
//	example[2] = 5;
//	*(ptr + 2) = 6; // 这么做是因为，处理指针时，只要在指针上加上像2这样的值
//					//它会根据数据类型来计算实际的字节数所以在这里因为这个指
//					// 针是整形指针所以会是加上2乘以4，因为每个整形是4字节
//	*(int*)((char*)ptr + 8) = 9;
//
//	std::cout << example[2] << std::endl;
//	std::cout << example << std::endl;
//	int* another = new int[5]; //创建在堆上，它会一直存活到直到我们把它销毁或者程序结束
//	delete[] another;
// /* 如果你有个函数要返回新创建的数组，那么你必须要使用new来分配，
//除非你传入的参数是一个内存地址 */
//// 另一件要考虑的是memory indirection(内存间接寻址) 
//	Entity e;
//
////  Cherno's method
//	static const int exampleSize = 5;
//	int chernoexample[exampleSize];
//
////  std::array 
//	std::array<int, 100> stdarray;
//	std::cout << stdarray.size() << std::endl;
//	std::cin.get();
//}
// 32 字符串 字符串是char组成的数组
//void Printstring(std::string string)
//{
//	string + "h";
//	std::cout << string << std::endl;
//	// 创建的是字符串的拷贝
//}
//
//void Printstring(const std::string& string)
//{
//	string + "h";
//	std::cout << string << std::endl;
//	// 创建的是字符串的拷贝
//}
//
//int main()
//{
//	std::cout << sizeof(char) << std::endl;
//	std::cout << sizeof(int) << std::endl;
//	const char* name = "ch";  // C++中的字符是用单引号，不是双引号，双引号默认是 char 指针
//	// 内存为 ab a9 00 有个空终止符,内存结束的位置
//	char name2[7] = { '0','h','\0','r','n','o', 0};
//	std::cout << name2 << std::endl;
//
//	std::string name3 = "BAGA";
//	std::cout << name3 << std::endl;
//	// 字符串追加 
//	std::string name4 = "Cherno"; // 初始化字符串
//	name4 += "hello!"; // 使用 += 运算符拼接字符串
//	std::cout << name4 << std::endl;
//	std::string name5 = std::string("Cherno") + "hello!";
//	std::cout << name5 << std::endl;
//
//
//}
//// 33 字符串字面量
//int main()
//{
//	const char* name = "Cherno";  // 指针定义
//	std::cout << name << std::endl;
//
//	char name2[] = "Cherno"; // 数组定义
//	name2[2] = 'a';
//	//name[2] = 'a'; 不允许修改const char*以及char*
//	std::cout << name2 << std::endl;
//	
//	const wchar_t* name3 = L"cherno"; //宽字符
//	const char16_t* name4 = u"Cherno"; 
//	//or
//	const char* name5 = u8"Cherno";  // 指针定义
//	const char32_t* name6 = U"Cherno";
//	using namespace std::string_literals;
//	std::string name7 = "Cherno"s + "yuan";
//	const char* name8 = R"(line1
//line2)";
//	// ==
//	const char* name9 = "Line1\n"
//		"Line2\n"
//		"Line3\n";
//	std::cout << name8 << std::endl;
//	std::cout << name9 << std::endl;
//
//	std::cin.get();
//}
//// 34 const : 承诺不变
////    1. 保持常量不变
////		const int MAX AGE 90;
////    2. 保证指针的内容不变（不保证指针指向的位置不变）
////      const int* a = new int;
////       保证指针的位置不变（不保证内容）
////      int* const a = new int;
////      const int＊和 int const＊是同一个意思
////      const int* const a 
////    3. 类中的const
////      把const放在方法名的右边，在参数列表的后面写上const
////      顺便说一下，这只有在类里才能这么用，意味着这个方法只
////      能从类中读取数据，不能修改数据
//class Entity {
//private:
//	int m_X, m_Y;
//	int* m_x, * m_y; //定义了两个指针
//	int* x, y;//定义了1个指针,1个int
//	mutable int var; //如果我们把var设置为mutable，你会看到即使在const方法中我们也可以修改的
//public:
//	int GetX() const 
//	{
//		var = 3;
//		return m_X;
//	}
//	int GetX() 
//	{
//		return m_X;
//	}
//};
//void PrintEntity(const Entity& e) 
//{
//	std::cout << e.GetX() << std::endl;
//}
//// 我没有直接修改Entity, 但是我调用了一个可以修改Entity的方法，这是不允许的
//// 在这种情况下，它将使用GetX的const版本，否则它会用另一个

// 35 mutable : 1.把类成员标记为 mutable，意味着类中的 const 方法可以修改这个成员
//              2.
	               //int x = 8;
	               //auto f = [=]() mutable {
	               //	x++;
	               //	std::cout << x << std::endl;
	               //};
// 36 构造函数初始化列表
// 第一种初始化方法:会造成性能浪费
//class Entity 
//{
//private:
//	std::string m_Name; //第一次创建
//public:
//	Entity() 
//	{
//		m_Name = "Unknown"; //第二次创建
//	}
//	Entity(const std::string& name)
//	{
//		m_Name = name;
//	}
//	const std::string& GetName() const
//	{
//		return m_Name;
//	}
//};
//int main()
//{
//	Entity e0;
//	std::cout << e0.GetName() << std::endl;
//
//	Entity e1("Cherno");
//	std::cout << e1.GetName() << std::endl;
//
//	std::cin.get();
//}
//
//class Entity
//{
//private:
//	std::string m_Name;
//	int m_Score;
//public:
//	Entity():m_Name("Unknown"), m_Score(0) // 必须按照定义顺序初始化
//	{
//
//	}
//
//	Entity(const std::string& name):m_Name(name)
//	{
//
//	}
//	const std::string& GetName() const
//	{
//		return m_Name;
//	}
//};
//int main()
//{
//	Entity e0;
//	std::cout << e0.GetName() << std::endl;
//
//	Entity e1("Cherno");
//	std::cout << e1.GetName() << std::endl;
//
//	std::cin.get();
//}
// 37 三元运算符
// s_Speed = s_Level > 5 ? 10 : 5;
// std:: string rank = s_Level > 10 ? "Master" : "Beginner";
// 嵌套 s_Speed = s_Level > 5 ? s_Level > 10 ? 15:10:5;
// 38 创建对象
//class Entity
//{
//private:
//	std::string m_Name;
//	int m_Score;
//public:
//	Entity() :m_Name("Unknown"), m_Score(0) // 必须按照定义顺序初始化
//	{
//
//	}
//
//	Entity(const std::string& name) :m_Name(name)
//	{
//
//	}
//	const std::string& GetName() const
//	{
//		return m_Name;
//	}
//};
//
//void Function()
//{
//	Entity entity = Entity("Cherno");
//}
//// 如果调用函数，那么到这个大括号entity就会被销毁
//// 让我们来写一些会运行失败的代码，作用域不一定非要
//// 是函数也可以是if语句，甚至是空作用域，就像这样只
//// 有一对花括号{}
//int main()
//{
//	//调用方式1:栈上调用
//	//什么时候栈分配？几乎任何时候，因为在C++中这是初始化对象最快的方式和最受管控的方式。
//	//什么时候不栈分配？ 如果创建的对象太大，或是需要显示地控制对象的生存期，那就需要堆上创建
//	Entity entity0;
//	std::cout << entity0.GetName() << std::endl;
//	Entity entity1("yuan");
//	std::cout << entity1.GetName() << std::endl;
//	Entity entity2 = Entity("Cherno");
//	std::cout << entity2.GetName() << std::endl;
//
//	Entity* e;
//	{
//		Entity entity3("yuan");
//		e = &entity3;
//
//	}//到这e就失效
//	//调用方式2：堆上调用
//	Entity* entity4 = new Entity("CHINESE");
//	
//	{
//		e = entity4;
//
//	}
//	std::cout << e->GetName() << std::endl;
//	delete entity4;// 到这里e才被销毁
//
//
//	std::cin.get();
//}

// 39-44
// 39 new
//class Entity
//{
//private:
//	std::string m_Name;
//	int m_Score;
//public:
//	Entity() :m_Name("Unknown"), m_Score(0) // 必须按照定义顺序初始化
//	{
//
//	}
//
//	Entity(const std::string& name) :m_Name(name)
//	{
//
//	}
//	const std::string& GetName() const
//	{
//		return m_Name;
//	}
//};
//int main()
//{
//	int* a = new int;
//	int* b = new int[50];
//	delete a;
//	delete[] b;
//	Entity* e = new Entity();
//	Entity* e = new Entity;
//	Entity* e0 = new Entity[50];//Entity数组
//	delete e;
//	delete[] e0;
//	Entity* e = new Entity();//1.分配内存 2.调用构造函数
//	Entity* e = (Entity*)malloc(sizeof(Entity);
//	//仅仅只是分配内存**然后给我们一个指向那个内存的指针
//	//这两行代码之间仅有的区别就是第一行代码new调用了
//	// Entity的构造函数
//	delete e;//手动清除
//
//	int* b = new int[50];
//	Entity* entity = new(b) Entity();
//	// 手动分配地址
//}

// 40 C++隐式转换与explicit关键字
//class Entity
//{
//private:
//    std::string m_Name;
//    int m_Age;
//public:
//    Entity(const std::string& name)
//        : m_Name(name), m_Age(-1) {}
//
//    Entity(int age)
//        : m_Name("Unknown"), m_Age(age) {}
//};
//
//int main()
//{
//    Entity test1("lk");
//    Entity test1(23);
//    Entity test3 = "lk";// 错误，隐式转换只能进行一次
//    // const char[] ->string->Entity
//    Entity test4 = std::string("lk");
//    Entity test5 = 23; //发生隐式转换
//    // explicit会禁用隐式转换
//
//}
//
//class Entity
//{
//private:
//    std::string m_Name;
//    int m_Age;
//public:
//    Entity(const std::string& name)
//        : m_Name(name), m_Age(-1) {}
//
//    explicit Entity(int age)  //声明为explicit
//        : m_Name("Unknown"), m_Age(age) {}
//};
//
//int main()
//{
//
//    Entity test5 = 23; //error！禁用隐式转换
//    Entity test5 = (Entity)23; //没有隐式转换
//
//    std::cin.get();
//}
// 41 C++运算符(操作符)及其重载
//无重载：
//struct Vector2
//{
//	float x, y;
//	Vector2(float x, float y):x(x),y(y)
//	{
//
//	}
//	Vector2 Add(const Vector2& other)const
//	{
//		return Vector2(x + other.x, y + other.y);
//	}
//	Vector2 Multiply(const Vector2& other)const
//	{
//		return Vector2(x * other.x, y * other.y);
//	}
//
//};
//int main()
//{
//	Vector2 position(4.0f, 6.0f);
//	Vector2 speed(0.5f, 1.5f);
//	Vector2 powerup(1.1f, 1.1f);
//	Vector2 result1 = position.Add(speed.Multiply(powerup));// 无重载可读性较差
//
//}
//重载+和*
//struct Vector2
//{
//	float x, y;
//	Vector2(float x, float y) :x(x), y(y)
//	{
//
//	}
//	Vector2 Add(const Vector2& other)const
//	{
//		return Vector2(x + other.x, y + other.y);
//	}
//	Vector2 operator+(const Vector2& other)const
//	{
//		return Add(other);//把“+”变成函数实现，简化代码
//	}
//	Vector2 Multiply(const Vector2& other)const
//	{
//		return Vector2(x * other.x, y * other.y);
//	}
//	Vector2 operator*(const Vector2& other)const
//	{
//		return Multiply(other);//把“+”变成函数实现，简化代码
//	}
//	bool operator== (const Vector2& other) const
//	{
//		return x == other.x && y == other.y;
//	}
//	bool operator!= (const Vector2& other) const
//	{
//		// this 是一个指针
//		return !(*this == other);
//	}
//
//};
//
//std::ostream& operator<< (std::ostream& stream, const Vector2& other)//第一个接受cout,第二个接受Vector2
//{
//	stream << other.x << "," << other.y;
//	return stream;
//}
//int main()
//{
//	Vector2 position(4.0f, 6.0f);
//	Vector2 speed(0.5f, 1.5f);
//	Vector2 powerup(1.1f, 1.1f);
//	Vector2 result1 = position+speed*powerup;// 无重载可读性较差
//	std::cout << result1 << std::endl; //C++ 没有与这些操作数匹配的运算符 操作数类型为:  std::ostream << Vector2
//	//因此要重载<<
//}
//// == 和 != 的重载
// 
//42 this
//C++中有this关键字，通过他我们可以访问成员函数，成员函数就是属于某个类的函数或方法。
//this在一个const函数中，this是一个const Entity * const或者是const Entity*, 在一个非const函数中，那么它就是一个Entity* 类型的
//在函数内部，我们可以引用this，this是指向这个函数所属的当前对象实例的指针
//class Entity 
//{
//public:
//	int x, y;
//	Entity(int x, int y):x(x), y(y) 
//	{
//
//	}
//	//or
//	Entity(int x, int y) 
//	{
//		this->x = x;
//		//等价于
//		Entity* e = this;
//		e->x = x;
//	}
//	int Get() const
//	{
//		const Entity* e = this;//ok
//		e->x = 5;//ERROR！函数不能具有修改功能
//
//
//	}
//};
//另一个用到的场景就是，如果我们想要调用这个Entity类外面的函数，
//他不是Entity的方法，但是我们想在这个类内部调用一个外部的函数，
//然后这个函数接受一个Entity类型作为参数，这时候就可以使用this
//class Entity;  //前置声明。
//void PrintEntity(Entity* e); //在这里声明
//class Entity
//{
//public:
//    int x, y;
//    Entity(int x, int y)
//    {
//        // Entity* e = this;
//        this->x = x;
//        this->y = y;
//        PrintEntity(this); //我们希望能在这个类里调用PrintEntity,就可以传入this，这就会传入我已经设置了x和y的当前实例
//    }
//};
//void PrintEntity(Entity* e) //在这里定义
//{
//    //print something
//}

//or
//class Entity
//{
//public:
//    int x, y;
//    Entity(int x, int y)
//    {
//        // Entity* e = this;
//        this->x = x;
//        this->y = y;
//        PrintEntity(*this); //解引用
//    }
//};
//void PrintEntity(const Entity& e) //在这里定义
//{
//    //print something
//}
//void PrintEntity(const Entity& e);
//class Entity
//{
//public:
//    int x, y;
//    Entity(int x, int y)
//    {
//        // Entity* e = this;
//        this->x = x;
//        this->y = y;
//        Entity& e = *this;  //在非const函数里通过解引用this，我们就可赋值给Entity&
//        PrintEntity(*this); //解引用this
//    }
//    int GetX() const
//    {
//        const Entity& e = *this; //在const方法中，我们会得到一个const引用
//    }
//};
//void PrintEntity(const Entity& e)
//{
//    //print something
//}
// 43 生存期
// 如下代码，因为我们没有使用new关键字，所以他不是在堆上分
// 配的，我们只是在栈上分配了这个数组，当我们返回一个指向
// 他的指针时(return array)，也就是返回了一个指向栈内存
// 的指针，旦离开这个作用域（CreateArray函数的作用域），
// 这个栈内存就会被回收
//int CreateArray()
//{
//	int array[50];  //在栈上创建的
//	return array;
//}
//int main()
//{
//	int* a = CreateArray(); //不能正常工作
//}
//
// 正确做法1：
//int* CreateArray()
//{
//	int* array = new int[50];  //在堆上创建的
//	return array;
//}
//// 正确做法2：将创建的数组赋值给一个在这个作用域外的变量
//int CreateArray(int* array)
//{
//	//填充数组
//}
//int main()
//{
//	int array[50];
//	CreateArray(array); //不能正常工作
//}
//class Entity
//{
//private:
//
//public:
//    Entity()
//    {
//        std::cout << "Create!" << std::endl;
//    }
//    ~Entity()
//    {
//        std::cout << "Destroy!" << std::endl;
//    }
//};
//
//class ScopedPtr
//{
//private:
//    Entity* m_Ptr;
//public:
//    ScopedPtr(Entity* ptr)
//        : m_Ptr(ptr)
//    {
//    }
//
//    ~ScopedPtr()
//    {
//        delete m_Ptr;
//    }
//};
//
//int main()
//{
//    {
//        ScopedPtr test = new Entity();  
//        //发生隐式转换  。虽然这里是new创建的，但是不同的是一旦超出这个作用域，
//        // 他就会被销毁。因为这个ScopedPtr类的对象是在栈上分配的
//    }
//    //ScopedPtr test = new Entity();
//    //这里的 new Entity() 创建了一个 Entity 对象并返回一个指向该对象的指针，类型为 Entity* 。然后这个指针被隐式转换为一个 ScopedPtr 对象。
//    //具体来说，这里发生了从 Entity* 到 ScopedPtr 的隐式转换，这种转换通过 ScopedPtr 类的构造函数来实现：
//    //ScopedPtr(Entity * ptr)
//    //    : m_Ptr(ptr)
//    //{
//    //}
//    //这意味着 new Entity() 返回的指针被传递给 ScopedPtr 的构造函数，构造函数将该指针赋值给其成员变量 m_Ptr。当 test 这个 ScopedPtr 对象超出
//    //作用域时，其析构函数被调用，进而删除 m_Ptr 指向的 Entity 对象，确保资源被正确释放。
//    std::cin.get();
//}
// 44 智能指针
//1.unique_ptr
// 要访问所有这些智能指针，你首先要做的是包含memory头文件
// unique_ptr是作用域指针，意味着超出作用域时，它会被销毁
//    然后调用delete。
// unique_ptr是唯一的，不可复制，不可分享。
// unique_ptr构造函数实际上是explicit的，没有构造函数的
//    隐式转换,需要显式调用构造函数。
//#include <memory>
//class Entity
//{
//private:
//
//public:
//    Entity()
//    {
//        std::cout << "Create!" << std::endl;
//    }
//
//    ~Entity()
//    {
//        std::cout << "Destroy!" << std::endl;
//    }
//    void Print() {}
//};
//
//int main()
//{
//    {
//        std::unique_ptr<Entity> entity = new Entity(); //error!unique_ptr不能隐式转换
//        std::unique_ptr<Entity> entity(new Entity()); //可以但不建议
//        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
//        entity->Print();  //像一般原始指针使用
//
//
//    }
//}
// 2.shared_ptr
//std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();//ok
//3. weak_ptr
//std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
// --------------------------
//45 C++的拷贝与拷贝构造函数
// 声明格式
////声明：
//T(const T& var);
////定义
//T(const T& var) {
//	//函数体，进行深拷贝 分配空间放副本
//}
////不使用拷贝函数，禁止赋值
//T(const T& var) = delete;
// -----------------------
// 浅拷贝
// 浅拷贝的问题是如果对象中变量带有指针（或引用）,则会发生
// 错误.因为两个指针指向同一个内存,一个对象修改,另一个对象
// 的值也被更改了. 当在析构的时候,会发生两次free (double
// free)同一个内存，造成错误
//class String
//{
//private:
//	char* m_Buffer;
//	unsigned m_Size;
//public:
//	String(const char* string)
//	{
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size+1];
//		memcpy(m_Buffer, string, m_Size);
//		m_Buffer[m_Size] = 0;
//	}
//	~String()
//	{
//		delete[] m_Buffer;
//	}
//	char& operator[] (const unsigned index) //操作符重载,因为我们自己重构了String类,所以关于String的序列操作无法使用
//	{
//		return m_Buffer[index];
//	}
//	friend std::ostream& operator<< (std::ostream& stream, const String& string);
//	//把<<操作符重载函数声明为String类的友元，这样就可以在该重载函数中访问m_Buffer
//
//};
//std::ostream& operator<< (std::ostream& stream, const String& string)
//{
//	stream << string.m_Buffer;
//	return stream;
//}
//int main()
//{
//	String string = "Cherno";
//	String second = string;
//	std::cout << string << std::endl;
//	std::cout << second << std::endl;
//	std::cin.get(); //浅拷贝导致程序崩溃
//}
//为了解决这个问题，据需要使用拷贝构造函数
//class String
//{
//private:
//	char* m_Buffer;
//	unsigned m_Size;
//public:
//	String(const char* string)
//	{
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, string, m_Size);
//		m_Buffer[m_Size] = 0;
//	}
//	String(const String& other):m_Size(other.m_Size)
//	{
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
//	}
//	~String()
//	{
//		delete[] m_Buffer;
//	}
//	char& operator[] (const unsigned index) //操作符重载,因为我们自己重构了String类,所以关于String的序列操作无法使用
//	{
//		return m_Buffer[index];
//	}
//	friend std::ostream& operator<< (std::ostream& stream, const String& string);
//	//把<<操作符重载函数声明为String类的友元，这样就可以在该重载函数中访问m_Buffer
//
//};
//std::ostream& operator<< (std::ostream& stream, const String& string)
//{
//	stream << string.m_Buffer;
//	return stream;
//}
//int main()
//{
//	String string = "Cherno";
//	String second = string;
//	second[2] = 'a';
//	std::cout << string << std::endl;
//	std::cout << second << std::endl;
//	std::cin.get(); //深拷贝
//}
// --------------------------
// 46 ->
// 箭头运算符必须是类的成员。
// 一般将箭头运算符定义成了const成员，这是因为与递增和递
// 减运算符不一样，获取一个元素并不会改变类对象的状态。
//1. p->x 等价 (*p).x
//2. 重载操作符
//class Entity
//{
//private: 
//	int x;
//public:
//	void Print() const
//	{
//		std::cout << "Hello!" << std::endl;
//	}
//};
//class ScopedPtr
//{
//private:
//	Entity* m_Ptr;
//public:
//	ScopedPtr(Entity* ptr)
//		:m_Ptr(ptr)
//	{
//
//	}
//	~ScopedPtr()
//	{
//		delete m_Ptr;
//	}
//	Entity* operator->() const
//	{
//		return m_Ptr;
//	}
//};//
//int main()
//{
//	{
//		const ScopedPtr entity = new Entity();
//		entity->Print();
//		// 等效于 entity.operator->()->Print();
/*当你编写 entity->Print(); 时：

第一步：编译器看到 entity->，调用 entity 的 operator->() 成员函数。
第二步：operator->() 返回一个 Entity* 类型的指针（即 m_Ptr）。
第三步：编译器对返回的 Entity* 再次应用箭头操作符 ->，并调用 Print() 成员函数。
也就是说，编译器会将 entity->Print(); 解析为 entity.operator->()->Print();，并自动递归解引用直到找到实际的对象成员。这种递归解引用的行为允许使用自定义智能指针类型时，箭头操作符的使用方式与原生指针保持一致。

如果没有这种递归解引用机制，你将不得不手动多次调用 operator->()，这将导致代码的可读性和可维护性降低。

因此，entity->Print(); 被自动解析为 entity.operator->()->Print();，这就是为什么 entity 可以直接调用 Print() 的原因。
*/
//	}
//	std::cin.get();
//}
//3.计算成员变量的offset
//struct vec2
//{
//	int x, y;
//	float pos, v;
//};
//int main()
//{
//	int offset = (int)&((vec2*)nullptr)->v; // x,y,pos,v的offset分别为0,4,8,12
//	std::cout << offset << std::endl;
//	std::cin.get();
//}
// 47 动态数组
#include <vector>
/*
1.vector本质上是一个动态数组,是内存连续的数组
2.它的使用需要包含头文件#include <vector>
3.使用格式：
类型尽量使用对象而非指针。
std::vector<T> a；//T是一种模板类型，尽量使用对象
而非指针
*/
// 插入 a.push_back(element);
/*
struct Vertex
{
    float x, y, x;
}

std::vector<Vertex> vertices; //定义一个Vertex类型的动态数组
vertices.push_back({ 1, 2, 3 });//列表初始化（结构体或者类，可以按成员声明的顺序用列表构造）
vertices.push_back({ 4, 5, 6 });//同：vertices.push_back(Vertex(4, 5, 6)
vertices.push_back({ 7, 8, 9 });
*/
//遍历方式
//1.
//for (int i = 0; i < vertices.size(); i++)
//{
//	std::cout << vertices[i] << std::endl;
//}
//2.
// for (Vertex& v : vertices)
//{
//	std::cout << v << std::endl;
//}
// 清除:vertices.clear();
// 清楚指定元素: vertices.erase(vertices.begin()+1)
// 不修改时使用引用传参void Function(const std::vector<T>&vec) {};
//-----------------------
//48 动态数组的优化
//int i = 0;
//#define GLFW_DLL
//struct Vertex
//{
//    float x, y, z;
//    
//    Vertex(float x, float y, float z)
//        : x(x), y(y), z(z)
//    {
//    }
//
//    Vertex(const Vertex& vertex)
//        : x(vertex.x), y(vertex.y), z(vertex.z)
//    {
//        i++;
//        std::cout << i << std::endl;
//    }
//};

//int main()
//{
//    std::vector<Vertex> vertices;
//    vertices.push_back(Vertex(1, 2, 3)); // 同vertices.push_back({ 1, 2, 3 });
//    vertices.push_back(Vertex(4, 5, 6));
//    vertices.push_back(Vertex(7, 8, 9));
//    //vertices.push_back(Vertex(7, 8, 9)); // 复制10次
//    std::cin.get();
//}
// 复制了六次
/*
std::vector<Entity> e;
    Entity data1 = { 1,2,3 };
    e.push_back( data1); // data1->新vector内存
    Entity data2 = { 1,2,3 };
    e.push_back( data2 ); //data1->新vector内存   data2->vector新vector内存  删除旧vector内存
    Entity data3 = { 1,2,3 };
    e.push_back(data3);  // data1->新vector内存  data2->vector新vector内存  data3->vector新vector内存  删除旧vector内存
所以他的输出的次数分别是1，3，6
他的复制次数你可以这样理解递增。 1+2+3+4+5+....
*/
/*
问题1：当向vector数组中添加新元素时，为了扩充容量，当前的vector的内容会从内存中的旧位置复制到内存中的新位置(产生一次复制)，然后删除旧位置的内存。 简单说，push_back时，容量不够，会自动调整大小，重新分配内存。这就是将代码拖慢的原因之一。 解决办法： vertices.reserve(n) ，直接指定容量大小，避免重复分配产生的复制浪费。
问题2：在非vector内存中创建对象进行初始化时，即push_back() 向容器尾部添加元素时，首先会创建一个临时容器对象（不在已经分配好内存的vector中）并对其追加元素，然后再将这个对象拷贝或者移动到【我们真正想添加元素的容器】中 。这其中，就造成了一次复制浪费。 解决办法： emplace_back，直接在容器尾部创建元素，即直接在已经分配好内存的那个容器中直接添加元素，不创建临时对象。
*/
//int main()
//{
//    std::vector<Vertex> vertices;
//    //ver 1 : copy 6 times
//    vertices.push_back({ 1,2,3 });
//    vertices.push_back({ 4,5,6 });
//    vertices.push_back({ 7,8,9 });
//    i = 0;
//    //ver 2 : copy 3 times
//    vertices.reserve(3);
//    vertices.push_back({ 1,2,3 });
//    vertices.push_back({ 4,5,6 });
//    vertices.push_back({ 7,8,9 });
//    i = 0;
//    //ver 3 : copy 0 times
//    vertices.reserve(3);
//    vertices.emplace_back(1, 2, 3);
//    vertices.emplace_back(4, 5, 6);
//    vertices.emplace_back(7, 8, 9);
//
//    std::cin.get();
//}
// 49 静态库
//#include "GLFW/glfw3.h"
//int main() 
//{
//    int a = glfwInit();
//    std::cin.get();
//}
// 52 多返回值
// 法一:传引用然后修改,而不是直接返回多个
#if 0
void GetUserAge(const std::string& user_name, bool& work_status, int& age)
{
    if (user_name.compare("Cherno") == 0)
    {
        work_status = true;
        age = 18;
    }
    else
    {
        work_status = false;
        age = -1;
    }
}
int main()
{
    bool work_status = false;
    int age = -1;
    GetUserAge("Cherno", work_status, age);
    std::cout << work_status<< '\n' << age << std::endl;  // 确实造成了work_status 和 age 的修改
    std::cin.get();

}


//-------使用指针同理---------
void GetUserAge(const std::string& user_name, bool* work_status, int* age)
{
    if (user_name.compare("Cherno") == 0)
    {
        *work_status = true;
        *age = 18;
    }
    else
    {
        *work_status = false;
        *age = -1;
    }
}
int main()
{
    bool work_status_value; // 在栈上声明变量
    int age_value;
    bool* work_status = &work_status_value; // 获取变量的地址
    int* age = &age_value;
    GetUserAge("Cherno", work_status, age);
    std::cout << *work_status << '\n' << *age << std::endl;
    std::cin.get();
}
+
#endif

#if 0
// 法二:通过函数的返回值是一个array（数组）或vector(array会更快)
std::array<std::string, 2> ChangeString() {
    std::string a = "ssss";
    std::string b = "2";

    std::array<std::string, 2> result;
    result[0] = a;
    result[1] = b;
    return result;
    //也可以return std::array<std::string, 2>(a, b);
}
#endif 

#if 0
//---------------------------
std::vector<std::string> ChangeString() {
    std::string a = "Cherno";
    std::string b = "yuan";

    std::vector<std::string> result;
    result.push_back(a);
    result.push_back(b);
    return result;
    //也可以return std::array<std::string, 2>(a, b);
}
#endif 

#if 0
int main()
{
    std::array<std::string,2> vec = ChangeString();
    std::cout << vec[0] << vec[1] << std::endl;
    std::cin.get();
}
#endif

// 法三:使用std::pair
// 只包含两个元素。
//两个元素的类型可以不同。
//提供了简单的接口来访问第一个和第二个元素。
#if 0
std::pair<bool, int> GetUserAge(const std::string& user_name)
{
    std::pair<bool, int> result;
    if (user_name.compare("Cherno") == 0)
    {
        result = std::make_pair(true, 18);
    }
    else
    {
        result = std::make_pair(false, -1);
    }
    return result;
}

int main()
{
    std::pair<bool, int> result = GetUserAge("Cherno");
    std::cout << result.first << result.second << std::endl;
    std::cin.get();
}


#endif

// 法四:使用std::tuple
// 可以包含任意数量的元素。
// 每个元素的类型可以不同。
// 提供了访问元素的方法，包括通过 std::get和std::tie。
#include <tuple>
#if 0
 std::tuple<bool, int, int> GetUserAge(const std::string& user_name)
{
    std::tuple<bool, int, int> result;

    if (user_name.compare("Cherno") == 0)
    {
        result = std::make_tuple(true, 18, 0);
    }
    else
    {
        result = std::make_tuple(false, -1, 0);
    }
    return result;
}

int main()
{
    std::tuple<bool, int, int> result = GetUserAge("Cherno");
    bool work_status;
    int age;
    int user_id;

    std::tie(work_status, age, user_id) = result;
    std::cout << "查询结果：" << work_status << "    " << "年龄：" << age << "   " << "用户id:" << user_id << std::endl;
    getchar();
    return 0;
}
#endif

// 法五:返回一个结构体
#if 0
struct result {
    std::string str;
    int val;
};
result Function() {
    return { "1",1 };
    //C++新特性，可以直接这样子让函数自动补全成结构体
}
int main() {
    auto temp = Function();
    std::cout << temp.str << ' ' << temp.val << std::endl;
}

# endif

// 53 模板
#if 0
// 函数模板
template<typename T>
void Print(T value)
{
    std::cout << value << std::endl;
}

int main() 
{
    Print(1);
    Print("hello");
    Print(5.5);
    std::cin.get();
    Print(96);//这里其实是隐式的传递信息给模板，可读性不高
    Print<int>(96);//可以显示的定义模板参数，声明函数接受的形参的类型！！！
    Print<char>(96);//输出的可以是数字，也可以是字符！这样的操纵性强了很多！
}
#endif

// 类模板
#if 0
template <int N> 
class Array {
private:
    int m_Array[N];
};
int main() {
    Array<5> array;
}
#endif

#if 0
template<typename T, int size> class Array {
private:
    T m_Array[size];
};
int main() {
    Array<int, 5> array;
}
#endif

//55 C++的宏
#if 0 
#defind WAIT std::cin.get()
//这里可以不用放分号，如果放分号就会加入宏里面了
int main() {
    WAIT;
    //等效于std::cin.get()，属于纯文本替换
    //但单纯做这种操作是很愚蠢的，除了自己以外别人读代码会特别痛苦
}
#endif
#if 0
//宏是可以传递参数的，虽然参数也是复制粘贴替换上去的，并没有像函数那样讲究
#define log(x) std::cout << x << std::endl
int main() {
    log("hello");
    //这样子会输出“hello”
    return 0;
}
#endif
#if 0
#include <iostream>

#defind PR_DEBUG 1 //可以在这里切换成0，作为一个开关
#if PR_DEBUG == 1   //如果PR_DEBUG为1
#defind LOG(x) std::cout << x << std::endl  //则执行这个宏
#else   //反之
#defind LOG(x)   //这个宏什么也不定义，即是无意义
#endif    //结束

int main() {
    LOG("hello");
    return 0;
}
#endif

// 56 auto
// 57 静态数组,大小不可变
//1.std::array是一个实际的标准数组类，是C++标准模板库的一部分。
//
//2.静态的是指不增长的数组，当创建array时就要初始化其大小，不可再改变。
//
//3.使用格式
#if 0
int main()
{
    std::array<int, 5> data;
    data[0] = 1;
    data[4] = 10;
    return 0;
}
#endif

//4.array和原生数组都是创建在栈上的（vector是在堆上创建底层数据储存的）
//
//5.原生数组越界的时候不会报错，而array会有越界检查，会报错提醒。
//
//6.使用std::array的好处是可以访问它的大小（通过size()函数），它是一个类。
#if 0
void PrintArray(const std::array<int, 5>& data)
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << std::endl;

    }
}
int main()
{
    std::array<int, 5> data;
    for (int i = 0; i < 5; i++)
    {
        data[i] = i;
    }
    PrintArray(data);
}
#endif
// 如何传入一个标准数组作为参数，但不知道数组的大小？
// typename为T
#if 0
template <typename T>
void PrintArray(const T& data)
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << std::endl;
        // 假定 size 和 [] 存在,不建议
    }
}
int main()
{
    std::array<int, 5> data;
    for (int i = 0; i < 5; i++)
    {
        data[i] = i;
    }
    PrintArray(data);
}
#endif
#if 0
template <typename T,int size>
void PrintArray(const std::array<T,size>& data)
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << std::endl;
        // 假定 size 和 [] 存在,不建议
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << std::endl;
        // 假定 size 和 [] 存在,不建议
    }
}
int main()
{
    std::array<int, 5> data;
    for (int i = 0; i < 5; i++)
    {
        data[i] = i;
    }
    PrintArray(data);
}
#endif
// 58 C语言风格的函数指针
#if 0
#endif
#if 0
#endif
#if 0
#endif
// 59 lamda
#if 0
#endif
// 60 using namespace std
// using namespace xxx可以将xxx::yyy 简化为 yyy
// 尽量少用,别在头文件用
// 使用namespace可能会使原本发生隐式转换切换成不需要隐式转换的另一个库的函数