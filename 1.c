#include<stdbool.h>
#include<stdio.h>
bool checkifexist(int *p,int size)
{
        int i=0,j=0;
        for(i=0;i<size-1;i++)
        {
                for(j=0;j<size;j++)
                {
                        if((p[i]==(2*p[j]) && (i!=j)))
                        {
                                return true;
                        }
                }
        }
        return false;
}

int main()
{
        int p[]={10,2,111,3};
        int size=sizeof(p)/sizeof(p[0]);
        if(checkifexist(p,size))
        {
                puts("True");
        }
        else
        {
                puts("False");
        }

}
