/* Note:Your choice is C IDE */
#include "stdio.h"
#include "windows.h"
void main()
{
    char c[10]="color 0A";
    int i,j;
    c[6]-=1;c[7]-=1;
    system("pause");
    for(i=0;i<6;i++)
    {
    	c[6]+=1;
    	c[7]='A'-1;
    	for(j=0;j<3;j++)
    	{
    		c[7]+=1;
    	
		printf("     ����        ����        ����\n");
		printf("    ��      ��    ��      ��  ��      ��\n");
		printf("    ��        ���        ���        ��\n");
		printf("      ��          ��    ��!          ��\n");
		printf("        ��            ��           ��\n");
		printf("          ��        �� ��        ��\n");
		printf("            ��    ��     ��    ��\n");
		printf("               ��           ��\n\n");
    		system(c);
    		Sleep(750);
    		
    	}
    	
    }
   
}


