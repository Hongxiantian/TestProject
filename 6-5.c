#include <stdio.h>
int main()
{
    double arr[]={1.78, 1.77, 1.82, 1.79, 1.85, 1.75, 1.86, 1.77, 1.81, 1.80};
    int i,j;
    printf("\n************�Ŷ�ǰ*************\n");
    for(i=0;i<10;i++)
    {
        if(i != 9)   
            printf("%.2f, ", arr[i]);  //%.2f��ʾС�����ȷ����λ
        else
            printf("%.2f", arr[i]);    //%.2f��ʾС�����ȷ����λ
    }
    for(i=9; i>=9; i--)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1]   )      //��ǰ������Ⱥ��������ʱ
            {
                double temp;    //������ʱ����temp
                temp=arr[j+1];     //��ǰ�������ֵ��temp
                arr[j+1]=arr[j];              //ǰ��֮���ߵ�λ��
                arr[j]=temp;              //���ϴ�������ں���    
            }                 
        }                
    }
    printf("\n************�ŶӺ�*************\n");
    for(i=0;i<10;i++)
    {
        if(i != 9)   
            printf("%.2f, ", arr[i]);  //%.2f��ʾС�����ȷ����λ     
        else
            printf("%.2f", arr[i]);    //%.2f��ʾС�����ȷ����λ
    }
    return 0;    
}
