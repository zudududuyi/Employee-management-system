#pragma once//防止头文件重复包含
#include<iostream>
using namespace std;
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager {
public:

	WorkerManager();

	//展示菜单
	void Show_Menu();
	//退出系统
	void ExitSystem();

	int m_EmpNum;//职工人数
	Worker ** m_EmpArray;//指针的指针
	//添加职工
	void Add_Emp();
	//保存文件
	void save();

	//初始化
	void init(WorkerManager *wm);
	//判断文件是否空
	bool m_FileIsEmpty;
	//统计文件中人数
	int get_EmpNum();
	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();
	//判断职工是否存在
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_File();

	~WorkerManager();
};