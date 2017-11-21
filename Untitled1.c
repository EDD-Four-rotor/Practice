
/**
  ******************************************************************************
  * @file    sort.c
  * @author  GYC
  * @version V1.0
  * @date    2017-11-19
  * @brief   排序
  ******************************************************************************
  * @attention None

  ******************************************************************************
  */

# include <stdio.h>

/**
*@funcition char *get_mouth(int m);
*@brief  通过输入数值.显示出对应了英文月份;
*@param   int m :设置指针;
*@retval  指针数组的值;
*@attention 不是我自己写的;

*/

    char *get_mouth(int m);
    int main(void)
    {
        int n;  //用于作为输入变量
        while (1)
        {
            printf("Input a mouth (1 to 12):");
            if (scanf("%d", &n) == 0)
                n = 0;
            else if (n == 0) return 0; // 输入信息并判断输入的数值为0;输出错误
            while (getchar() != '\n');
            printf("  %d = %s\n", n, get_mouth(n));
        }
        return 0;
    }
    char *get_mouth(int m)
    {
        char *p[] = {"Error!", "January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};  //指针数组对应的月份
        if (1 <= m && m <= 12)
            return p[m];
        else
            return p[0];        //判断输入数值是否超出数组范围
    }
