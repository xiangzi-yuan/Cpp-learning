#include <iostream>
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
class Printable
{
public:
	virtual std::string GetClassName() = 0;
};
class Entity : public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }
	std::string GetClassName() override { return "Entity"; }
};
class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name) { m_Name = name; }
	std::string GetName() { return m_Name; }
	std::string GetClassName () override {return "Player";}
	// 如果子类没有重写父类的方法，就按父类的方法打印
};
void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std :: endl;
}

int main()
{
	Entity* e = new Entity();
	Entity* p = new Player("YUAN");
	Print(e);
	Print(p);
	//Print(new A());
	std::cin.get();
}