#pragma once//��ֹͷ�ļ��ظ�����
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

	//չʾ�˵�
	void Show_Menu();
	//�˳�ϵͳ
	void ExitSystem();

	int m_EmpNum;//ְ������
	Worker ** m_EmpArray;//ָ���ָ��
	//���ְ��
	void Add_Emp();
	//�����ļ�
	void save();

	//��ʼ��
	void init(WorkerManager *wm);
	//�ж��ļ��Ƿ��
	bool m_FileIsEmpty;
	//ͳ���ļ�������
	int get_EmpNum();
	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();
	//�ж�ְ���Ƿ����
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	~WorkerManager();
};