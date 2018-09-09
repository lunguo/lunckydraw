#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstdio>
#include<string>

using namespace std;

void Delay(int);

int main()
{
    string  name[10]={"张三","李四", "王五", "赵柳", "韩琦", "周八", "吴九", "郑二", "孙十" ,"钱零"};
    int sno,j;
    srand(time(NULL));

    for(j=0;j<30;j++)
    {
        system("clear");
        sno=rand()%10;
        cout<<"正在抽奖...："<<name[sno]<<endl;
        Delay(j*j);
    }
    
    return 0;

    cout<<"正在抽奖...："<<name[sno]<<endl;
    
}
void Delay(int n)
{
    int i,j,tmp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<10000;j++)
        {
            tmp=time(0);
            while(time(0)-tmp>n);
        }
    }
}
