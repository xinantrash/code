#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//学生信息
typedef struct _STU
{
	char  arrStunum[10];
	char arrStuname[10];
	int  iStuScroe;
	struct _STU* pNext;
}STUNODE;
STUNODE* g_pHead = NULL;
STUNODE* g_pEnd = NULL;

//定义函数
void Addstumsg(char*  arrStunum, char* arrStuname, int iStuScroe);
void InsertNode(STUNODE* pTemp, char* arrStunum, char* arrStuname, int iStuScroe);
void FreeLinkData();
void ShowStudata();
void Showother();
void SaveStufile();
void DelStuNode(STUNODE* pNode);
void Readstufile();
STUNODE* FindstuBynum(char arrStunum[10]);
STUNODE* FindstuByname(char arrStuname[10]);

int main()
{
	int   iother = -1;
	int   nflag = 1;
	int   iStuScroe=-1;
	int   numother = 0;
	char strBuf[30] = { 0 };
	char  arrStunum[10] = { '\0' };
	char  arrStuname[10] = { '\0' };
	STUNODE* pTemp = NULL;
	Readstufile();
	//指令提示
	printf("*****************学生信息管理系统*******************\n");
	printf("*****************本系统操作指令如下*****************\n");
	printf("********        1.添加学生信息              ********\n"); 
	printf("********        2.查找指定学生的信息        ********\n");
	printf("********        3.修改指定学生的信息        ********\n");  
	printf("********        4.保存信息到文件中          ********\n");
	printf("********        5.读取文件中的信息          ********\n");
	printf("********        6.删除指定学生信息          ********\n");
	printf("********        7.恢复删除学生的信息        ********\n");
	printf("********        8.显示所有学生信息          ********\n");
	printf("********        9.查看所有指令              ********\n");
	printf("********        0.退出系统                  ********\n");
	printf("****************************************************\n");
	//输入指令
	while (nflag)
	{
		printf("请输入指令：");
		scanf_s("%d", &iother);
		switch (iother)
		{
		case 1:
			printf("输入学生学号：");
			scanf_s("%s",arrStunum,10);
			printf("输入学生姓名：");
			scanf_s("%s",arrStuname,10);
			printf("输入学生成绩：");
			scanf_s("%d", &iStuScroe);
			Addstumsg(arrStunum, arrStuname, iStuScroe); 
			break;

		case 2:
			printf("输入查找方式（1、学号  2、姓名）：\n");
			scanf_s("%d", &numother);
			if(numother==1)
			{
				printf("输入学生学号：");
				scanf_s("%s", arrStunum, 10);
				pTemp = FindstuBynum(arrStunum);
				if (NULL != pTemp)
				{
					printf("学号：%s   姓名：%s   分数：%d\n", pTemp->arrStunum, pTemp->arrStuname, pTemp->iStuScroe);
				}
			}
			if (numother == 2)
			{
				printf("输入学生姓名：");
				scanf_s("%s",arrStuname, 10);
				pTemp = FindstuByname(arrStuname);
				if (NULL != pTemp)
				{
					printf("学号：%s   姓名：%s   分数：%d\n", pTemp->arrStunum, pTemp->arrStuname, pTemp->iStuScroe);
				}
			}
			break;
		case 3:
			printf("输入需修改学生学号：");
			scanf_s("%s", arrStunum, 10);
			pTemp = FindstuBynum(arrStunum);
			if (NULL != pTemp) 
			{
				printf("输入学生学号：");
				scanf_s("%s", arrStunum, 10);
				strcpy_s(pTemp->arrStunum, 10, arrStunum);

				printf("输入学生姓名：");
				scanf_s("%s", arrStuname, 10);
				strcpy_s(pTemp->arrStuname, 10, arrStuname);

				printf("输入学生成绩：");
				scanf_s("%d", iStuScroe);
				pTemp->iStuScroe = iStuScroe;
			}
			break;
		case 4:
			SaveStufile();
			break;
		case 5:
			Readstufile();
			break;
		case 6:
			printf("输入删除学生学号：");
			scanf_s("%s", arrStunum, 10);
			pTemp = FindstuBynum(arrStunum);
			if (NULL != pTemp)
			{
				DelStuNode(pTemp);
			}
			break;
		case 7:
			FreeLinkData();
			g_pHead = NULL;
			g_pEnd = NULL;
			Readstufile();
			break;
		case 8:
			ShowStudata();
			break;
		case 9:
			Showother();
			break;
		case 0:
			nflag = 0;
			break;
		default:
			printf("输入的指令错误！\n");
			break;
		}
	}
	SaveStufile();//保存
	FreeLinkData();//释放链表
	system("pause");
	return 0;
}

//1.添加学生信息

void Addstumsg(char  arrStunum[10] ,char arrStuname[10] , int iStuScroe)
{
	STUNODE* pTemp = malloc(sizeof(STUNODE));
	if (NULL ==  arrStunum ||NULL  == arrStuname  ||   iStuScroe < 0 )
	{
		printf("学生信息输入错误！\n");
		return;
	}
	//成员赋值
	strcpy_s(pTemp->arrStunum,10, arrStunum);
	strcpy_s(pTemp->arrStuname,10, arrStuname);
	pTemp->iStuScroe = iStuScroe;
	pTemp->pNext = NULL;

	if ( NULL ==  g_pHead||NULL ==  g_pEnd)
	{
		g_pHead = pTemp;
		g_pEnd = pTemp;
	}
	else
	{
		g_pEnd->pNext = pTemp;
		g_pEnd = pTemp;
	}
}

//清空链表

void FreeLinkData()
{
	STUNODE* pTemp = g_pHead;
	while (g_pHead != NULL)
	{
		pTemp = g_pHead;
		g_pHead = g_pHead->pNext;
		free(pTemp);
	}

}

//8.打印所有学生信息

void ShowStudata()
{
	//遍历链表
	STUNODE * pTemp = g_pHead;
	while (pTemp != NULL)
	{
		printf("学号：%s   姓名：%s   分数：%d   \n", pTemp->arrStunum, pTemp->arrStuname, pTemp->iStuScroe);
		pTemp =pTemp->pNext;
	}

}

//9.查看指令

void Showother()
{
	printf("*****************本系统操作指令如下*****************\n");
	printf("*********       1.添加学生信息              ********\n");
	printf("*********       2.查找指定学生的信息        ********\n");
	printf("*********       3.修改指定学生的信息        ********\n");
	printf("*********       4.保存信息到文件中          ********\n");
	printf("*********       5.读取文件中的信息          ********\n");
	printf("*********       6.删除指定学生信息          ********\n");
	printf("*********       7.恢复删除学生的信息        ********\n");
	printf("*********       8.显示所有学生信息          ********\n");
	printf("*********       9.查看所有指令              ********\n");
	printf("*********       0.退出系统                  ********\n");
	printf("****************************************************\n");
}

//2.根据学号查找

STUNODE* FindstuBynum(char arrStunum[10])
{
	if (NULL == arrStunum)
	{
		printf("输入的学号错误！\n");
		return NULL;
	}
	if (NULL == g_pHead || NULL == g_pEnd)
	{
		printf("链表为空！\n");
		return NULL;
	}
	STUNODE* pTemp = g_pHead;
	while (pTemp != NULL) 
	{
		if (0 == strcmp(pTemp->arrStunum, arrStunum))
		{
			return pTemp;
		}
		pTemp = pTemp->pNext;
	}
	printf("查无此节点！\n");
	return NULL;
}

//2.根据姓名查找

STUNODE* FindstuByname(char arrStuname[10])
{
	if (NULL == arrStuname)
	{
		printf("输入的姓名错误！\n");
		return NULL;
	}
	if (NULL == g_pHead || NULL == g_pEnd)
	{
		printf("链表为空！\n");
		return NULL;
	}
	STUNODE* pTemp = g_pHead;
	while (pTemp != NULL)
	{
		if (0 == strcmp(pTemp->arrStuname, arrStuname))
		{
			return pTemp;
		}
		pTemp = pTemp->pNext;
	}
	printf("查无此节点！\n");
	return NULL;
}

//指定位置插入学生信息

void InsertNode(STUNODE* pTemp, char* arrStunum, char* arrStuname, int iStuScroe)
{
	STUNODE* pCoconut = malloc(sizeof(STUNODE));
	strcpy_s(pCoconut->arrStunum, 10, arrStunum);
	strcpy_s(pCoconut->arrStuname, 10, arrStuname);
	pCoconut->iStuScroe = iStuScroe;
	pCoconut->pNext = NULL;

	if (pCoconut == g_pEnd)
	{
		g_pEnd->pNext = pCoconut;
		g_pEnd = pCoconut;
	}
	else
	{
		pCoconut->pNext = pTemp->pNext;
		pTemp->pNext = pCoconut;
	}
}

//6.删除指定学生信息

void DelStuNode(STUNODE* pNode)
{
	//只有一个节点
	if (g_pHead == g_pEnd)
	{
		free(g_pHead);//释放空间（删除学生数据）
		g_pHead = NULL;
		g_pEnd = NULL;
	}
	//只有两节点
	else if (g_pHead->pNext == g_pEnd)
	{
		if (g_pHead == pNode)
		{
			free(g_pHead);
			g_pHead = g_pEnd;
		}
		else
		{
			free(g_pEnd);
			g_pEnd = g_pHead;
			g_pHead-> pNext= NULL;
		}
	}
	//节点大于三个
	else
	{
		STUNODE* pTemp = g_pEnd;
		//判断头节点
		if (g_pHead = pNode)
		{
			//记住头节点
			pTemp = g_pHead;
			g_pHead = g_pHead->pNext;
			free(pTemp);
			pTemp = NULL;
			return;
		}
		while (pTemp)
		{
			if (pTemp->pNext = pNode)
			{
				if (pNode == g_pEnd)
				{
					free(pNode);
					pNode = NULL;
					g_pEnd = pTemp;
					g_pEnd->pNext = NULL;
					return;
				}
				else
				{
					//记住要删除的节点
					STUNODE* pYz = pTemp->pNext;
					//链接
					pTemp->pNext = pNode->pNext;
					free(pYz);
					pYz = NULL;
					return;				
				}
			}
			pTemp = g_pEnd->pNext;
		}
	}
}

//4.保存

void SaveStufile()
{
	FILE* pFile = NULL;
	STUNODE* pTemp = g_pHead;
	char Stufil[30] = { 0 };
	char Stuscore[10] = { 0 };
	if (NULL == g_pHead)
	{
		printf("未添加学生！\n");
		return;
	}
	pFile = fopen("stufile.dat","wb+");
	if (NULL == pFile)
	{
		printf("打开文件失败！\n");
		return;
	}
	while (pTemp)
	{
		strcpy_s(Stufil, 30, pTemp->arrStunum);
		strcat(Stufil, ".");
		strcat(Stufil, pTemp->arrStuname);
		strcat(Stufil, ".");
		_itoa(pTemp->iStuScroe, Stuscore, 10);
		strcat(Stufil, Stuscore);
		fwrite(Stufil, 1, strlen(Stufil), pFile);
		fwrite("\r\n", 1, strlen("\r\n"), pFile);
		pTemp = pTemp->pNext;
	}
	fclose(pFile);
}

//读取文件

void Readstufile()
{
	FILE* pFile = fopen("stufile.dat", "rb+");
	char strBuf[30] = { 0 };
	char strStuNum[10] = { 0 };
	char strStuname[10] = { 0 };
	char strStuscore[10] = { 0 };
	int j = 0;
	int count = 0;
	if (NULL== pFile)
	{
		printf("打开文件失败！");
		return ;
	}
	while (NULL != fgets(strBuf, 30, pFile))
	{
		int i = 0;
		j = 0;
		count = 0;
		for (i = 0; strBuf[i] != '\r'; i++);
		{
			if (0 == count)
			{
				strStuNum[i] = strBuf[i];
				if ('.' == strBuf[i])
				{
					strStuNum[i] = '\0';
					count++;
				}		
			}
			else if (1 == count)
			{
				strStuname[j] = strBuf[i];
				j++;
				if ('.' == strBuf[i])
				{
					strStuname[j] = '\0';
					count++;
					j = 0;
				}	
			}
			else
			{
				strStuscore[j] = strBuf[i];
				j++;
			}
		}
		Addstumsg(strStuNum, strStuname, atoi(strStuscore));
	}

	fclose(pFile);
}
