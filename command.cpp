/*ǰ�ԣ�������������ж��Ǹ��漣*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#include<windows.h>
#include<tchar.h>
#define eee 109
int a;
int n2;
int number;
char ceshi;
void guanli();
void gly();
char *GetVersionInfo();
void search();
void neizhi()
{
	system("color 0F");
	system("title �޸��˵�");
n1:	char *zh;
	zh = (char *)malloc(sizeof(char)* 2);
	char *zhh;
	zhh = (char *)malloc(sizeof(char)* 100);
	strcpy(zhh, "convert ");
	char *zhhh;
	zhhh = (char *)malloc(sizeof(char)* 14);
	strcpy(zhhh, ":/fs:ntfs /x");
	char *gss;
	gss = (char *)malloc(sizeof(char)* 100);
	strcpy(gss, "format ");
	char *gsss;
	gsss = (char *)malloc(sizeof(char)* 16);
	strcpy(gsss, ":/fs:ntfs /q /x");
	char *gssss;
	gssss = (char *)malloc(sizeof(char)* 17);
	strcpy(gssss, ":/fs:fat32 /q /x");
	char *gss2;
	gss2 = (char *)malloc(sizeof(char)* 100);
	strcpy(gss2, "format ");
	char *jc;
	jc = (char*)malloc(sizeof(char)* 50);
	char *jc2;
	jc2 = (char *)malloc(sizeof(char)* 200);
	strcpy(jc2, "taskkill /f /im ");
	char *gs;
	gs = (char *)malloc(sizeof(char)* 2);
	char *ip;
	ip = (char *)malloc(sizeof(char)* 100);
	char *ping;
	ping = (char *)malloc(sizeof(char)* 106);
	strcpy(ping, "ping ");
	char *chkdsk;
	chkdsk = (char *)malloc(sizeof(char)* 50);
	strcpy(chkdsk, "chkdsk ");
	char *hou;
	hou = (char *)malloc(sizeof(char)* 11);
	strcpy(hou, ": /f /r /x");
	char *lll;
	lll = (char *)malloc(sizeof(char)* 4);
	strcpy(lll, " /?");
	char *dir;
	dir = (char *)malloc(sizeof(char)* 800);
	strcpy(dir, "dir /s ");
	char *rt;
	rt = (char *)malloc(sizeof(char)* 1620);
	strcpy(rt, "xcopy ");
	char *d2;
	d2 = (char *)malloc(sizeof(char)* 770);
	char *te;
	te = (char *)malloc(sizeof(char)* 770);
	char *boot;
	boot = (char *)malloc(sizeof(char)* 60);
	strcpy(boot, "bcdboot ");
	char *win;
	win = (char *)malloc(sizeof(char)* 20);
	strcpy(win, ":\\Windows /s ");
	char *bcd;
	bcd = (char *)malloc(sizeof(char)* 20);
	strcpy(bcd, ": /f all /l zh-cn");
	char *k;
	k = (char *)malloc(sizeof(char)* 2);
	strcpy(k, " ");
	char *sam1;
	sam1 = (char *)malloc(sizeof(char)* 40);
	char *sam;
	sam = (char *)malloc(sizeof(char)* 38);
	strcpy(sam, ":\\Windows\\System32\\config\\SAM");
	system("cls");
n2:
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t������ĸ��A�����������˵�\n");
	printf("\t������ĸ��B�������������˵�\n");
	printf("\t������ĸ��C��������\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t�������֡�0�����˳�����\n");
	printf("     C���������֡�1�����鿴�������help��\n");
	printf("\t�������֡�2�����鿴����ľ����÷���* /?��\n");
	printf("\t�������֡�3�����鿴��ǰ���н��̣�tasklist��\n");
	printf("\t�������֡�4�����鿴�ļ����е��ļ�Ŀ¼��dir /s *��\n");
	printf("\t�������֡�5������������һ��ַ��ip��ַ����ͨ�ԣ�ping *��\n");
	printf("\t�������֡�6�����鿴Windows���֤״̬��slmgr.vbs -dli��\n");
	printf("\t�������֡�7�����鿴Windows�Ƿ����ü��slmgr.vbs -xpr��\n");
	printf("\t�������֡�8�����鿴Windows����ϸ�ļ�����Ϣ��slmgr.vbs -dlv��\n");
	printf("\t�������֡�9���������������ã�WinsockĿ¼����netsh winsock reset��\n");
	printf("\t������ĸ��a�����鿴ϵͳӳ���Ƿ��𻵣�Dism /Online /Cleanup-Image /ScanHealth��\n");
	printf("     F��������ĸ��b���������ļ���xcopy * *��\n");
	printf("     G��������ĸ��c�����߼����ٸ�ʽ������ΪNTFS�ļ�ϵͳ��ʽ��format *:/fs:ntfs /q /x��\n");
	printf("\t������ĸ��d�����߼����ٸ�ʽ������ΪFAT32�ļ�ϵͳ��ʽ��format *:/fs:fat32 /q /x��\n");
	printf("     H��������ĸ��e�����ָ�ϵͳ��¼����Ϊ��ʼ״̬��Ŀǰ�����ȶ������׳��������ã�\n");
	printf("     S��������ĸ��f����ˢ��DNS���棨ipconfig/flushdns��\n");
	printf("     X��������ĸ��g�����޸�ϵͳ�ļ���sfc /scannow��\n");
	printf("\t������ĸ��h�����޸����̣�chkdsk *: /f /r /x��\n");
	printf("\t������ĸ��i�����޸�ϵͳ����������bcdboot&bootsect��\n");
	printf("\t������ĸ��j�����޸�ϵͳӳ��DISM /Online /Cleanup-image /RestoreHealth������������\n");
	printf("     Z��������ĸ��k������ֹ���̣�taskkill /f /im *��\n");
	printf("\t������ĸ��l����ת��Ϊ����Ա�������ߣ�diskpart����������exit���ر�����\n");
	printf("\t������ĸ��m����ת��Ϊ����Ա������ʾ��״̬��cmd����������exit���ر�����\n");
	printf("\t������ĸ��n����ת��Ϊ����ԱPowerShell״̬��PowerShell����������exit���ر�����\n");
	printf("\t������ĸ��o����ת��FAT��FAT32����ΪNTFS�ļ�ϵͳ��ʽ��convert *:/fs:ntfs /x���������棬�ļ�����ʧ��\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("�����룺");
	fflush(stdin);
	scanf("%c", &ceshi);
	switch (ceshi)
	{
	case 67:	free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0; free(k); k = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		search(); break;
	case 48:	free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0; free(k); k = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		goto n3;
	case 65:	free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0; free(k); k = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		gly(); break;
	case 66:	free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0; free(k); k = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		guanli(); break;
	case 105:
		system("cls");
	boot:	for (a = 0; a < eee; a++)
		printf("=");
			printf("\n"); printf("\tȷ���޸�ϵͳ����������\n\t\t����y��ȷ��||����n��ȡ��\n");
			printf("�����룺");
			fflush(stdin);
			scanf("%c", &ceshi);
			switch (ceshi)
			{
			case 121:break;
			case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
				free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
				free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
				free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
				free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
				goto n1;
			default:
				system("cls");
				for (a = 0; a < eee; a++)
					printf("=");
				printf("\n");
				printf("�����������������\n");
				goto boot;
			}
			system("cls");
		ini:	for (a = 0; a < eee; a++)
			printf("=");
				printf("\n");
				printf("\t�޸�ϵͳ�������������������޸�\n");
				printf("\t�������֡�1����Ҫ�޸��Ĳ���ϵͳ�汾����Windows Vista\n");
				printf("\t�������֡�2����Ҫ�޸��Ĳ���ϵͳ�汾�����Ҹ���Windows Vista\n");
				printf("�����룺");
				fflush(stdin);
				scanf("%c", &ceshi);
				switch (ceshi)
				{
				case 49:
					system("cls");
					for (a = 0; a < eee; a++)
						printf("=");
					printf("\n");
					system("bootsect /nt52 ALL /force /mbr");
					for (a = 0; a < eee; a++)
						printf("=");
					printf("\n");
					system("pause");
					break;
				case 50:
					system("cls");
				ini2:
					for (a = 0; a < eee; a++)
						printf("=");
					printf("\n");
					printf("\t�������֡�1������������ΪMBR������\n");
					printf("\t�������֡�2������������ΪGPT��GUID��������\n");
					printf("�����룺");
					fflush(stdin);
					scanf("%c", &ceshi);
					switch (ceshi)
					{
					case 49:
						system("cls");
						for (a = 0; a < eee; a++)
							printf("=");
						printf("\n");
						system("bootsect /nt60 ALL /force /mbr");
						for (a = 0; a < eee; a++)
							printf("=");
						printf("\n");
						system("pause");
						break;
					case 50:
						system("cls");
						for (a = 0; a < eee; a++)
							printf("=");
						printf("\n");
						system("bootsect /nt60 ALL /force");
						for (a = 0; a < eee; a++)
							printf("=");
						printf("\n");
						system("pause");
						break;
					default:
						system("cls");
						for (a = 0; a < eee; a++)
							printf("=");
						printf("\n");
						printf("�����������������\n");
						goto ini2;
					}
					break;
				default:
					system("cls");
					for (a = 0; a < eee; a++)
						printf("=");
					printf("\n");
					printf("�����������������\n");
					goto ini;
				}
				system("cls");
				for (a = 0; a < eee; a++)
					printf("=");
				printf("\n");
				printf("\t�޸�ϵͳ���������������ļ��޸�\n");
				printf("������Windowsϵͳ���ڴ����̷���");
				fflush(stdin);
				gets(zh);
				printf("�����������ļ����ڴ����̷���UEFI BIOS��Ϊesp�������ڴ����̷�����");
				fflush(stdin);
				gets(gs);
				strcat(boot, zh);
				strcat(boot, win);
				strcat(boot, gs);
				strcat(boot, bcd);
				system("cls");
				for (a = 0; a < eee; a++)
					printf("=");
				printf("\n");
				system(boot);
				for (a = 0; a < eee; a++)
					printf("=");
				printf("\n");
				free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
				free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
				free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
				free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
				free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
				system("pause");
				system("cls");
				for (a = 0; a < eee; a++)
					printf("=");
				printf("\n");
				printf("\t��ǰϵͳ��������\n");
				system("bcdedit");
				for (a = 0; a < eee; a++)
					printf("=");
				printf("\n");
				system("pause");
				goto n1
	case 54:
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		system("START slmgr.vbs -dli"); goto n1;
	case 108:
		system("cls");
	dk:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n"); printf("\tȷ��ת��Ϊ����Ա���������𣿣�ת���������exit���ر�����\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:system("cls"); free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			system("diskpart"); goto n1;
		case 110:		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������������\n");
			goto dk;
		}
	case 51:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		printf("\t��ǰ���н���\n");
		system("tasklist");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto n1;
	case 98:
		system("cls");
	cp:	for (a = 0; a < eee; a++)
		printf("=");
		printf("\n"); printf("\tȷ�������ļ���\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������������\n");
			goto cp;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�����ļ�\n");
		printf("������Ҫ�����ļ��ľ���·����");
		fflush(stdin);
		gets(te);
		printf("�������ļ����Ƶ�λ�õľ���·����");
		fflush(stdin);
		gets(d2);
		strcat(rt, te);
		strcat(rt, k);
		strcat(rt, d2);
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system(rt);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		system("pause");
		goto n1;
	case 49:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		printf("\t��������\n");
		system("help");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto n1;
	case 50:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�鿴����ľ����÷�\n");
		printf("������Ҫ�鿴������磬Reagentc����");
		fflush(stdin);
		gets(te);
		strcat(te, lll);
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system(te);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		system("pause");
		goto n1;
	case 52:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�鿴�ļ����е��ļ�Ŀ¼\n");
		printf("�������ļ��еľ���·������ֱ�ӽ��ļ�����ק�����Զ�����·������");
		fflush(stdin);
		gets(te);
		strcat(dir, te);
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system(dir);
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto n1;
	case 106:
		system("cls");
	t:	for (a = 0; a < eee; a++)
		printf("=");
		printf("\n"); printf("\tȷ�������޸�ϵͳӳ���𣿣�����ܻỨ�ѽϳ�ʱ�䣩\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������������\n");
			goto t;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		printf("\t�����޸�ϵͳӳ��\n");
		system("DISM /Online /Cleanup-image /RestoreHealth");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto n1;
	case 97:
		system("cls");
	tt:	for (a = 0; a < eee; a++)
		printf("=");
		printf("\n"); printf("\tȷ���鿴ϵͳӳ���Ƿ����𣿣�����ܻỨ�ѽϳ�ʱ�䣩\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������������\n");
			goto tt;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		printf("\t�鿴ϵͳӳ���Ƿ���\n");
		system("Dism /Online /Cleanup-Image /ScanHealth");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto n1;
	case 103:
		system("cls");
	t2:	for (a = 0; a < eee; a++)
		printf("=");
		printf("\n"); printf("\tȷ���޸�ϵͳ�ļ��𣿣�����ܻỨ�ѽϳ�ʱ�䣩\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������������\n");
			goto t2;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		printf("\t�޸�ϵͳ�ļ�\n");
		system("sfc /scannow");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto n1;
	case 110:
		system("cls");
	power:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n"); printf("\tȷ��ת��Ϊ����ԱPowerShell״̬�𣿣�ת���������exit���ر�����\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:system("cls"); free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			system("PowerShell"); goto n1;
		case 110:system("cls");
			goto n1;
		default:
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������������\n");
			goto power;
		}
	case 109:
		system("cls");
	ce1:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n"); printf("\tȷ��ת��Ϊ����Ա������ʾ��״̬�𣿣�ת���������exit���ر�����\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:system("cls"); free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			system("cmd"); goto n1;
		case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������������\n");
			goto ce1;
		}
	case 102:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		printf("\tˢ��DNS����\n");
		system("ipconfig/flushdns");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto n1;
	case 111:
		system("cls");
	ce203:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n"); printf("\tȷ��Ҫת��FAT��FAT32����ΪNTFS�ļ�ϵͳ��ʽ��\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:system("cls"); for (a = 0; a < eee; a++)
			printf("=");
			printf("\n"); printf("�����������������\n"); goto ce203;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tת��FAT��FAT32����ΪNTFS�ļ�ϵͳ��ʽ\n");
		printf("������Ҫת��ΪNTFS�ļ�ϵͳ��ʽ�Ĵ����̷���");
		fflush(stdin);
		gets(zh);
		strcat(zhh, zh);
		strcat(zhh, zhhh);
		system(zhh);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		system("pause");
		goto n1;
	case 99:
		system("cls");
	ce201:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n"); printf("\tȷ���߼����ٸ�ʽ������ΪNTFS�ļ�ϵͳ��ʽ��\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:system("cls"); for (a = 0; a < eee; a++)
			printf("=");
			printf("\n"); printf("�����������������\n"); goto ce201;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�߼����ٸ�ʽ������ΪNTFS�ļ�ϵͳ��ʽ\n");
		printf("������Ҫ���и߼����ٸ�ʽ��ΪNTFS�ļ�ϵͳ��ʽ�Ĵ����̷���");
		fflush(stdin);
		gets(gs);
		strcat(gss, gs);
		strcat(gss, gsss);
		system(gss);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		system("pause");
		goto n1;
	case 107:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t��ֹ����\n");
		printf("������Ҫ��ֹ�Ľ��������磺explorer.exe�������������ֹʧ�ܣ���");
		fflush(stdin);
		gets(jc);
		strcat(jc2, jc);
		system(jc2);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		system("pause");
		goto n1;
	case 57:
		system("cls");
	ce23:	for (a = 0; a < eee; a++)
		printf("=");
			printf("\n"); printf("\tȷ�������������ã�WinsockĿ¼����\n\t\t����y��ȷ��||����n��ȡ��\n");
			printf("�����룺");
			fflush(stdin);
			scanf("%c", &ceshi);
			switch (ceshi)
			{
			case 121:break;
			case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
				free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
				free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
				free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
				free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
				goto n1;
			default:system("cls"); for (a = 0; a < eee; a++)
				printf("=");
				printf("\n"); printf("�����������������\n"); goto ce23;
			}
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("\t������������\n");
			system("netsh winsock reset");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			system("pause");
			goto n1;
	case 100:
		system("cls");
	ce200:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n"); printf("\tȷ���߼����ٸ�ʽ������ΪFAT32�ļ�ϵͳ��ʽ��\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:system("cls"); for (a = 0; a < eee; a++)
			printf("=");
			printf("\n"); printf("�����������������\n"); goto ce200;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�߼����ٸ�ʽ������ΪFAT32�ļ�ϵͳ��ʽ\n");
		printf("������Ҫ���и߼����ٸ�ʽ��ΪFAT32�ļ�ϵͳ��ʽ�Ĵ����̷���");
		fflush(stdin);
		gets(gs);
		strcat(gss2, gs);
		strcat(gss2, gssss);
		system(gss2);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		system("pause");
		goto n1;
	case 53:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t��������һ��ַ��ip��ַ����ͨ��\n");
		printf("��������ַ��ip��ַ��");
		fflush(stdin);
		gets(ip);
		strcat(ping, ip);
		system(ping);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		system("pause");
		goto n1;
	case 104:
		system("cls");
	chk:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n"); printf("\tȷ���޸������𣿣�����ܻỨ�ѽϳ�ʱ�䣩\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
			free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
			free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
			free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
			free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
			goto n1;
		default:
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������������\n");
			goto chk;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�޸�����\n");
		printf("������Ҫ�޸��Ĵ����̷���");
		fflush(stdin);
		gets(zh);
		strcat(chkdsk, zh);
		strcat(chkdsk, hou);
		system(chkdsk);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(zh); zh = 0; free(zhhh); zhhh = 0; free(gss2); gss2 = 0; free(jc); jc = 0; free(jc2); jc2 = 0;
		free(zhh); zhh = 0; free(gss); gss = 0; free(gsss); gsss = 0; free(gssss); gssss = 0; free(gs); gs = 0;
		free(ip); ip = 0; free(ping); ping = 0; free(chkdsk); chkdsk = 0; free(hou); hou = 0; free(lll); lll = 0;
		free(dir); dir = 0; free(rt); rt = 0; free(d2); d2 = 0; free(te); te = 0; free(boot); boot = 0;
		free(win); win = 0; free(bcd); bcd = 0; free(k); k = 0; free(sam1); free(sam); sam1 = 0; sam = 0;
		system("pause");
		goto n1;
	default:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("�����������������\n");
		goto n2;
	}
n3:;
}
void gly()
{
	system("color 0F");
	system("title ����˵�");
b2:
	system("cls");
b77:
	char *aa;
	aa = (char *)malloc(sizeof(char)* 50);
	strcpy(aa, "shutdown -s -t ");
	char *m;
	m = (char *)malloc(sizeof(char)* 20);
	char *aaa;
	aaa = (char *)malloc(sizeof(char)* 50);
	strcpy(aaa, "shutdown -r -t ");
	char *z;
	z = (char *)malloc(sizeof(char)* 300);
	strcpy(z, "net user ");
	char *zz;
	zz = (char *)malloc(sizeof(char)* 100);
	char *zzz;
	zzz = (char *)malloc(sizeof(char)* 2);
	strcpy(zzz, " ");
	char *zzzz;
	zzzz = (char *)malloc(sizeof(char)* 100);
	char *x;
	x = (char *)malloc(sizeof(char)* 300);
	strcpy(x, "net user ");
	char *xx;
	xx = (char *)malloc(sizeof(char)* 100);
	char *xxx;
	xxx = (char *)malloc(sizeof(char)* 2);
	strcpy(xxx, " ");
	char *xxxx;
	xxxx = (char *)malloc(sizeof(char)* 100);
	char *xxxxx;
	xxxxx = (char *)malloc(sizeof(char)* 7);
	strcpy(xxxxx, " /add");
	char *g;
	g = (char *)malloc(sizeof(char)* 300);
	strcpy(g, "net localgroup administrators ");
	char *add;
	add = (char *)malloc(sizeof(char)* 800);
	strcpy(add, "reg add HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Run /v ");
	char *add1;
	add1 = (char *)malloc(sizeof(char)* 50);
	char *add2;
	add2 = (char *)malloc(sizeof(char)* 15);
	strcpy(add2, " /t REG_SZ /d ");
	char *un;
	un = (char *)malloc(sizeof(char)* 500);
	char *gs;
	gs = (char *)malloc(sizeof(char)* 2);
	char *att;
	att = (char *)malloc(sizeof(char)* 800);
	strcpy(att, "attrib +s +h ");
	char *at;
	at = (char *)malloc(sizeof(char)* 800);
	strcpy(at, "attrib -s -h ");
	char *te;
	te = (char *)malloc(sizeof(char)* 770);
	char *k;
	k = (char *)malloc(sizeof(char)* 2);
	strcpy(k, " ");
	char *jy;
	jy = (char *)malloc(sizeof(char)* 200);
	strcpy(jy, "net user ");
	char *jy2;
	jy2 = (char *)malloc(sizeof(char)* 14);
	strcpy(jy2, " /active:no");
	char *jy3;
	jy3 = (char *)malloc(sizeof(char)* 15);
	strcpy(jy3, " /active:yes");
	char *de;
	de = (char *)malloc(sizeof(char)* 7);
	strcpy(de, " /del");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t������ĸ��A�������������˵�\n");
	printf("\t������ĸ��B���������޸��˵�\n");
	printf("\t������ĸ��C��������\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t�������֡�0�����˳�����\n");
	printf("     C���������֡�1�����鿴ȫ���˻���net user��\n");
	printf("\t�������֡�2�����鿴�˻�������Ϣ��net user *��\n");
	printf("\t�������֡�3�����鿴ϵͳ��Ϣ��systeminfo��\n");
	printf("\t�������֡�4�����鿴����ip��ַ��ipconfig/all��\n");
	printf("\t�������֡�5�����������˻���net user * * /add��\n");
	printf("\t�������֡�6�����鿴���༭���ں�ʱ�䣨date&time��\n");
	printf("\t�������֡�7���������ϵ�ģʽ��ݷ�ʽ�����ʶ��ʵ�֣��������������ļ���\n");
	printf("     D���������֡�8��������ע���ʹ�ļ�����������\n");
	printf("\t�������֡�9��������ʱ�ػ���shutdown -s -t *��\n");
	printf("\t������ĸ��a��������ʱ������shutdown -r -t *��\n");
	printf("     G��������ĸ��b�������������˻������루net user * *��\n");
	printf("     J��������ĸ��c���������˻���net user * /active:no��\n");
	printf("\t������ĸ��d�������˻�����������ԱȨ�ޣ�net localgroup administrators * /add��\n");
	printf("     L��������ĸ��e��������ע����shutdown -l��\n");
	printf("\t������ĸ��f�������������������rundll32 user32.dll,LockWorkStation��\n");
	printf("     Q��������ĸ��g���������˻���net user * /active:yes��\n");
	printf("\t������ĸ��h����ȡ������ʱ�ػ����������shutdown -a��\n");
	printf("     S��������ĸ��i����ɾ���˻���net user * /del��\n");
	printf("\t������ĸ��j����ˢ�¼�������ԣ�gpupdate��\n");
	printf("     W��������ĸ��k����Ϊ�ļ�/�ļ�����������+ϵͳ���ԣ�attrib +s +h *��\n");
	printf("\t������ĸ��l����Ϊ�ļ�/�ļ�����������+ϵͳ���ԣ�attrib -s -h *��\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("�����룺");
	fflush(stdin);
	scanf("%c", &ceshi);
	switch (ceshi)
	{
	case 105:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tɾ���˻�\n");
		printf("������Ҫɾ���������˻���");
		fflush(stdin);
		gets(te);
		strcat(jy, te);
		strcat(jy, de);
		system(jy);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx);
		free(g); free(add); free(add1); free(add2); free(un); free(gs);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0; free(k); k = 0;
		free(jy); jy = 0; free(jy2); jy2 = 0; free(jy3); jy3 = 0; free(de); de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; free(att); free(at); free(te); att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 103:
		system("cls"); for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�����˻�\n");
		printf("������Ҫ���õ������˻���");
		fflush(stdin);
		gets(te);
		strcat(jy, te);
		strcat(jy, jy3);
		system(jy);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx);
		free(g); free(add); free(add1); free(add2); free(un); free(gs);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0; free(k); k = 0;
		free(jy); jy = 0; free(jy2); jy2 = 0; free(jy3); jy3 = 0; free(de); de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; free(att); free(at); free(te); att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 99:
		system("cls"); for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�����˻�\n");
		printf("������Ҫ���õ������˻���");
		fflush(stdin);
		gets(te);
		strcat(jy, te);
		strcat(jy, jy2);
		system(jy);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx);
		free(g); free(add); free(add1); free(add2); free(un); free(gs);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0; free(k); k = 0;
		free(jy); jy = 0; free(jy2); jy2 = 0; free(jy3); jy3 = 0; free(de); de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; free(att); free(at); free(te); att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 50:
		system("cls"); for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�˻�������Ϣ\n");
		printf("������Ҫ�鿴������Ϣ�������˻���");
		fflush(stdin);
		gets(te);
		strcat(x, te);
		system(x);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx);
		free(g); free(add); free(add1); free(add2); free(un); free(gs);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0; free(k); k = 0;
		free(jy); jy = 0; free(jy2); jy2 = 0; free(jy3); jy3 = 0; free(de); de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; free(att); free(at); free(te); att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 49:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tȫ���˻���Ϣ\n");
		system("net user");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 98:
		system("cls"); for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t���������˻�������\n");
		printf("�����������˻���");
		fflush(stdin);
		gets(zz);
		printf("���������룺");
		fflush(stdin);
		gets(zzzz);
		strcat(z, zz);
		strcat(z, zzz);
		strcat(z, zzzz);
		system(z);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 100:
		system("cls"); for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t���˻�����������ԱȨ��\n");
		printf("������Ҫ����������ԱȨ�޵��˻���");
		fflush(stdin);
		gets(xx);
		strcat(g, xx);
		strcat(g, xxxxx);
		system(g);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 53:
		system("cls");
	ce4: for (a = 0; a < eee; a++)
		printf("=");
		 printf("\n"); printf("\tȷ���������˻���\n\t\t����y��ȷ��||����n��ȡ��\n");
		 printf("�����룺");
		 fflush(stdin);
		 scanf("%c", &ceshi);
		 switch (ceshi)
		 {
		 case 121:break;
		 case 110:		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
			 free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
			 free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
			 aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
			 jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
			 x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
			 add = 0; add1 = 0; add2 = 0; un = 0; gs = 0; goto b2;
		 default:system("cls"); for (a = 0; a < eee; a++)
			 printf("=");
			 printf("\n"); printf("�����������������\n"); goto ce4;
		 }
		 system("cls"); for (a = 0; a < eee; a++)
			 printf("=");
		 printf("\n");
		 printf("\t�������˻�\n");
		 printf("������Ҫ���������˻���");
		 fflush(stdin);
		 gets(xx);
		 printf("���������˻������룺");
		 fflush(stdin);
		 gets(xxxx);
		 strcat(x, xx);
		 strcat(x, xxx);
		 strcat(x, xxxx);
		 strcat(x, xxxxx);
		 system(x);
		 for (a = 0; a < eee; a++)
			 printf("=");
		 printf("\n");
		 free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		 free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		 free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		 aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		 jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		 x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		 add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		 system("pause");
		 goto b2;
	case 106:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tˢ�¼��������\n");
		system("gpupdate");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 107:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tΪ�ļ�/�ļ�����������+ϵͳ����\n");
		printf("�������ļ�/�ļ��еľ���·������ֱ�ӽ��ļ�/�ļ�����ק�����Զ�����·������");
		fflush(stdin);
		gets(te);
		strcat(att, te);
		system(att);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 108:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tΪ�ļ�/�ļ�����������+ϵͳ����\n");
		printf("�������ļ�/�ļ��еľ���·������ֱ�ӽ��ļ�/�ļ�����ק�����Զ�����·������");
		fflush(stdin);
		gets(te);
		strcat(at, te);
		system(at);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 67:
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		search(); break;
	case 48:
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		goto b1;
	case 65:
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		guanli();
		break;
	case 66:
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		neizhi();
		break;
	case 57:
		system("cls");
	ce11:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n"); printf("\tȷ��ִ�е���ʱ�ػ�������\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
			free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
			free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
			aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
			jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
			x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
			add = 0; add1 = 0; add2 = 0; un = 0; gs = 0; goto b2;
		default:
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������������\n");
			goto ce11;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tִ�йػ�����\n");
		printf("�������Զ���ʱ�䣨�룩��");
		fflush(stdin);
		gets(m);
		strcat(aa, m);
		system(aa);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 97:
		system("cls");
	ce12:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tȷ��ִ�е���ʱ����������\n\t\t����y��ȷ��||����n��ȡ��\n");
		printf("�����룺");
		fflush(stdin);
		scanf("%c", &ceshi);
		switch (ceshi)
		{
		case 121:break;
		case 110:		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
			free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
			free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
			aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
			jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
			x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
			add = 0; add1 = 0; add2 = 0; un = 0; gs = 0; goto b2;
		default:system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n"); printf("�����������������\n");
			goto ce12;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tִ����������\n");
		printf("�������Զ���ʱ�䣨�룩��");
		fflush(stdin);
		gets(m);
		strcat(aaa, m);
		system(aaa);
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 101:
		system("cls");
	ce13:	for (a = 0; a < eee; a++)
		printf("=");
			printf("\n"); printf("\tȷ��ִ������ע��������\n\t\t����y��ȷ��||����n��ȡ��\n");
			printf("�����룺");
			fflush(stdin);
			scanf("%c", &ceshi);
			switch (ceshi)
			{
			case 121:break;
			case 110:		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
				free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
				free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
				aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
				jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
				x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
				add = 0; add1 = 0; add2 = 0; un = 0; gs = 0; goto b2;
			default:system("cls"); for (a = 0; a < eee; a++)
				printf("=");
				printf("\n"); printf("�����������������\n");  goto ce13;
			}
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
			free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
			free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
			aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
			jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
			x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
			add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
			system("shutdown -l");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			system("pause");
			goto b2;
	case 104:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\tȡ������ʱ�ػ�����������\n");
		system("shutdown -a");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		system("pause");
		goto b2;
	case 55:
		system("cls");
	ce5:	for (a = 0; a < eee; a++)
		printf("=");
			printf("\n"); printf("\tȷ�������ϵ�ģʽ��ݷ�ʽ��.{ED7BA470-8E54-465E-825C-99712043E01C}����\n\t\t����y��ȷ��||����n��ȡ��\n");
			printf("�����룺");
			fflush(stdin);
			scanf("%c", &ceshi);
			switch (ceshi)
			{
			case 121:break;
			case 110:		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
				free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
				free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
				aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
				jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
				x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
				add = 0; add1 = 0; add2 = 0; un = 0; gs = 0; goto b2;
			default:system("cls"); for (a = 0; a < eee; a++)
				printf("=");
				printf("\n"); printf("�����������������\n"); goto ce5;
			}
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("\t�ϵ�ģʽ\n");
			system("mkdir �ϵ�ģʽ.{ED7BA470-8E54-465E-825C-99712043E01C}");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
			free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
			free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
			aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
			jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
			x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
			add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
			system("pause");
			goto b2;
	case 102:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		printf("\t�������������\n");
		system("rundll32 user32.dll,LockWorkStation");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto b2;
	case 56:
		system("cls");
	ce20:	for (a = 0; a < eee; a++)
		printf("=");
			printf("\n"); printf("\tȷ�������ļ��ľ���·������ע���ʹ�俪���������𣿣���ֱ�ӽ��ļ���ק�����Զ�����·����\n\t\t����y��ȷ��||����n��ȡ��\n");
			printf("�����룺");
			fflush(stdin);
			scanf("%c", &ceshi);
			switch (ceshi)
			{
			case 121:break;
			case 110:free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
				free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
				free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
				aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
				jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
				x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
				add = 0; add1 = 0; add2 = 0; un = 0; gs = 0; goto b2;
			default:system("cls"); for (a = 0; a < eee; a++)
				printf("=");
				printf("\n"); printf("�����������������\n"); goto ce20;
			}
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("\t����ע���ʹ�ļ�����������\n");
			printf("������Ҫ����ע�����Զ����ֵ���ƣ�");
			fflush(stdin);
			gets(add1);
			strcat(add, add1);
			strcat(add, add2);
			printf("�������ļ��ľ���·������������ţ��磺\"c:\\windows\\system32\\explorer.exe\"����");
			fflush(stdin);
			gets(un);
			strcat(add, un);
			system(add);
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
			free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
			free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
			aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
			jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
			x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
			add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
			system("pause");
			goto b2;
	case 52:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		printf("\t����ip��ַ\n");
		system("ipconfig/all");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto b2;
	case 51:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		printf("\tϵͳ��Ϣ\n");
		system("systeminfo");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto b2;
	case 54:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		printf("\t�鿴���༭���ں�ʱ��\n");
		system("date");
		system("time");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto b2;
	default:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("�����������������\n");
		free(aa); free(m); free(aaa); free(z); free(zz); free(zzz); free(zzzz); free(k);
		free(x); free(xxx); free(xx); free(xxxx); free(xxxxx); free(jy); free(jy2); free(jy3);
		free(g); free(add); free(add1); free(add2); free(un); free(gs); free(de); free(att); free(at); free(te);
		aa = 0; m = 0; aaa = 0; z = 0; zz = 0; zzz = 0; zzzz = 0;  k = 0;
		jy = 0; jy2 = 0;  jy3 = 0;  de = 0;
		x = 0; xx = 0; xxx = 0; xxxx = 0; xxxxx = 0; att = 0; at = 0; te = 0; g = 0;
		add = 0; add1 = 0; add2 = 0; un = 0; gs = 0;
		goto b77;
	}
b1:;
}
void guanli()
{
	system("color F0");
	system("title �����˵�");
a3:
	system("cls");
a99:
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t������ĸ��A�����������˵�\n");
	printf("\t������ĸ��B���������޸��˵�\n");
	printf("\t������ĸ��C��������\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t�������֡�0�����˳�����\n");
	printf("     B���������֡�1�������ݻ�ԭ������û��������루credwiz��\n");
	printf("     C���������֡�2������������cleanmgr��\n");
	printf("     D���������֡�3����Directx��Ϲ��ߣ�dxdiag��\n");
	printf("     G���������֡�4��������\"Windows\"��winver��\n");
	printf("     I���������֡�5����ip��ַ�������nslookup��\n");
	printf("\t�������֡�6����IExpress Wizard��������CABѹ���ļ�����iexpress�� \n");
	printf("     J���������֡�7�������������compmgmt.msc��\n");
	printf("\t�������֡�8���������˻����ݿ⣨syskey��\n");
	printf("     K���������֡�9��������̨��mmc��\n");
	printf("\t������ĸ��a����������壨control.exe��\n");
	printf("     O��������ĸ��b����ODBC����Դ����odbcad32��\n");
	printf("     R��������ĸ��c���������������taskmgr��\n");
	printf("     W��������ĸ��d�����ļ�ǩ����֤��sigverif��\n");
	printf("     X��������ĸ��e����ϵͳ��Ϣ��msinfo32��\n");
	printf("\t������ĸ��f����ϵͳ���ã�msconfig.exe��\n");
	printf("\t������ĸ��g�������ܼ�������perfmon.msc��\n");
	printf("     Z��������ĸ��h�����������dcomcnfg��\n");
	printf("\t������ĸ��i����֤�����certmgr.msc��\n");
	printf("\t������ĸ��j������Դ��������explorer��\n");
	printf("\t������ĸ��k������Դ��������resmon.exe��\n");
	printf("\t������ĸ��l��������Ա༭����gpedit.msc��\n");
	printf("\t������ĸ��m����ע���༭����regedit.exe��\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("�����룺");
	fflush(stdin);
	scanf("%c", &ceshi);
	switch (ceshi)
	{
	case 56:system("start syskey"); goto a3;
	case 67:search(); break;
		//case 85:system("start snippingtool"); goto a3;
		//case 86:system("start osk"); goto a3;
	case 49:system("start credwiz"); goto a3;
	case 66:neizhi(); break;
	case 65:gly(); break;
	case 48:goto a1;
	case 99:system("START taskmgr"); goto a3;
	case 52:system("START winver"); goto a3;
	case 102:system("START msconfig.exe"); goto a3;
	case 51:system("START dxdiag"); goto a3;
	//case 107:system("START devmgmt.msc"); goto a3;
	//case 108:system("START diskmgmt.msc"); goto a3;
	case 104:system("START dcomcnfg"); goto a3;
	case 100:system("START sigverif"); goto a3;
		//case 110:system("START secpol.msc"); goto a3;
		//	case 111:system("START services.msc"); goto a3;
	case 106:system("START explorer"); goto a3;
		//case 56:system("START eventvwr"); goto a3;
		//case 89:system("START eudcedit"); goto a3;
	case 103:system("START perfmon.msc"); goto a3;
	case 109:system("START regedit.exe"); goto a3;
		//case 113:system("START rsop.msc"); goto a3;
	case 97:system("START control.exe"); goto a3;
	case 105:system("START certmgr.msc"); goto a3;
		//case 121:system("START calc"); goto a3;
		//	case 88:system("START charmap"); goto a3;
	case 55:system("START compmgmt.msc"); goto a3;
	case 50:system("START cleanmgr"); goto a3;
		//case 102:system("START APPwiz.cpl"); goto a3;
	case 98:system("START odbcad32"); goto a3;
		//	case 112:system("START lusrmgr.msc"); goto a3;
	case 53:system("START nslookup"); goto a3;
	case 108:system("START gpedit.msc"); goto a3;
		//case 53:system("START Taskschd.msc"); goto a3;
	case 107:system("START resmon.exe"); goto a3;
	case 57:system("START mmc"); goto a3;
	case 101:system("START msinfo32"); goto a3;
		//case 115:system("START wmimgmt.msc"); goto a3;
	case 54:system("START iexpress"); goto a3;
		//case 117:system("START psr"); goto a3;
		//case 90:system("START mstsc"); goto a3;
	default:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("�����������������\n");
		goto a99;
	}
a1:;
}
VOID SafeGetNativeSystemInfo(__out LPSYSTEM_INFO lpSystemInfo)
{
	if (NULL == lpSystemInfo)    return;
	typedef VOID(WINAPI *LPFN_GetNativeSystemInfo)(LPSYSTEM_INFO lpSystemInfo);
	LPFN_GetNativeSystemInfo fnGetNativeSystemInfo = (LPFN_GetNativeSystemInfo)GetProcAddress(GetModuleHandle(_T("kernel32")), "GetNativeSystemInfo");;
	if (NULL != fnGetNativeSystemInfo)
	{
		fnGetNativeSystemInfo(lpSystemInfo);
	}
	else
	{
		GetSystemInfo(lpSystemInfo);
	}
}
int GetSystemBits()
{
	SYSTEM_INFO si;
	SafeGetNativeSystemInfo(&si);
	if (si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64 ||
		si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_IA64)
	{
		return 64;
	}
	return 32;
}
int main()
{
	system("title command system");
	system("color 0F");
	system("mode con cols=110 lines=2000");
a2:
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t�������֡�0�����˳�����\n");
	printf("\t�������֡�1�������������˵�\n");
	printf("\t�������֡�2�����������˵�\n");
	printf("\t�������֡�3���������޸��˵�\n");
	printf("\t�������֡�4��������\n");
	printf("\t�������֡�5��������\n");
	printf("\t\t����ϵͳ��%s ", GetVersionInfo());
	const int nBitSys = GetSystemBits();
	_tprintf(_T("%d-bit\n"), nBitSys);
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("�����룺");
	fflush(stdin);
	scanf("%c", &ceshi);
	switch (ceshi)
	{
	case 52:search(); break;
	case 49:guanli(); break;
	case 50:gly(); break;;
	case 48:goto a1;
	case 51:neizhi(); break;
	case 53:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t�����ܡ�\n");
		printf("\t��ͨ����������ʾ��������ʵ�ֶ�ϵͳ�Ĺ������޸�\n");
		printf("\t�����ߡ�\n");
		printf("\t��CaseClosedX@outlook.com\n");
		printf("\t���汾��\n");
		printf("\t��v1.3.0.0����Ӧ���ڣ�ĳ��4��30�գ�\n");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		system("cls");
		goto a2;
	default:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("�����������������\n");
		goto a2;
	}
a1:return 0;
}
char *GetVersionInfo()
{
	OSVERSIONINFO osvi;
	ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
	osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
	if (!GetVersionEx(&osvi))
	{
		return NULL;
	}
	if (osvi.dwMajorVersion == 5)
	{
		switch (osvi.dwMinorVersion)
		{
		case 0:
			return "Windows 2000";
		case 1:
			return "Windows XP";
		case 2:
			if (GetSystemMetrics(SM_SERVERR2) == 0)
				return "Windows Server 2003";
			else if (GetSystemMetrics(SM_SERVERR2) != 0)
				return "Windows Server 2003 R2";
			else
				return "Windows XP";
		default:
			return "δ֪����ϵͳ";
		}
	}
	else if (osvi.dwMajorVersion == 10)
	{
		switch (osvi.dwMinorVersion)
		{
		case 0:return "Windows 10";
		default:return "δ֪����ϵͳ";
		}
	}
	else if (osvi.dwMajorVersion == 6)
	{
		switch (osvi.dwMinorVersion)
		{
		case 0:
			return "Windows Vista";
		case 1:
			return "Windows 7";
		case 2:
			return "Windows 8";
		case 3:
			return "Windows 8.1";
		default:
			return "δ֪����ϵͳ";
		}
	}
	else
	{
		return "δ֪����ϵͳ";
	}
}
void search()
{
	system("title ����");
	system("color F0");
cdy:
	char *key;
	key = (char *)malloc(sizeof(char)* 10);
	strcpy(key, "�����˻�");
	char *time2;
	time2 = (char *)malloc(sizeof(char)* 10);
	char *time3;
	time3 = (char *)malloc(sizeof(char)* 10);
	char *r;
	r = (char *)malloc(sizeof(char)* 6);
	strcpy(r, "����");
	char *black;
	black = (char *)malloc(sizeof(char)* 6); 
	strcpy(black, "����");
	char *s;
	s = (char *)malloc(sizeof(char)* 6);
	strcpy(s, "�ػ�");
	char *task;
	task = (char *)malloc(sizeof(char)* 10);
	strcpy(task, "��ǰ����");
	char *dk;
	dk = (char *)malloc(sizeof(char)* 6);
	strcpy(dk, "����");
	char *sh;
	sh = (char *)malloc(sizeof(char)* 50);
	char *chinese;
	chinese = (char *)malloc(sizeof(char)* 6);
	strcpy(chinese, "����");
	char *ze;
	ze = (char *)malloc(sizeof(char)* 2);
	char *A;
	A = (char *)malloc(sizeof(char)* 2);
	char *B;
	B = (char *)malloc(sizeof(char)* 2);
	char *C;
	C = (char *)malloc(sizeof(char)* 2);
	strcpy(ze, "0"); strcpy(A, "A"); strcpy(B, "B"); strcpy(C, "C");
	char *D;
	D = (char *)malloc(sizeof(char)* 2);
	strcpy(D, "D");
	char *jietu;
	jietu = (char *)malloc(sizeof(char)* 6);
	strcpy(jietu, "��ͼ");
	char *renwu;
	renwu = (char *)malloc(sizeof(char)* 12);
	strcpy(renwu, "���������");
	char *jisuanjiguanli;
	jisuanjiguanli = (char *)malloc(sizeof(char)* 12);
	strcpy(jisuanjiguanli, "���������");
	char *zhucebiao;
	zhucebiao = (char *)malloc(sizeof(char)* 8);
	strcpy(zhucebiao, "ע���");
	char *zucelue;
	zucelue = (char *)malloc(sizeof(char)* 8);
	strcpy(zucelue, "�����");
	char *jihua;
	jihua = (char *)malloc(sizeof(char)* 10);
	strcpy(jihua, "�ƻ�����");
	char *xtpz;
	xtpz = (char *)malloc(sizeof(char)* 10);
	strcpy(xtpz, "ϵͳ����");
	char *cpql;
	cpql = (char *)malloc(sizeof(char)* 10);
	strcpy(cpql, "��������");
	char *sjck;
	sjck = (char *)malloc(sizeof(char)* 10);
	strcpy(sjck, "�¼��鿴");
	char *xtx;
	xtx = (char *)malloc(sizeof(char)* 10);
	strcpy(xtx, "ϵͳ��Ϣ");
	char *xnjs;
	xnjs = (char *)malloc(sizeof(char)* 10);
	strcpy(xnjs, "���ܼ���");
	char *zyjs;
	zyjs = (char *)malloc(sizeof(char)* 10);
	strcpy(zyjs, "��Դ����");
	char *con;
	con = (char *)malloc(sizeof(char)* 10);
	strcpy(con, "�������");
	char *dir;
	dir = (char *)malloc(sizeof(char)* 6);
	strcpy(dir, "���");
	char *zyg;
	zyg = (char *)malloc(sizeof(char)* 14);
	strcpy(zyg, "��Դ������");
	char *ts;
	ts = (char *)malloc(sizeof(char)* 12);
	strcpy(ts, "��ӻ�ɾ��");
	char *jh;
	jh = (char *)malloc(sizeof(char)* 6);
	strcpy(jh, "����");
	char *xk;
	xk = (char *)malloc(sizeof(char)* 8);
	strcpy(xk, "���֤");
	char *bb;
	bb = (char *)malloc(sizeof(char)* 6);
	strcpy(bb, "�汾");
	char *sb;
	sb = (char *)malloc(sizeof(char)* 6);
	strcpy(sb, "�豸");
	char *cp;
	cp = (char *)malloc(sizeof(char)* 6);
	strcpy(cp, "����");
	char *kzt;
	kzt = (char *)malloc(sizeof(char)* 8);
	strcpy(kzt, "����̨");
	char *aq;
	aq = (char *)malloc(sizeof(char)* 10);
	strcpy(aq, "��ȫ����");
	char *fw;
	fw = (char *)malloc(sizeof(char)* 6);
	strcpy(fw, "����");
	char *yh;
	yh = (char *)malloc(sizeof(char)* 10);
	strcpy(yh, "�û�����");
	char *jj;
	jj = (char *)malloc(sizeof(char)* 8);
	strcpy(jj, "�����");
	char *zz;
	zz = (char *)malloc(sizeof(char)* 6);
	strcpy(zz, "���");
	char *gg;
	gg = (char *)malloc(sizeof(char)* 10);
	strcpy(gg, "������ϵ");
	char *ss;
	ss = (char *)malloc(sizeof(char)* 8);
	strcpy(ss, "����Դ");
	char *bz;
	bz = (char *)malloc(sizeof(char)* 10);
	strcpy(bz, "�����¼");
	char *qm;
	qm = (char *)malloc(sizeof(char)* 6);
	strcpy(qm, "ǩ��");
	char *ys;
	ys = (char *)malloc(sizeof(char)* 10);
	strcpy(ys, "ѹ��");
	char *jsq;
	jsq = (char *)malloc(sizeof(char)* 8);
	strcpy(jsq, "������");
	char *zs;
	zs = (char *)malloc(sizeof(char)* 6);
	strcpy(zs, "֤��");
	char *yc;
	yc = (char *)malloc(sizeof(char)* 10);
	strcpy(yc, "Զ������");
	char *zf;
	zf = (char *)malloc(sizeof(char)* 6);
	strcpy(zf, "�ַ�");
	char *zzz;
	zzz = (char *)malloc(sizeof(char)* 10);
	strcpy(zzz, "�ַ�ӳ��");
	char *bh;
	bh = (char *)malloc(sizeof(char)* 12);
	strcpy(bh, "���ݻ�ԭ");
	char *jpp;
	jpp = (char *)malloc(sizeof(char)* 6);
	strcpy(jpp, "����");
	char *zsz;
	zsz = (char *)malloc(sizeof(char)* 8);
	strcpy(zsz, "������");
	char *hss;
	hss = (char *)malloc(sizeof(char)* 6);
	strcpy(hss, "����");
	char *dz;
	dz = (char *)malloc(sizeof(char)* 14);
	strcpy(dz, "ip��ַ���");
	char *all;
	all = (char *)malloc(sizeof(char)* 10);
	strcpy(all, "��������");
	char *zx;
	zx = (char *)malloc(sizeof(char)* 6);
	strcpy(zx, "ע��");
	char *net;
	net = (char *)malloc(sizeof(char)* 10);
	strcpy(net, "��������");
	char *sd;
	sd = (char *)malloc(sizeof(char)* 10);
	strcpy(sd, "�ϵ�ģʽ");
	char *dns;
	dns = (char *)malloc(sizeof(char)* 12);
	strcpy(dns, "ˢ��DNS");
	char *cmd;
	cmd = (char *)malloc(sizeof(char)* 12);
	strcpy(cmd, "������ʾ��");
	char *power;
	power = (char *)malloc(sizeof(char)* 12);
	strcpy(power, "PowerShell");
	char *l;
	l = (char *)malloc(sizeof(char)* 12);
	strcpy(l, "���������");
	char *ip;
	ip = (char *)malloc(sizeof(char)* 10);
	strcpy(ip, "ip��ַ");
	char *sys;
	sys = (char *)malloc(sizeof(char)* 14);
	strcpy(sys, "�ı�ϵͳ��Ϣ");
	char *sfc;
	sfc = (char *)malloc(sizeof(char)* 14);
	strcpy(sfc, "�޸�ϵͳ�ļ�");
	char *ck;
	ck = (char *)malloc(sizeof(char)* 14);
	strcpy(ck, "�鿴ϵͳӳ��");
	char *xf;
	xf = (char *)malloc(sizeof(char)* 14);
	strcpy(xf, "�޸�ϵͳӳ��");
	char *f5;
	f5 = (char *)malloc(sizeof(char)* 10);
	strcpy(f5, "ˢ�²���");
	char *use;
	use = (char *)malloc(sizeof(char)* 10);
	strcpy(use, "ȫ���˻�");
	char *dt;
	dt = (char *)malloc(sizeof(char)* 10);
	strcpy(dt, "����ʱ��");
js2:	
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
js666:	
	printf("\t�������֡�0�����˳�����\n");
	printf("\t������ĸ��A�����������˵�\n");
	printf("\t������ĸ��B�������������˵�\n");
	printf("\t������ĸ��C���������޸��˵�\n");
	printf("\t������ĸ��D�����鿴ȫ�������ؼ���\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("������Ҫ�����Ĺؼ��֣��ؼ��ֽ���������ϵͳ����Ͳ鿴��Ϣ����\n");
	fflush(stdin);
	gets(sh);
	if (_stricmp(chinese, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t�����ܡ�\n");
	printf("\t��ͨ����������ʾ��������ʵ�ֶ�ϵͳ�Ĺ������޸�\n");
	printf("\t�����ߡ�\n");
	printf("\t��CaseClosedX@outlook.com\n");
	printf("\t���汾��\n");
	printf("\t��v1.3.0.0����Ӧ���ڣ�ĳ��4��30�գ�\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(black, sh) == 0)
	{
		system("cls");
	ce27:	for (a = 0; a < eee; a++)
		printf("=");
			printf("\n"); printf("\tȷ���������ģʽ���ڿ͵۹���\n\t\t����y��ȷ��||����n��ȡ��\n");
			printf("�����룺");
			fflush(stdin);
			scanf("%c", &ceshi);
			switch (ceshi)
			{
			case 121:break;
			case 110:goto js2;
			default:system("cls"); for (a = 0; a < eee; a++)
				printf("=");
				printf("\n"); printf("�����������������\n");  goto ce27;
			}
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("�����������ʱ�䣨�뾫ȷ���룬�� 12:30:50�� ��");
			fflush(stdin);
			gets(time2);
			system("color 0A");
			system("mode con cols=500 lines=500");
			system("taskkill /f /im explorer.exe");
			system("cls");
			while (1)
			{
				time_t rawtime;
				struct tm * timeinfo;
				time(&rawtime);
				timeinfo = localtime(&rawtime);
				time3[0] = (asctime(timeinfo))[11];
				time3[1] = (asctime(timeinfo))[12];
				time3[2] = (asctime(timeinfo))[13];
				time3[3] = (asctime(timeinfo))[14];
				time3[4] = (asctime(timeinfo))[15];
				time3[5] = (asctime(timeinfo))[16];
				time3[6] = (asctime(timeinfo))[17];
				time3[7] = (asctime(timeinfo))[18];
				time3[8] = '\0';
				if (strncmp(time2, time3, 8) == 0)
					break;
				number = rand() % 2;
				printf("%d ", number);
			}
			system("start explorer.exe");
			system("mode con cols=110 lines=2000");
			system("color F0");
			goto js2;
	}
	else if (_stricmp(task, sh) == 0)
	{
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t��ǰ���н���\n");
		system("tasklist");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto js2;
	}
	else if (_stricmp(sh, D) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\tȫ�������ؼ���\n");
	printf("     A����ȫ����\n");
	printf("     B���汾\n");
	printf("\t�����¼\n");
	printf("\t���ݻ�ԭ\n");
	printf("     C������\n");
	printf("\t����\n");
	printf("\t��������\n");
	printf("\t��������\n");
	printf("\t��������\n");
	printf("\t�鿴ϵͳӳ��\n");
	printf("     D������\n");
	printf("\t��ǰ����\n");
	printf("     F������\n");
	printf("\t����\n");
	printf("     G���ػ�\n");
	printf("\t����\n");
	printf("\t������ϵ\n");
	printf("     I��ip��ַ\n");
	printf("\tip��ַ���\n");
	printf("     J������\n");
	printf("\t����\n");
	printf("\t�����\n");
	printf("\t������\n");
	printf("\t�ƻ�����\n");
	printf("\t�����˻�\n"); 
	printf("\t���������\n");
	printf("     K������̨\n");
	printf("\t�������\n");
	printf("     M��������ʾ��\n");
	printf("     P��PowerShell\n");
	printf("     Q��ǩ��\n");
	printf("\tȫ���˻�\n");
	printf("     R������ʱ��\n");
	printf("\t���������\n");
	printf("     S���豸\n");
	printf("\t����Դ\n");
	printf("\tˢ��DNS\n");
	printf("\t�¼��鿴\n");
	printf("\tˢ�²���\n");
	printf("\t�ϵ�ģʽ\n");
	printf("\t���������\n");
	printf("     T����ӻ�ɾ��\n");
	printf("     W���ı�ϵͳ��Ϣ\n");
	printf("     X�����֤\n");
	printf("\tϵͳ����\n");
	printf("\tϵͳ��Ϣ\n");
	printf("\t���ܼ���\n");
	printf("\t�޸�ϵͳ�ļ�\n");
	printf("\t�޸�ϵͳӳ��\n");
	printf("     Y��ѹ��\n");
	printf("\t�û�����\n");
	printf("\tԶ������\n");
	printf("     Z��ע��\n");
	printf("\t֤��\n");
	printf("\t�ַ�\n");
	printf("\t���\n");
	printf("\t���\n");
	printf("\tע���\n");
	printf("\t�����\n");
	printf("\t������\n");
	printf("\t�ַ�ӳ��\n");
	printf("\t��Դ����\n");
	printf("\t��Դ������\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(dt, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t�鿴���༭���ں�ʱ��\n");
	system("date");
	system("time");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	goto js2;
	}
	else if (_stricmp(use, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\tȫ���˻�\n");
	system("net user");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(ck, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t�鿴ϵͳӳ���Ƿ���\n");
	system("Dism /Online /Cleanup-Image /ScanHealth");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(f5, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\tˢ�¼��������\n");
	system("gpupdate");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(xf, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t�����޸�ϵͳӳ��\n");
	system("DISM /Online /Cleanup-image /RestoreHealth");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(sfc, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t�޸�ϵͳ�ļ�\n");
	system("sfc /scannow");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(cmd, sh) == 0)
	{
	system("cls");
	free(sh); free(chinese); free(A); free(B); free(C); free(ze); free(jietu); jietu = 0;	free(renwu); renwu = 0; free(jisuanjiguanli); jisuanjiguanli = 0; free(zhucebiao); zhucebiao = 0;
	free(zucelue); zucelue = 0; free(jihua); jihua = 0; free(xtpz); xtpz = 0; free(cpql); cpql = 0; free(black); black = 0;
	free(sjck); sjck = 0; free(xnjs); xnjs = 0; free(zyjs); zyjs = 0; free(xtx); xtx = 0; free(con); con = 0;
	free(dir); dir = 0; free(zyg); zyg = 0; free(ts); ts = 0; free(jh); jh = 0; free(xk); xk = 0;
	free(bb); bb = 0; free(sb); sb = 0; free(cp); cp = 0;  free(kzt); kzt = 0; free(aq); aq = 0; free(fw); fw = 0;
	free(yh); yh = 0; free(jj); jj = 0; free(zz); zz = 0; free(gg); gg = 0; free(ss); ss = 0; free(bz); bz = 0;
	free(qm); qm = 0; free(ys); ys = 0; free(dz); dz = 0; free(jsq); jsq = 0; free(zs); zs = 0; free(yc); yc = 0; free(zf); zf = 0;
	free(zzz); zzz = 0; free(bh); bh = 0; free(jpp); jpp = 0; free(zsz); free(hss); zsz = 0; hss = 0;
	sh = 0; chinese = 0;  A = 0; B = 0; C = 0; ze = 0; free(D); D = 0;	free(all); all = 0; free(zx); zx = 0; free(net); net = 0; free(sd); sd = 0; free(dns); dns = 0;
	free(cmd); cmd = 0; free(power); power = 0; free(l); l = 0; free(ip); ip = 0; free(sys); sys = 0; free(dk); dk = 0;
	free(sfc); sfc = 0; free(ck); ck = 0; free(xf); xf = 0; free(f5); f5 = 0; free(use); use = 0; free(dt); dt = 0;
	free(key); key = 0; free(time2); time2 = 0; free(time3); time3 = 0; free(r); r = 0; free(s); s = 0; free(task); task = 0;
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("cmd");
	goto cdy;
	}
	else if (_stricmp(l, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t���������\n");
	system("rundll32 user32.dll,LockWorkStation");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(power, sh) == 0)
	{
	system("cls");
	free(sh); free(chinese); free(A); free(B); free(C); free(ze); free(jietu); jietu = 0;	free(renwu); renwu = 0; free(jisuanjiguanli); jisuanjiguanli = 0; free(zhucebiao); zhucebiao = 0;
	free(zucelue); zucelue = 0; free(jihua); jihua = 0; free(xtpz); xtpz = 0; free(cpql); cpql = 0;
	free(sjck); sjck = 0; free(xnjs); xnjs = 0; free(zyjs); zyjs = 0; free(xtx); xtx = 0; free(con); con = 0;
	free(dir); dir = 0; free(zyg); zyg = 0; free(ts); ts = 0; free(jh); jh = 0; free(xk); xk = 0; free(black); black = 0;
	free(bb); bb = 0; free(sb); sb = 0; free(cp); cp = 0;  free(kzt); kzt = 0; free(aq); aq = 0; free(fw); fw = 0;
	free(yh); yh = 0; free(jj); jj = 0; free(zz); zz = 0; free(gg); gg = 0; free(ss); ss = 0; free(bz); bz = 0;
	free(qm); qm = 0; free(ys); ys = 0; free(dz); dz = 0; free(jsq); jsq = 0; free(zs); zs = 0; free(yc); yc = 0; free(zf); zf = 0;
	free(zzz); zzz = 0; free(bh); bh = 0; free(jpp); jpp = 0; free(zsz); free(hss); zsz = 0; hss = 0;
	sh = 0; chinese = 0;  A = 0; B = 0; C = 0; ze = 0; free(D); D = 0;	free(all); all = 0; free(zx); zx = 0; free(net); net = 0; free(sd); sd = 0; free(dns); dns = 0;
	free(cmd); cmd = 0; free(power); power = 0; free(l); l = 0; free(ip); ip = 0; free(sys); sys = 0; free(dk); dk = 0;
	free(sfc); sfc = 0; free(ck); ck = 0; free(xf); xf = 0; free(f5); f5 = 0; free(use); use = 0; free(dt); dt = 0;
	free(key); key = 0; free(time2); time2 = 0; free(time3); time3 = 0; free(r); r = 0; free(s); s = 0; free(task); task = 0;
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("PowerShell");
	goto cdy;
	}
	else if (_stricmp(dns, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\tˢ��DNS����\n");
	system("ipconfig/flushdns");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(ip, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t����ip��ַ\n");
	system("ipconfig/all");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(sys, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\tϵͳ��Ϣ\n");
	system("systeminfo");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(net, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t������������\n");
	system("netsh winsock reset");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(all, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t��������\n");
	system("help");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(sd, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t�ϵ�ģʽ\n");
	system("mkdir �ϵ�ģʽ.{ED7BA470-8E54-465E-825C-99712043E01C}");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(zx, sh) == 0)
	{
	system("cls");
	free(sh); free(chinese); free(A); free(B); free(C); free(ze); free(jietu); jietu = 0;	free(renwu); renwu = 0; free(jisuanjiguanli); jisuanjiguanli = 0; free(zhucebiao); zhucebiao = 0;
	free(zucelue); zucelue = 0; free(jihua); jihua = 0; free(xtpz); xtpz = 0; free(cpql); cpql = 0;
	free(sjck); sjck = 0; free(xnjs); xnjs = 0; free(zyjs); zyjs = 0; free(xtx); xtx = 0; free(con); con = 0;
	free(dir); dir = 0; free(zyg); zyg = 0; free(ts); ts = 0; free(jh); jh = 0; free(xk); xk = 0; free(black); black = 0;
	free(bb); bb = 0; free(sb); sb = 0; free(cp); cp = 0;  free(kzt); kzt = 0; free(aq); aq = 0; free(fw); fw = 0;
	free(yh); yh = 0; free(jj); jj = 0; free(zz); zz = 0; free(gg); gg = 0; free(ss); ss = 0; free(bz); bz = 0;
	free(qm); qm = 0; free(ys); ys = 0; free(dz); dz = 0; free(jsq); jsq = 0; free(zs); zs = 0; free(yc); yc = 0; free(zf); zf = 0;
	free(zzz); zzz = 0; free(bh); bh = 0; free(jpp); jpp = 0; free(zsz); free(hss); zsz = 0; hss = 0;
	sh = 0; chinese = 0;  A = 0; B = 0; C = 0; ze = 0; free(D); D = 0;	free(all); all = 0; free(zx); zx = 0; free(net); net = 0; free(sd); sd = 0; free(dns); dns = 0;
	free(cmd); cmd = 0; free(power); power = 0; free(l); l = 0; free(ip); ip = 0; free(sys); sys = 0; free(dk); dk = 0;
	free(sfc); sfc = 0; free(ck); ck = 0; free(xf); xf = 0; free(f5); f5 = 0; free(use); use = 0; free(dt); dt = 0;
	free(key); key = 0; free(time2); time2 = 0; free(time3); time3 = 0; free(r); r = 0; free(s); s = 0; free(task); task = 0;
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("shutdown -l");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto cdy;
	}
	else if (_stricmp(s, sh) == 0)
	{
		system("cls");
		free(sh); free(chinese); free(A); free(B); free(C); free(ze); free(jietu); jietu = 0;	free(renwu); renwu = 0; free(jisuanjiguanli); jisuanjiguanli = 0; free(zhucebiao); zhucebiao = 0;
		free(zucelue); zucelue = 0; free(jihua); jihua = 0; free(xtpz); xtpz = 0; free(cpql); cpql = 0;
		free(sjck); sjck = 0; free(xnjs); xnjs = 0; free(zyjs); zyjs = 0; free(xtx); xtx = 0; free(con); con = 0;
		free(dir); dir = 0; free(zyg); zyg = 0; free(ts); ts = 0; free(jh); jh = 0; free(xk); xk = 0; free(black); black = 0;
		free(bb); bb = 0; free(sb); sb = 0; free(cp); cp = 0;  free(kzt); kzt = 0; free(aq); aq = 0; free(fw); fw = 0;
		free(yh); yh = 0; free(jj); jj = 0; free(zz); zz = 0; free(gg); gg = 0; free(ss); ss = 0; free(bz); bz = 0;
		free(qm); qm = 0; free(ys); ys = 0; free(dz); dz = 0; free(jsq); jsq = 0; free(zs); zs = 0; free(yc); yc = 0; free(zf); zf = 0;
		free(zzz); zzz = 0; free(bh); bh = 0; free(jpp); jpp = 0; free(zsz); free(hss); zsz = 0; hss = 0;
		sh = 0; chinese = 0;  A = 0; B = 0; C = 0; ze = 0; free(D); D = 0;	free(all); all = 0; free(zx); zx = 0; free(net); net = 0; free(sd); sd = 0; free(dns); dns = 0;
		free(cmd); cmd = 0; free(power); power = 0; free(l); l = 0; free(ip); ip = 0; free(sys); sys = 0; free(dk); dk = 0;
		free(sfc); sfc = 0; free(ck); ck = 0; free(xf); xf = 0; free(f5); f5 = 0; free(use); use = 0; free(dt); dt = 0;
		free(key); key = 0; free(time2); time2 = 0; free(time3); time3 = 0; free(r); r = 0; free(s); s = 0; free(task); task = 0;
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("shutdown -s -t 0");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto cdy;
	}
	else if (_stricmp(r, sh) == 0)
	{
		system("cls");
		free(sh); free(chinese); free(A); free(B); free(C); free(ze); free(jietu); jietu = 0;	free(renwu); renwu = 0; free(jisuanjiguanli); jisuanjiguanli = 0; free(zhucebiao); zhucebiao = 0;
		free(zucelue); zucelue = 0; free(jihua); jihua = 0; free(xtpz); xtpz = 0; free(cpql); cpql = 0;
		free(sjck); sjck = 0; free(xnjs); xnjs = 0; free(zyjs); zyjs = 0; free(xtx); xtx = 0; free(con); con = 0;
		free(dir); dir = 0; free(zyg); zyg = 0; free(ts); ts = 0; free(jh); jh = 0; free(xk); xk = 0; free(black); black = 0;
		free(bb); bb = 0; free(sb); sb = 0; free(cp); cp = 0;  free(kzt); kzt = 0; free(aq); aq = 0; free(fw); fw = 0;
		free(yh); yh = 0; free(jj); jj = 0; free(zz); zz = 0; free(gg); gg = 0; free(ss); ss = 0; free(bz); bz = 0;
		free(qm); qm = 0; free(ys); ys = 0; free(dz); dz = 0; free(jsq); jsq = 0; free(zs); zs = 0; free(yc); yc = 0; free(zf); zf = 0;
		free(zzz); zzz = 0; free(bh); bh = 0; free(jpp); jpp = 0; free(zsz); free(hss); zsz = 0; hss = 0;
		sh = 0; chinese = 0;  A = 0; B = 0; C = 0; ze = 0; free(D); D = 0;	free(all); all = 0; free(zx); zx = 0; free(net); net = 0; free(sd); sd = 0; free(dns); dns = 0;
		free(cmd); cmd = 0; free(power); power = 0; free(l); l = 0; free(ip); ip = 0; free(sys); sys = 0; free(dk); dk = 0;
		free(sfc); sfc = 0; free(ck); ck = 0; free(xf); xf = 0; free(f5); f5 = 0; free(use); use = 0; free(dt); dt = 0;
		free(key); key = 0; free(time2); time2 = 0; free(time3); time3 = 0; free(r); r = 0; free(s); s = 0; free(task); task = 0;
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("shutdown -r -t 0");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		system("pause");
		goto cdy;
	}
	else if (_stricmp(hss, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("�ʵ������桤qq�š�\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t�����ߵĴ�š�\n");
	printf("\t������\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	system("pause");
	goto js2;
	}
	else if (_stricmp(zsz, sh) == 0)
	{
	system("cls");
	y:	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n"); printf("\tȷ����ʼ��Ϸ��\n\t\t����y��ȷ��||����n��ȡ��\n");
	printf("�����룺");
	fflush(stdin);
	scanf("%c", &ceshi);
	switch (ceshi)
	{
	case 121:break;
	case 110:	goto js2;
	default:
		system("cls"); for (a = 0; a < eee; a++)
	printf("=");
	printf("\n"); printf("�����������������\n");
	goto y;
	}
	tz99:	system("cls");
	srand((unsigned)time(NULL));
	number = rand() % 7;
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t�������ӵ���Ϊ %d\n\n", number);
	n2 = rand() % 7;
	printf("\t������ӵ���Ϊ %d\n", n2);
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	if (n2 > number)
	printf("\t\t��������Ŷ��\n");
	else if (n2 < number)
	printf("\t\t��������\n");
	else if (n2 == number)
	printf("\t\t��͵��Ե�����һ��Ŷ��\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	y1:printf("\t�Ƿ�����һ�֣�\n\t\t����y��ȷ��||����n��ȡ��\n");
	printf("�����룺");
	fflush(stdin);
	scanf("%c", &ceshi);
	switch (ceshi)
	{
	case 121:goto tz99; break;
	case 110:goto js2;
	default:system("cls"); for (a = 0; a < eee; a++)
	printf("=");
	printf("\n"); printf("�����������������\n");  for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	goto y1;
	}
	}
	else if (_stricmp(sh, ze) == 0)
	{
		free(sh); free(chinese); free(A); free(B); free(C); free(ze); free(jietu); jietu = 0;	free(renwu); renwu = 0; free(jisuanjiguanli); jisuanjiguanli = 0; free(zhucebiao); zhucebiao = 0;
		free(zucelue); zucelue = 0; free(jihua); jihua = 0; free(xtpz); xtpz = 0; free(cpql); cpql = 0;
		free(sjck); sjck = 0; free(xnjs); xnjs = 0; free(zyjs); zyjs = 0; free(xtx); xtx = 0; free(con); con = 0;
		free(dir); dir = 0; free(zyg); zyg = 0; free(ts); ts = 0; free(jh); jh = 0; free(xk); xk = 0; free(black); black = 0;
		free(bb); bb = 0; free(sb); sb = 0; free(cp); cp = 0;  free(kzt); kzt = 0; free(aq); aq = 0; free(fw); fw = 0;
		free(yh); yh = 0; free(jj); jj = 0; free(zz); zz = 0; free(gg); gg = 0; free(ss); ss = 0; free(bz); bz = 0;
		free(qm); qm = 0; free(ys); ys = 0; free(dz); dz = 0; free(jsq); jsq = 0; free(zs); zs = 0; free(yc); yc = 0; free(zf); zf = 0;
		free(zzz); zzz = 0; free(bh); bh = 0; free(jpp); jpp = 0; free(zsz); free(hss); zsz = 0; hss = 0;
		sh = 0; chinese = 0;  A = 0; B = 0; C = 0; ze = 0; free(D); D = 0;	free(all); all = 0; free(zx); zx = 0; free(net); net = 0; free(sd); sd = 0; free(dns); dns = 0;
		free(cmd); cmd = 0; free(power); power = 0; free(l); l = 0; free(ip); ip = 0; free(sys); sys = 0; free(dk); dk = 0;
		free(sfc); sfc = 0; free(ck); ck = 0; free(xf); xf = 0; free(f5); f5 = 0; free(use); use = 0; free(dt); dt = 0;
		free(key); key = 0; free(time2); time2 = 0; free(time3); time3 = 0; free(r); r = 0; free(s); s = 0; free(task); task = 0;
	goto js;
	}
	else if (_stricmp(sh, A) == 0)
	{
		free(sh); free(chinese); free(A); free(B); free(C); free(ze); free(jietu); jietu = 0;	free(renwu); renwu = 0; free(jisuanjiguanli); jisuanjiguanli = 0; free(zhucebiao); zhucebiao = 0;
		free(zucelue); zucelue = 0; free(jihua); jihua = 0; free(xtpz); xtpz = 0; free(cpql); cpql = 0;
		free(sjck); sjck = 0; free(xnjs); xnjs = 0; free(zyjs); zyjs = 0; free(xtx); xtx = 0; free(con); con = 0;
		free(dir); dir = 0; free(zyg); zyg = 0; free(ts); ts = 0; free(jh); jh = 0; free(xk); xk = 0; free(black); black = 0;
		free(bb); bb = 0; free(sb); sb = 0; free(cp); cp = 0;  free(kzt); kzt = 0; free(aq); aq = 0; free(fw); fw = 0;
		free(yh); yh = 0; free(jj); jj = 0; free(zz); zz = 0; free(gg); gg = 0; free(ss); ss = 0; free(bz); bz = 0;
		free(qm); qm = 0; free(ys); ys = 0; free(dz); dz = 0; free(jsq); jsq = 0; free(zs); zs = 0; free(yc); yc = 0; free(zf); zf = 0;
		free(zzz); zzz = 0; free(bh); bh = 0; free(jpp); jpp = 0; free(zsz); free(hss); zsz = 0; hss = 0;
		sh = 0; chinese = 0;  A = 0; B = 0; C = 0; ze = 0; free(D); D = 0;	free(all); all = 0; free(zx); zx = 0; free(net); net = 0; free(sd); sd = 0; free(dns); dns = 0;
		free(cmd); cmd = 0; free(power); power = 0; free(l); l = 0; free(ip); ip = 0; free(sys); sys = 0; free(dk); dk = 0;
		free(sfc); sfc = 0; free(ck); ck = 0; free(xf); xf = 0; free(f5); f5 = 0; free(use); use = 0; free(dt); dt = 0;
		free(key); key = 0; free(time2); time2 = 0; free(time3); time3 = 0; free(r); r = 0; free(s); s = 0; free(task); task = 0;
	gly(); goto js;
	}
	else if (_stricmp(sh, B) == 0)
	{
		free(sh); free(chinese); free(A); free(B); free(C); free(ze); free(jietu); jietu = 0;	free(renwu); renwu = 0; free(jisuanjiguanli); jisuanjiguanli = 0; free(zhucebiao); zhucebiao = 0;
		free(zucelue); zucelue = 0; free(jihua); jihua = 0; free(xtpz); xtpz = 0; free(cpql); cpql = 0;
		free(sjck); sjck = 0; free(xnjs); xnjs = 0; free(zyjs); zyjs = 0; free(xtx); xtx = 0; free(con); con = 0;
		free(dir); dir = 0; free(zyg); zyg = 0; free(ts); ts = 0; free(jh); jh = 0; free(xk); xk = 0; free(black); black = 0;
		free(bb); bb = 0; free(sb); sb = 0; free(cp); cp = 0;  free(kzt); kzt = 0; free(aq); aq = 0; free(fw); fw = 0;
		free(yh); yh = 0; free(jj); jj = 0; free(zz); zz = 0; free(gg); gg = 0; free(ss); ss = 0; free(bz); bz = 0;
		free(qm); qm = 0; free(ys); ys = 0; free(dz); dz = 0; free(jsq); jsq = 0; free(zs); zs = 0; free(yc); yc = 0; free(zf); zf = 0;
		free(zzz); zzz = 0; free(bh); bh = 0; free(jpp); jpp = 0; free(zsz); free(hss); zsz = 0; hss = 0;
		sh = 0; chinese = 0;  A = 0; B = 0; C = 0; ze = 0; free(D); D = 0;	free(all); all = 0; free(zx); zx = 0; free(net); net = 0; free(sd); sd = 0; free(dns); dns = 0;
		free(cmd); cmd = 0; free(power); power = 0; free(l); l = 0; free(ip); ip = 0; free(sys); sys = 0; free(dk); dk = 0;
		free(sfc); sfc = 0; free(ck); ck = 0; free(xf); xf = 0; free(f5); f5 = 0; free(use); use = 0; free(dt); dt = 0;
		free(key); key = 0; free(time2); time2 = 0; free(time3); time3 = 0; free(r); r = 0; free(s); s = 0; free(task); task = 0;
	guanli(); goto js;
	}
	else if (_stricmp(sh, C) == 0)
	{
		free(sh); free(chinese); free(A); free(B); free(C); free(ze); free(jietu); jietu = 0;	free(renwu); renwu = 0; free(jisuanjiguanli); jisuanjiguanli = 0; free(zhucebiao); zhucebiao = 0;
		free(zucelue); zucelue = 0; free(jihua); jihua = 0; free(xtpz); xtpz = 0; free(cpql); cpql = 0;
		free(sjck); sjck = 0; free(xnjs); xnjs = 0; free(zyjs); zyjs = 0; free(xtx); xtx = 0; free(con); con = 0;
		free(dir); dir = 0; free(zyg); zyg = 0; free(ts); ts = 0; free(jh); jh = 0; free(xk); xk = 0; free(black); black = 0;
		free(bb); bb = 0; free(sb); sb = 0; free(cp); cp = 0;  free(kzt); kzt = 0; free(aq); aq = 0; free(fw); fw = 0;
		free(yh); yh = 0; free(jj); jj = 0; free(zz); zz = 0; free(gg); gg = 0; free(ss); ss = 0; free(bz); bz = 0;
		free(qm); qm = 0; free(ys); ys = 0; free(dz); dz = 0; free(jsq); jsq = 0; free(zs); zs = 0; free(yc); yc = 0; free(zf); zf = 0;
		free(zzz); zzz = 0; free(bh); bh = 0; free(jpp); jpp = 0; free(zsz); free(hss); zsz = 0; hss = 0;
		sh = 0; chinese = 0;  A = 0; B = 0; C = 0; ze = 0; free(D); D = 0;	free(all); all = 0; free(zx); zx = 0; free(net); net = 0; free(sd); sd = 0; free(dns); dns = 0;
		free(cmd); cmd = 0; free(power); power = 0; free(l); l = 0; free(ip); ip = 0; free(sys); sys = 0; free(dk); dk = 0;
		free(sfc); sfc = 0; free(ck); ck = 0; free(xf); xf = 0; free(f5); f5 = 0; free(use); use = 0; free(dt); dt = 0;
		free(key); key = 0; free(time2); time2 = 0; free(time3); time3 = 0; free(r); r = 0; free(s); s = 0; free(task); task = 0;
	neizhi(); goto js;
	}
	else if (_stricmp(sh, jietu) == 0)
	{
	system("start snippingtool");
	goto js2;
	}
	else if (_stricmp(sh, key) == 0)
	{
		system("start syskey");
		goto js2;
	}
	else if (_stricmp(sh, jpp) == 0)
	{
	system("start osk");
	goto js2;
	}
	else if (_stricmp(sh, bh) == 0)
	{
	system("start credwiz");
	goto js2;
	}
	else if (_stricmp(sh, zzz) == 0)
	{
	system("start charmap");
	goto js2;
	}
	else if (_stricmp(sh, zf) == 0)
	{
	system("start eudcedit");
	goto js2;
	}
	else if (_stricmp(sh, yc) == 0)
	{
	system("start mstsc");
	goto js2;
	}
	else if (_stricmp(sh, jsq) == 0)
	{
	system("start calc");
	goto js2;
	}
	else if (_stricmp(sh, zs) == 0)
	{
	system("start certmgr.msc");
	goto js2;
	}
	else if (_stricmp(sh, gg) == 0)
	{
	system("start wmimgmt.msc");
	goto js2;
	}
	else if (_stricmp(sh, dz) == 0)
	{
	system("start nslookup");
	goto js2;
	}
	else if (_stricmp(sh, ys) == 0)
	{
	system("start iexpress");
	goto js2;
	}
	else if (_stricmp(sh, dk) == 0)
	{
	system("diskpart");
	goto cdy;
	}
	else if (_stricmp(sh, qm) == 0)
	{
	system("start sigverif");
	goto js2;
	}
	else if (_stricmp(sh, bz) == 0)
	{
	system("start psr");
	goto js2;
	}
	else if (_stricmp(sh, ss) == 0)
	{
	system("start odbcad32");
	goto js2;
	}
	else if (_stricmp(sh, jj) == 0)
	{
	system("start rsop.msc");
	goto js2;
	}
	else if (_stricmp(sh, zz) == 0)
	{
	system("start dcomcnfg");
	goto js2;
	}
	else if (_stricmp(sh, yh) == 0)
	{
	system("start lusrmgr.msc");
	goto js2;
	}
	else if (_stricmp(sh, aq) == 0)
	{
	system("start secpol.msc");
	goto js2;
	}
	else if (_stricmp(sh, fw) == 0)
	{
	system("start services.msc");
	goto js2;
	}
	else if (_stricmp(sh, sb) == 0)
	{
	system("start devmgmt.msc");
	goto js2;
	}
	else if (_stricmp(sh, kzt) == 0)
	{
	system("start mmc");
	goto js2;
	}
	else if (_stricmp(sh, cp) == 0)
	{
	system("start diskmgmt.msc");
	goto js2;
	}
	else if (_stricmp(sh, xk) == 0)
	{
	system("start slmgr.vbs -dli");
	goto js2;
	}
	else if (_stricmp(sh, bb) == 0)
	{
	system("start winver");
	goto js2;
	}
	else if (_stricmp(sh, jh) == 0)
	{
	system("start slmgr.vbs -dlv");
	goto js2;
	}
	else if (_stricmp(sh, zyg) == 0)
	{
	system("start explorer.exe");
	goto js2;
	}
	else if (_stricmp(sh, ts) == 0)
	{
	system("start APPwiz.cpl");
	goto js2;
	}
	else if (_stricmp(sh, dir) == 0)
	{
	system("start dxdiag");
	goto js2;
	}
	else if (_stricmp(sh, con) == 0)
	{
	system("start control.exe");
	goto js2;
	}
	else if (_stricmp(sh, xtx) == 0)
	{
	system("start msinfo32");
	goto js2;
	}
	else if (_stricmp(sh, zyjs) == 0)
	{
	system("start resmon.exe");
	goto js2;
	}
	else if (_stricmp(sh, xnjs) == 0)
	{
	system("start perfmon.msc");
	goto js2;
	}
	else if (_stricmp(sh, sjck) == 0)
	{
	system("start eventvwr");
	goto js2;
	}
	else if (_stricmp(sh, cpql) == 0)
	{
	system("start cleanmgr");
	goto js2;
	}
	else if (_stricmp(sh, xtpz) == 0)
	{
	system("start msconfig.exe");
	goto js2;
	}
	else if (_stricmp(sh, jihua) == 0)
	{
	system("start Taskschd.msc");
	goto js2;
	}
	else if (_stricmp(sh, renwu) == 0)
	{
	system("start taskmgr");
	goto js2;
	}
	else if (_stricmp(sh, zucelue) == 0)
	{
	system("start gpedit.msc");
	goto js2;
	}
	else if (_stricmp(sh, zhucebiao) == 0)
	{
	system("start regedit.exe");
	goto js2;
	}
	else if (_stricmp(sh, jisuanjiguanli) == 0)
	{
	system("start compmgmt.msc");
	goto js2;
	}
	else
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("��Ǹ��û���������ùؼ���\n");
	printf("���������룺\n");
	if (strpbrk(sh, aq) != NULL)
		printf("     A����ȫ����\n");
	if (strpbrk(sh, bb) != NULL)
		printf("     B���汾\n");
	if (strpbrk(sh, bb) != NULL)
		printf("\t�����¼\n");
	if (strpbrk(sh, bh) != NULL)
		printf("\t���ݻ�ԭ\n");
	if (strpbrk(sh, r) != NULL)
		printf("     C������\n");
	if (strpbrk(sh, cp) != NULL)
		printf("\t����\n");
	if (strpbrk(sh, cpql) != NULL)
		printf("\t��������\n");
	if (strpbrk(sh, all) != NULL)
		printf("\t��������\n");
	if (strpbrk(sh, net) != NULL)
		printf("\t��������\n");
	if (strpbrk(sh, ck) != NULL)
		printf("\t�鿴ϵͳӳ��\n");
	if (strpbrk(sh, black) != NULL)
		printf("     D������\n");
	if (strpbrk(sh, task) != NULL)
		printf("\t��ǰ����\n");
	if (strpbrk(sh, fw) != NULL)
		printf("     F������\n");
	if (strpbrk(sh, dk) != NULL)
		printf("\t����\n");
	if (strpbrk(sh, s) != NULL)
		printf("     G���ػ�\n");
	if (strpbrk(sh, chinese) != NULL)
		printf("\t����\n");
	if (strpbrk(sh, gg) != NULL)
		printf("\t������ϵ\n");
	if (strpbrk(sh, ip) != NULL)
		printf("     I��ip��ַ\n");
	if (strpbrk(sh, dz) != NULL)
		printf("\tip��ַ���\n");
	if (strpbrk(sh, jh) != NULL)
		printf("     J������\n");
	if (strpbrk(sh, jpp) != NULL)
		printf("\t����\n");
	if (strpbrk(sh, jj) != NULL)
		printf("\t�����\n");
	if (strpbrk(sh, jsq) != NULL)
		printf("\t������\n");
	if (strpbrk(sh, jihua) != NULL)
		printf("\t�ƻ�����\n");
	if (strpbrk(sh, key) != NULL)
		printf("\t�����˻�\n");
	if (strpbrk(sh, jisuanjiguanli) != NULL)
		printf("\t���������\n");
	if (strpbrk(sh, kzt) != NULL)
		printf("     K������̨\n");
	if (strpbrk(sh, con) != NULL)
		printf("\t�������\n");
	if (strpbrk(sh, cmd) != NULL)
		printf("     M��������ʾ��\n");
	if (strpbrk(sh, power) != NULL)
		printf("     P��PowerShell\n");
	if (strpbrk(sh, qm) != NULL)
		printf("     Q��ǩ��\n");
	if (strpbrk(sh, use) != NULL)
		printf("\tȫ���˻�\n");
	if (strpbrk(sh, dt) != NULL)
		printf("     R������ʱ��\n");
	if (strpbrk(sh, renwu) != NULL)
		printf("\t���������\n");
	if (strpbrk(sh, sb) != NULL)
		printf("     S���豸\n");
	if (strpbrk(sh, ss) != NULL)
		printf("\t����Դ\n");
	if (strpbrk(sh, dns) != NULL)
		printf("\tˢ��DNS\n");
	if (strpbrk(sh, sjck) != NULL)
		printf("\t�¼��鿴\n");
	if (strpbrk(sh, f5) != NULL)
		printf("\tˢ�²���\n");
	if (strpbrk(sh, sd) != NULL)
		printf("\t�ϵ�ģʽ\n");
	if (strpbrk(sh, l) != NULL)
		printf("\t���������\n");
	if (strpbrk(sh, ts) != NULL)
		printf("     T����ӻ�ɾ��\n");
	if (strpbrk(sh, sys) != NULL)
		printf("     W���ı�ϵͳ��Ϣ\n");
	if (strpbrk(sh, xk) != NULL)
		printf("     X�����֤\n");
	if (strpbrk(sh, xtpz) != NULL)
		printf("\tϵͳ����\n");
	if (strpbrk(sh, xtx) != NULL)
		printf("\tϵͳ��Ϣ\n");
	if (strpbrk(sh, xnjs) != NULL)
		printf("\t���ܼ���\n");
	if (strpbrk(sh, sfc) != NULL)
		printf("\t�޸�ϵͳ�ļ�\n");
	if (strpbrk(sh, xf) != NULL)
		printf("\t�޸�ϵͳӳ��\n");
	if (strpbrk(sh, ys) != NULL)
		printf("     Y��ѹ��\n");
	if (strpbrk(sh, yh) != NULL)
		printf("\t�û�����\n");
	if (strpbrk(sh, yc) != NULL)
		printf("\tԶ������\n");
	if (strpbrk(sh, zx) != NULL)
		printf("     Z��ע��\n");
	if (strpbrk(sh, zs) != NULL)
		printf("\t֤��\n");
	if (strpbrk(sh, zf) != NULL)
		printf("\t�ַ�\n");
	if (strpbrk(sh, dir) != NULL)
		printf("\t���\n");
	if (strpbrk(sh, zz) != NULL)
		printf("\t���\n");
	if (strpbrk(sh, zhucebiao) != NULL)
		printf("\tע���\n");
	if (strpbrk(sh, zucelue) != NULL)
		printf("\t�����\n");
	if (strpbrk(sh, zsz) != NULL)
		printf("\t������\n");
	if (strpbrk(sh, zzz) != NULL)
		printf("\t�ַ�ӳ��\n");
	if (strpbrk(sh, zyjs) != NULL)
		printf("\t��Դ����\n");
	if (strpbrk(sh, zyg) != NULL)
		printf("\t��Դ������\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	goto js666;
	}
	js:;
}

