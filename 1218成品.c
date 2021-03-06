#include<reg52.h>
#include<intrins.h>
#define uint unsigned int
#define uchar unsigned char
sbit du = P3^6;
sbit we = P3^7;
sbit key1 =P2^4;
sbit key2 =P2^5;
sbit key3 =P2^6;
sbit key4 =P2^7;
sbit led1 =P1^0;
sbit led2 =P1^1;
uchar code table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71,};//����
uchar code seat[]={0x00,0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};//λ��1��8
void delayms(uint);
uchar numt0,num,nums,numm,numh,aa;
uint seata,seatb;

void keyplay()/*--------------------------------------��������*/
{
	if(key1==0)/*key1��һ*/
	{
		delayms(10);
		if(key1==0)
		{
			num++;
			if(num==60)
				num = 0;
			while(!key1);  
		}
	}
	
	if(key2==0)/*key2��һ*/
	{
		delayms(10);
		if(key2==0)
		{
			if(num==0)
				num = 60;
				num--;
				while(!key2);
		}
	}
}

void display(uchar sex,min,hour)/*------------------------------��ʾ����*/
{
	uchar num1,num2,num3,num4,num5,num6;//���ø�λʮλ
	num1 = sex / 10;
	num2 = sex % 10; 
	num3 = min / 10;
	num4 = min % 10; 
	num5 = hour / 10;
	num6 = hour % 10; 
	//������
	P0 = 0xff;
	du = 1;
	P0 = table[num1];
	du = 0;
	P0 = 0xff;
	we = 1;
	P0 = seat[2];
	we = 0;
	delayms(1);
	
	P0 = 0xff;
	du = 1;
	P0 = table[num2];
	du = 0;
	P0 = 0xff;
	we = 1;
	P0 = seat[1];
	we = 0;
	delayms(1);
	//���÷�
	P0 = 0xff;
	du = 1;
	P0 = table[num3];
	du = 0;
	P0 = 0xff;
	we = 1;
	P0 = seat[5];
	we = 0;
	delayms(1);

	P0 = 0xff;
	du = 1;
	P0 = table[num4];
	du = 0;
	P0 = 0xff;
	we = 1;
	P0 = seat[4];
	we = 0;
	delayms(1);
	//����ʱ
	P0 = 0xff;
	du = 1;
	P0 = table[num5];
	du = 0;
	P0 = 0xff;
	we = 1;
	P0 = seat[8];
	we = 0;
	delayms(1);

	P0 = 0xff;
	du = 1;
	P0 = table[num6];
	du = 0;
	P0 = 0xff;
	we = 1;
	P0 = seat[7];
	we = 0;
	delayms(1);
}

void delayms(uint xms)/*--------------------------��ʱ����*/
{
	uint i,j;
	for(i = xms;i > 0;i--)
		for(j = 110;j > 0;j--);
}
void init()/*--------------------------------------�жϳ���*/
{
	TMOD = 0x01;
	TH0 = (65536-45872) / 256;
	TL0 = (65536-45872) % 256;
	EA = 1;
	ET0 = 1;
}
/*-------------------------------------------------------------
---------------------------------------------------------------
-----------------------������---------------------------------*/
void main()
{
	init();
		while(key3)
		{
		keyplay();
		nums = num;
		display(nums,0,0);
		}
		delayms(10);
		while(!key3);/*---------------------------------����3��λ*/
		/***������^**/
		while(key3)
		{
		keyplay();
		numm = num;
		display(nums,numm,0);
		}
		delayms(10);
		while(!key3);
		/****���÷�^****/
		while(key3)
		{
		keyplay();
		numh = num;
		display(nums,numm,numh);
		}
		while(!key3);
		/*****����ʱ^*/
		while(1)
		{
			if(key4==0)
			{
				delayms(10);
				if(key4==0)
				{
					while(!key4);
					TR0 = ~TR0;
				}
			}  //��������ͣ��ʱ��
			
			display(nums,numm,numh);
			if(numt0==20)
			{
				numt0 = 0;
				if(numh==0&&numm==0&&nums==0)
				{
					aa = 0xfe;
	        while(1)
	        {
						P1 = aa;
						delayms(500);
						aa =_crol_(aa,1);
          }
				}//��ʱ��Ϊ0ʱ��ˮ����
	
				if(nums==0)   
				{
					nums=59;
					if(numm==0)
					{
						numm = 59;
						numh--;
					}
					else
					{
						numm--;
					}
				}
				else
				{
					nums--;
				}
			}
		}//ʱ�ӽ�λ
}
	
void T0_time()interrupt 1
{
	TH0 =(65536-45872) / 256;
	TL0 =(65536-45872) % 256;
	numt0++;
	
}