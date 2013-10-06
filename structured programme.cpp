#include <iostream>
using namespace std;
void list();
void choosecourse();
void dropcourse();
void inputgrade();
int namenumberCount;

void main()
{
	int action;
    cout<<"查看学生名单"<<endl;
    cout<<"2)选课"<<endl;
    cout<<"3)退课"<<endl;
	cout<<"4)录入成绩"<<endl;
    cout<<"5)退出程序"<<endl;
    cin>>action;
    do{
          switch(action)
		  {
		  case 1:
			    list();
		      	break;
		  case 2:
			    choosecourse();
			    break;
		  case 3:
			    dropcourse();
		     	break;
		  case 4:
			    inputgrade();
				break;
		  case 5:
			    //return 0;
		  default:
			    cout<<"您输入了错误的菜单项，请重新选择";

		  }
	}while(1);	
}

	struct Student{
	    char namenumber[10];
		int grade;
	}students[100];

int find(char* namenumber)
	{
       int i;
       for(i=0;i<namenumberCount;i++)
	   {
           if(strcmp(students[i].namenumber,namenumber)==0)
                 break;
	   }
       return i;
	}

	void list()
	{
		cout<<"学生学号\t"<<"学生成绩"<<endl;
		for(int i=0;i<namenumberCount;i++)
		{
			cout<<students[i].namenumber<<"\t";
			cout<<students[i].grade<<endl;
		}
	}

		void choosecourse()
	{
		struct Student student;
		cout<<"学号";
		cin>>student.namenumber;
		int i=find(student.namenumber);
		if(i == namenumberCount)
		{
             strcpy(students[i].namenumber,student.namenumber);
             namenumberCount++;
		}
		else
			cout<<"该学生已选择该课程"<<endl;

	}


	void dropcourse()
	{
        struct Student student;
        cout<<"学号";
		cin>>student.namenumber;
        int i = find(student.namenumber);
        if(i == namenumberCount)
              cout<<"学号错误(该学生未选择该课程)！"<<endl;
        else
		{
			for(int j=i;j<namenumberCount;j++)
			   strcpy(students[j].namenumber,students[j+1].namenumber);
               namenumberCount--;
		}
	}

    void inputgrade()
	{
        struct Student student;
        cout<<"学号";
		cin>>student.namenumber;
        int i = find(student.namenumber);
        if(i == namenumberCount)
            cout<<"学号错误！"<<endl;
        else
           students[i].grade=student.grade;
	}