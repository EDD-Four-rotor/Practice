
/**
  ******************************************************************************
  * @file    sort.c
  * @author  GYC
  * @version V1.0
  * @date    2017-11-19
  * @brief   ����
  ******************************************************************************
  * @attention None

  ******************************************************************************
  */

# include <stdio.h>

/**
*@funcition char *get_mouth(int m);
*@brief  ͨ��������ֵ.��ʾ����Ӧ��Ӣ���·�;
*@param   int m :����ָ��;
*@retval  ָ�������ֵ;
*@attention �������Լ�д��;

*/

    char *get_mouth(int m);
    int main(void)
    {
        int n;  //������Ϊ�������
        while (1)
        {
            printf("Input a mouth (1 to 12):");
            if (scanf("%d", &n) == 0)
                n = 0;
            else if (n == 0) return 0; // ������Ϣ���ж��������ֵΪ0;�������
            while (getchar() != '\n');
            printf("  %d = %s\n", n, get_mouth(n));
        }
        return 0;
    }
    char *get_mouth(int m)
    {
        char *p[] = {"Error!", "January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};  //ָ�������Ӧ���·�
        if (1 <= m && m <= 12)
            return p[m];
        else
            return p[0];        //�ж�������ֵ�Ƿ񳬳����鷶Χ
    }
