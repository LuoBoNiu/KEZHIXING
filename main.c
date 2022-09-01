#include <stdio.h>

int main()
{
    int right = 10,i,s,left=0,a[11];

    for(i=0;i<=right;i++)
    {
        scanf("%d",&a[i]);

    }
    while(left<=right)
    {
        if(a[left]%2!=0)//前奇数后移
            left++;
        else //前偶
        {
            if(a[right]%2==0)//前偶后偶
                --right;
        else //前偶后奇
            {
                    s=a[left];
                    a[left]=a[right];
                    a[right]=s;
                left++;
                    --right;
            }
        }

    }
        printf("奇偶调整后数组元素为:\n");
        for(i=0;i<=10;i++)
        {printf("%d ",a[i]);
        }
        return 0;

    }

