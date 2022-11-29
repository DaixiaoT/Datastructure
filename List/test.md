# C++数据结构与算法（第四版）

## 第一章习题

### 1. 如果 i 是一个整数，而 p 和 q 是整数指针，下面哪些赋值语句将导致编译错误？

```cpp
a. p = &i;//0x61fe14
b. p = *&i;//error: invalid conversion from 'int' to 'int*'
c. p = &*i;//error: invalid type argument of unary '*' (have 'int')
d. i = *&*p;//17438353
e. i = *&p;//error: invalid conversion from 'int*' to 'int'
f. i = &*p;//error: invalid conversion from 'int*' to 'int'
g. p = &*&i;//0x61fe14
h. q = *&*p;//error: invalid conversion from 'int' to 'int*'
i. q = **&p;//error: invalid conversion from 'int' to 'int*'
j. q = *&p;//0x2a
k. q = &*p;//0xdb16f0

```

### 2. 找出下面程序的错误所在， 假定在（b）和（c）中已声明了 s2，并用字符串对其赋值 : 

```cpp
a.	char* f(char *s) {//不能在函数中返回一个局部变量的地址：warning :address of local variable returned
  		char ch = 'A';
  		return &ch;
	}
b.	char *s1;//char *s2=(char*)"asdf";
	strcpy(s1, s2);//将s2的字符串复制到s1
				 //s1和s2必须都是char*类型
c.	char *s1;//看不出什么问题
	s1 = new char[strlen(s2)];
	strcpy(s1, s2);
```

### 3. 给定如下声明

```cpp
int intArray[] = {1, 2, 3}, *p = intArray;
```

在执行下面的操作后，intArray 和 p 中的内容是什么？

```cpp
a.	*p++;//2
b.	(*p)++;//2
c.	*p++; (*p)++;//3
```

### 4. 只用指针（不使用数组下标）编写下面的函数

#### a. 将所有的数字添加到一个整数数组中。

```cpp
void insert(int *arr, int *val){
    int i=0;
    int j=0;
    for(int *p=arr,*q=val; i<10; i++, j++){
        *(p+i)=*(q+j);
    }
}
```



#### b. 从一个有序数组中删除所有的奇数，且数组仍保持有序。如果不要求删除操作后的数组保持有序，该函数是否容易编写一些？

```cpp

```

