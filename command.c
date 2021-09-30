/*前言：这个程序能运行都是个奇迹*/
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
	system("title 修复菜单");
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
	printf("\t输入字母【A】：进入管理菜单\n");
	printf("\t输入字母【B】：进入启动菜单\n");
	printf("\t输入字母【C】：搜索\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t输入数字【0】：退出程序\n");
	printf("     C·输入数字【1】：查看常用命令（help）\n");
	printf("\t输入数字【2】：查看命令的具体用法（* /?）\n");
	printf("\t输入数字【3】：查看当前所有进程（tasklist）\n");
	printf("\t输入数字【4】：查看文件夹中的文件目录（dir /s *）\n");
	printf("\t输入数字【5】：测试与任一网址或ip地址的连通性（ping *）\n");
	printf("\t输入数字【6】：查看Windows许可证状态（slmgr.vbs -dli）\n");
	printf("\t输入数字【7】：查看Windows是否永久激活（slmgr.vbs -xpr）\n");
	printf("\t输入数字【8】：查看Windows最详细的激活信息（slmgr.vbs -dlv）\n");
	printf("\t输入数字【9】：重置网络设置（Winsock目录）（netsh winsock reset）\n");
	printf("\t输入字母【a】：查看系统映像是否损坏（Dism /Online /Cleanup-Image /ScanHealth）\n");
	printf("     F·输入字母【b】：复制文件（xcopy * *）\n");
	printf("     G·输入字母【c】：高级快速格式化磁盘为NTFS文件系统格式（format *:/fs:ntfs /q /x）\n");
	printf("\t输入字母【d】：高级快速格式化磁盘为FAT32文件系统格式（format *:/fs:fat32 /q /x）\n");
	printf("     H·输入字母【e】：恢复系统登录密码为初始状态（目前并不稳定，极易出错，请慎用）\n");
	printf("     S·输入字母【f】：刷新DNS缓存（ipconfig/flushdns）\n");
	printf("     X·输入字母【g】：修复系统文件（sfc /scannow）\n");
	printf("\t输入字母【h】：修复磁盘（chkdsk *: /f /r /x）\n");
	printf("\t输入字母【i】：修复系统启动引导（bcdboot&bootsect）\n");
	printf("\t输入字母【j】：修复系统映像（DISM /Online /Cleanup-image /RestoreHealth）（须联网）\n");
	printf("     Z·输入字母【k】：终止进程（taskkill /f /im *）\n");
	printf("\t输入字母【l】：转换为管理员分区工具（diskpart）（可输入exit返回本程序）\n");
	printf("\t输入字母【m】：转换为管理员命令提示符状态（cmd）（可输入exit返回本程序）\n");
	printf("\t输入字母【n】：转换为管理员PowerShell状态（PowerShell）（可输入exit返回本程序）\n");
	printf("\t输入字母【o】：转换FAT或FAT32磁盘为NTFS文件系统格式（convert *:/fs:ntfs /x）（不可逆，文件不丢失）\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("请输入：");
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
			printf("\n"); printf("\t确定修复系统启动引导吗？\n\t\t输入y：确定||输入n：取消\n");
			printf("请输入：");
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
				printf("输入错误，请重新输入\n");
				goto boot;
			}
			system("cls");
		ini:	for (a = 0; a < eee; a++)
			printf("=");
				printf("\n");
				printf("\t修复系统启动引导：启动扇区修复\n");
				printf("\t输入数字【1】：要修复的操作系统版本低于Windows Vista\n");
				printf("\t输入数字【2】：要修复的操作系统版本包括且高于Windows Vista\n");
				printf("请输入：");
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
					printf("\t输入数字【1】：启动磁盘为MBR分区表\n");
					printf("\t输入数字【2】：启动磁盘为GPT（GUID）分区表\n");
					printf("请输入：");
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
						printf("输入错误，请重新输入\n");
						goto ini2;
					}
					break;
				default:
					system("cls");
					for (a = 0; a < eee; a++)
						printf("=");
					printf("\n");
					printf("输入错误，请重新输入\n");
					goto ini;
				}
				system("cls");
				for (a = 0; a < eee; a++)
					printf("=");
				printf("\n");
				printf("\t修复系统启动引导：启动文件修复\n");
				printf("请输入Windows系统所在磁盘盘符：");
				fflush(stdin);
				gets(zh);
				printf("请输入引导文件所在磁盘盘符（UEFI BIOS则为esp分区所在磁盘盘符）：");
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
				printf("\t当前系统启动配置\n");
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
		printf("\n"); printf("\t确定转换为管理员分区工具吗？（转换后可输入exit返回本程序）\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("输入错误，请重新输入\n");
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
		printf("\t当前所有进程\n");
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
		printf("\n"); printf("\t确定复制文件吗？\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("输入错误，请重新输入\n");
			goto cp;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t复制文件\n");
		printf("请输入要复制文件的绝对路径：");
		fflush(stdin);
		gets(te);
		printf("请输入文件复制到位置的绝对路径：");
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
		printf("\t常用命令\n");
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
		printf("\t查看命令的具体用法\n");
		printf("请输入要查看的命令（如，Reagentc）：");
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
		printf("\t查看文件夹中的文件目录\n");
		printf("请输入文件夹的绝对路径（可直接将文件夹拖拽至此自动生成路径）：");
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
		printf("\n"); printf("\t确定联网修复系统映像吗？（这可能会花费较长时间）\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("输入错误，请重新输入\n");
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
		printf("\t联网修复系统映像\n");
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
		printf("\n"); printf("\t确定查看系统映像是否损坏吗？（这可能会花费较长时间）\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("输入错误，请重新输入\n");
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
		printf("\t查看系统映像是否损坏\n");
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
		printf("\n"); printf("\t确定修复系统文件吗？（这可能会花费较长时间）\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("输入错误，请重新输入\n");
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
		printf("\t修复系统文件\n");
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
		printf("\n"); printf("\t确定转换为管理员PowerShell状态吗？（转换后可输入exit返回本程序）\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("输入错误，请重新输入\n");
			goto power;
		}
	case 109:
		system("cls");
	ce1:
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n"); printf("\t确定转换为管理员命令提示符状态吗？（转换后可输入exit返回本程序）\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("输入错误，请重新输入\n");
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
		printf("\t刷新DNS缓存\n");
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
		printf("\n"); printf("\t确定要转换FAT或FAT32磁盘为NTFS文件系统格式吗？\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("\n"); printf("输入错误，请重新输入\n"); goto ce203;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t转换FAT或FAT32磁盘为NTFS文件系统格式\n");
		printf("请输入要转换为NTFS文件系统格式的磁盘盘符：");
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
		printf("\n"); printf("\t确定高级快速格式化磁盘为NTFS文件系统格式吗？\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("\n"); printf("输入错误，请重新输入\n"); goto ce201;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t高级快速格式化磁盘为NTFS文件系统格式\n");
		printf("请输入要进行高级快速格式化为NTFS文件系统格式的磁盘盘符：");
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
		printf("\t终止进程\n");
		printf("请输入要终止的进程名（如：explorer.exe，输入错误则终止失败）：");
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
			printf("\n"); printf("\t确定重置网络设置（Winsock目录）吗？\n\t\t输入y：确定||输入n：取消\n");
			printf("请输入：");
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
				printf("\n"); printf("输入错误，请重新输入\n"); goto ce23;
			}
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("\t重置网络设置\n");
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
		printf("\n"); printf("\t确定高级快速格式化磁盘为FAT32文件系统格式吗？\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("\n"); printf("输入错误，请重新输入\n"); goto ce200;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t高级快速格式化磁盘为FAT32文件系统格式\n");
		printf("请输入要进行高级快速格式化为FAT32文件系统格式的磁盘盘符：");
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
		printf("\t测试与任一网址或ip地址的连通性\n");
		printf("请输入网址或ip地址：");
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
		printf("\n"); printf("\t确定修复磁盘吗？（这可能会花费较长时间）\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("输入错误，请重新输入\n");
			goto chk;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t修复磁盘\n");
		printf("请输入要修复的磁盘盘符：");
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
		printf("输入错误，请重新输入\n");
		goto n2;
	}
n3:;
}
void gly()
{
	system("color 0F");
	system("title 管理菜单");
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
	printf("\t输入字母【A】：进入启动菜单\n");
	printf("\t输入字母【B】：进入修复菜单\n");
	printf("\t输入字母【C】：搜索\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t输入数字【0】：退出程序\n");
	printf("     C·输入数字【1】：查看全部账户（net user）\n");
	printf("\t输入数字【2】：查看账户具体信息（net user *）\n");
	printf("\t输入数字【3】：查看系统信息（systeminfo）\n");
	printf("\t输入数字【4】：查看本机ip地址（ipconfig/all）\n");
	printf("\t输入数字【5】：创建新账户（net user * * /add）\n");
	printf("\t输入数字【6】：查看并编辑日期和时间（date&time）\n");
	printf("\t输入数字【7】：创建上帝模式快捷方式（类标识符实现）至本程序所在文件夹\n");
	printf("     D·输入数字【8】：导入注册表使文件开机自启动\n");
	printf("\t输入数字【9】：倒计时关机（shutdown -s -t *）\n");
	printf("\t输入字母【a】：倒计时重启（shutdown -r -t *）\n");
	printf("     G·输入字母【b】：更改已有账户的密码（net user * *）\n");
	printf("     J·输入字母【c】：禁用账户（net user * /active:no）\n");
	printf("\t输入字母【d】：将账户提升至管理员权限（net localgroup administrators * /add）\n");
	printf("     L·输入字母【e】：立即注销（shutdown -l）\n");
	printf("\t输入字母【f】：立即锁定计算机（rundll32 user32.dll,LockWorkStation）\n");
	printf("     Q·输入字母【g】：启用账户（net user * /active:yes）\n");
	printf("\t输入字母【h】：取消倒计时关机、重启命令（shutdown -a）\n");
	printf("     S·输入字母【i】：删除账户（net user * /del）\n");
	printf("\t输入字母【j】：刷新计算机策略（gpupdate）\n");
	printf("     W·输入字母【k】：为文件/文件夹设置隐藏+系统属性（attrib +s +h *）\n");
	printf("\t输入字母【l】：为文件/文件夹消除隐藏+系统属性（attrib -s -h *）\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("请输入：");
	fflush(stdin);
	scanf("%c", &ceshi);
	switch (ceshi)
	{
	case 105:
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t删除账户\n");
		printf("请输入要删除的已有账户：");
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
		printf("\t启用账户\n");
		printf("请输入要启用的已有账户：");
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
		printf("\t禁用账户\n");
		printf("请输入要禁用的已有账户：");
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
		printf("\t账户具体信息\n");
		printf("请输入要查看具体信息的已有账户：");
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
		printf("\t全部账户信息\n");
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
		printf("\t更改已有账户的密码\n");
		printf("请输入已有账户：");
		fflush(stdin);
		gets(zz);
		printf("请输入密码：");
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
		printf("\t将账户提升至管理员权限\n");
		printf("请输入要提升至管理员权限的账户：");
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
		 printf("\n"); printf("\t确定创建新账户吗？\n\t\t输入y：确定||输入n：取消\n");
		 printf("请输入：");
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
			 printf("\n"); printf("输入错误，请重新输入\n"); goto ce4;
		 }
		 system("cls"); for (a = 0; a < eee; a++)
			 printf("=");
		 printf("\n");
		 printf("\t创建新账户\n");
		 printf("请输入要创建的新账户：");
		 fflush(stdin);
		 gets(xx);
		 printf("请输入新账户的密码：");
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
		printf("\t刷新计算机策略\n");
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
		printf("\t为文件/文件夹设置隐藏+系统属性\n");
		printf("请输入文件/文件夹的绝对路径（可直接将文件/文件夹拖拽至此自动生成路径）：");
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
		printf("\t为文件/文件夹消除隐藏+系统属性\n");
		printf("请输入文件/文件夹的绝对路径（可直接将文件/文件夹拖拽至此自动生成路径）：");
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
		printf("\n"); printf("\t确定执行倒计时关机命令吗？\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("输入错误，请重新输入\n");
			goto ce11;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t执行关机命令\n");
		printf("请输入自定义时间（秒）：");
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
		printf("\t确定执行倒计时重启命令吗？\n\t\t输入y：确定||输入n：取消\n");
		printf("请输入：");
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
			printf("\n"); printf("输入错误，请重新输入\n");
			goto ce12;
		}
		system("cls");
		for (a = 0; a < eee; a++)
			printf("=");
		printf("\n");
		printf("\t执行重启命令\n");
		printf("请输入自定义时间（秒）：");
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
			printf("\n"); printf("\t确定执行立即注销命令吗？\n\t\t输入y：确定||输入n：取消\n");
			printf("请输入：");
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
				printf("\n"); printf("输入错误，请重新输入\n");  goto ce13;
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
		printf("\t取消倒计时关机、重启命令\n");
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
			printf("\n"); printf("\t确定创建上帝模式快捷方式（.{ED7BA470-8E54-465E-825C-99712043E01C}）吗？\n\t\t输入y：确定||输入n：取消\n");
			printf("请输入：");
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
				printf("\n"); printf("输入错误，请重新输入\n"); goto ce5;
			}
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("\t上帝模式\n");
			system("mkdir 上帝模式.{ED7BA470-8E54-465E-825C-99712043E01C}");
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
		printf("\t立即锁定计算机\n");
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
			printf("\n"); printf("\t确定输入文件的绝对路径导入注册表使其开机自启动吗？（可直接将文件拖拽至此自动生成路径）\n\t\t输入y：确定||输入n：取消\n");
			printf("请输入：");
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
				printf("\n"); printf("输入错误，请重新输入\n"); goto ce20;
			}
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("\t导入注册表使文件开机自启动\n");
			printf("请输入要导入注册表的自定义键值名称：");
			fflush(stdin);
			gets(add1);
			strcat(add, add1);
			strcat(add, add2);
			printf("请输入文件的绝对路径（须带上引号，如：\"c:\\windows\\system32\\explorer.exe\"）：");
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
		printf("\t本机ip地址\n");
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
		printf("\t系统信息\n");
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
		printf("\t查看并编辑日期和时间\n");
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
		printf("输入错误，请重新输入\n");
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
	system("title 启动菜单");
a3:
	system("cls");
a99:
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t输入字母【A】：进入管理菜单\n");
	printf("\t输入字母【B】：进入修复菜单\n");
	printf("\t输入字母【C】：搜索\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("\t输入数字【0】：退出程序\n");
	printf("     B·输入数字【1】：备份或还原储存的用户名和密码（credwiz）\n");
	printf("     C·输入数字【2】：磁盘清理（cleanmgr）\n");
	printf("     D·输入数字【3】：Directx诊断工具（dxdiag）\n");
	printf("     G·输入数字【4】：关于\"Windows\"（winver）\n");
	printf("     I·输入数字【5】：ip地址侦测器（nslookup）\n");
	printf("\t输入数字【6】：IExpress Wizard（可制作CAB压缩文件）（iexpress） \n");
	printf("     J·输入数字【7】：计算机管理（compmgmt.msc）\n");
	printf("\t输入数字【8】：加密账户数据库（syskey）\n");
	printf("     K·输入数字【9】：控制台（mmc）\n");
	printf("\t输入字母【a】：控制面板（control.exe）\n");
	printf("     O·输入字母【b】：ODBC数据源管理（odbcad32）\n");
	printf("     R·输入字母【c】：任务管理器（taskmgr）\n");
	printf("     W·输入字母【d】：文件签名验证（sigverif）\n");
	printf("     X·输入字母【e】：系统信息（msinfo32）\n");
	printf("\t输入字母【f】：系统配置（msconfig.exe）\n");
	printf("\t输入字母【g】：性能监视器（perfmon.msc）\n");
	printf("     Z·输入字母【h】：组件服务（dcomcnfg）\n");
	printf("\t输入字母【i】：证书管理（certmgr.msc）\n");
	printf("\t输入字母【j】：资源管理器（explorer）\n");
	printf("\t输入字母【k】：资源监视器（resmon.exe）\n");
	printf("\t输入字母【l】：组策略编辑器（gpedit.msc）\n");
	printf("\t输入字母【m】：注册表编辑器（regedit.exe）\n");
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("请输入：");
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
		printf("输入错误，请重新输入\n");
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
	printf("\t输入数字【0】：退出程序\n");
	printf("\t输入数字【1】：进入启动菜单\n");
	printf("\t输入数字【2】：进入管理菜单\n");
	printf("\t输入数字【3】：进入修复菜单\n");
	printf("\t输入数字【4】：搜索\n");
	printf("\t输入数字【5】：关于\n");
	printf("\t\t操作系统：%s ", GetVersionInfo());
	const int nBitSys = GetSystemBits();
	_tprintf(_T("%d-bit\n"), nBitSys);
	for (a = 0; a < eee; a++)
		printf("=");
	printf("\n");
	printf("请输入：");
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
		printf("\t【功能】\n");
		printf("\t·通过简化命令提示符的命令实现对系统的管理与修复\n");
		printf("\t【作者】\n");
		printf("\t·CaseClosedX@outlook.com\n");
		printf("\t【版本】\n");
		printf("\t·v1.3.0.0（对应日期：某年4月30日）\n");
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
		printf("输入错误，请重新输入\n");
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
			return "未知操作系统";
		}
	}
	else if (osvi.dwMajorVersion == 10)
	{
		switch (osvi.dwMinorVersion)
		{
		case 0:return "Windows 10";
		default:return "未知操作系统";
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
			return "未知操作系统";
		}
	}
	else
	{
		return "未知操作系统";
	}
}
void search()
{
	system("title 搜索");
	system("color F0");
cdy:
	char *key;
	key = (char *)malloc(sizeof(char)* 10);
	strcpy(key, "加密账户");
	char *time2;
	time2 = (char *)malloc(sizeof(char)* 10);
	char *time3;
	time3 = (char *)malloc(sizeof(char)* 10);
	char *r;
	r = (char *)malloc(sizeof(char)* 6);
	strcpy(r, "重启");
	char *black;
	black = (char *)malloc(sizeof(char)* 6); 
	strcpy(black, "待机");
	char *s;
	s = (char *)malloc(sizeof(char)* 6);
	strcpy(s, "关机");
	char *task;
	task = (char *)malloc(sizeof(char)* 10);
	strcpy(task, "当前进程");
	char *dk;
	dk = (char *)malloc(sizeof(char)* 6);
	strcpy(dk, "分区");
	char *sh;
	sh = (char *)malloc(sizeof(char)* 50);
	char *chinese;
	chinese = (char *)malloc(sizeof(char)* 6);
	strcpy(chinese, "关于");
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
	strcpy(jietu, "截图");
	char *renwu;
	renwu = (char *)malloc(sizeof(char)* 12);
	strcpy(renwu, "任务管理器");
	char *jisuanjiguanli;
	jisuanjiguanli = (char *)malloc(sizeof(char)* 12);
	strcpy(jisuanjiguanli, "计算机管理");
	char *zhucebiao;
	zhucebiao = (char *)malloc(sizeof(char)* 8);
	strcpy(zhucebiao, "注册表");
	char *zucelue;
	zucelue = (char *)malloc(sizeof(char)* 8);
	strcpy(zucelue, "组策略");
	char *jihua;
	jihua = (char *)malloc(sizeof(char)* 10);
	strcpy(jihua, "计划任务");
	char *xtpz;
	xtpz = (char *)malloc(sizeof(char)* 10);
	strcpy(xtpz, "系统配置");
	char *cpql;
	cpql = (char *)malloc(sizeof(char)* 10);
	strcpy(cpql, "磁盘清理");
	char *sjck;
	sjck = (char *)malloc(sizeof(char)* 10);
	strcpy(sjck, "事件查看");
	char *xtx;
	xtx = (char *)malloc(sizeof(char)* 10);
	strcpy(xtx, "系统信息");
	char *xnjs;
	xnjs = (char *)malloc(sizeof(char)* 10);
	strcpy(xnjs, "性能监视");
	char *zyjs;
	zyjs = (char *)malloc(sizeof(char)* 10);
	strcpy(zyjs, "资源监视");
	char *con;
	con = (char *)malloc(sizeof(char)* 10);
	strcpy(con, "控制面板");
	char *dir;
	dir = (char *)malloc(sizeof(char)* 6);
	strcpy(dir, "诊断");
	char *zyg;
	zyg = (char *)malloc(sizeof(char)* 14);
	strcpy(zyg, "资源管理器");
	char *ts;
	ts = (char *)malloc(sizeof(char)* 12);
	strcpy(ts, "添加或删除");
	char *jh;
	jh = (char *)malloc(sizeof(char)* 6);
	strcpy(jh, "激活");
	char *xk;
	xk = (char *)malloc(sizeof(char)* 8);
	strcpy(xk, "许可证");
	char *bb;
	bb = (char *)malloc(sizeof(char)* 6);
	strcpy(bb, "版本");
	char *sb;
	sb = (char *)malloc(sizeof(char)* 6);
	strcpy(sb, "设备");
	char *cp;
	cp = (char *)malloc(sizeof(char)* 6);
	strcpy(cp, "磁盘");
	char *kzt;
	kzt = (char *)malloc(sizeof(char)* 8);
	strcpy(kzt, "控制台");
	char *aq;
	aq = (char *)malloc(sizeof(char)* 10);
	strcpy(aq, "安全策略");
	char *fw;
	fw = (char *)malloc(sizeof(char)* 6);
	strcpy(fw, "服务");
	char *yh;
	yh = (char *)malloc(sizeof(char)* 10);
	strcpy(yh, "用户和组");
	char *jj;
	jj = (char *)malloc(sizeof(char)* 8);
	strcpy(jj, "结果集");
	char *zz;
	zz = (char *)malloc(sizeof(char)* 6);
	strcpy(zz, "组件");
	char *gg;
	gg = (char *)malloc(sizeof(char)* 10);
	strcpy(gg, "管理体系");
	char *ss;
	ss = (char *)malloc(sizeof(char)* 8);
	strcpy(ss, "数据源");
	char *bz;
	bz = (char *)malloc(sizeof(char)* 10);
	strcpy(bz, "步骤记录");
	char *qm;
	qm = (char *)malloc(sizeof(char)* 6);
	strcpy(qm, "签名");
	char *ys;
	ys = (char *)malloc(sizeof(char)* 10);
	strcpy(ys, "压缩");
	char *jsq;
	jsq = (char *)malloc(sizeof(char)* 8);
	strcpy(jsq, "计算器");
	char *zs;
	zs = (char *)malloc(sizeof(char)* 6);
	strcpy(zs, "证书");
	char *yc;
	yc = (char *)malloc(sizeof(char)* 10);
	strcpy(yc, "远程桌面");
	char *zf;
	zf = (char *)malloc(sizeof(char)* 6);
	strcpy(zf, "字符");
	char *zzz;
	zzz = (char *)malloc(sizeof(char)* 10);
	strcpy(zzz, "字符映射");
	char *bh;
	bh = (char *)malloc(sizeof(char)* 12);
	strcpy(bh, "备份或还原");
	char *jpp;
	jpp = (char *)malloc(sizeof(char)* 6);
	strcpy(jpp, "键盘");
	char *zsz;
	zsz = (char *)malloc(sizeof(char)* 8);
	strcpy(zsz, "掷骰子");
	char *hss;
	hss = (char *)malloc(sizeof(char)* 6);
	strcpy(hss, "作者");
	char *dz;
	dz = (char *)malloc(sizeof(char)* 14);
	strcpy(dz, "ip地址侦测");
	char *all;
	all = (char *)malloc(sizeof(char)* 10);
	strcpy(all, "常用命令");
	char *zx;
	zx = (char *)malloc(sizeof(char)* 6);
	strcpy(zx, "注销");
	char *net;
	net = (char *)malloc(sizeof(char)* 10);
	strcpy(net, "重置网络");
	char *sd;
	sd = (char *)malloc(sizeof(char)* 10);
	strcpy(sd, "上帝模式");
	char *dns;
	dns = (char *)malloc(sizeof(char)* 12);
	strcpy(dns, "刷新DNS");
	char *cmd;
	cmd = (char *)malloc(sizeof(char)* 12);
	strcpy(cmd, "命令提示符");
	char *power;
	power = (char *)malloc(sizeof(char)* 12);
	strcpy(power, "PowerShell");
	char *l;
	l = (char *)malloc(sizeof(char)* 12);
	strcpy(l, "锁定计算机");
	char *ip;
	ip = (char *)malloc(sizeof(char)* 10);
	strcpy(ip, "ip地址");
	char *sys;
	sys = (char *)malloc(sizeof(char)* 14);
	strcpy(sys, "文本系统信息");
	char *sfc;
	sfc = (char *)malloc(sizeof(char)* 14);
	strcpy(sfc, "修复系统文件");
	char *ck;
	ck = (char *)malloc(sizeof(char)* 14);
	strcpy(ck, "查看系统映像");
	char *xf;
	xf = (char *)malloc(sizeof(char)* 14);
	strcpy(xf, "修复系统映像");
	char *f5;
	f5 = (char *)malloc(sizeof(char)* 10);
	strcpy(f5, "刷新策略");
	char *use;
	use = (char *)malloc(sizeof(char)* 10);
	strcpy(use, "全部账户");
	char *dt;
	dt = (char *)malloc(sizeof(char)* 10);
	strcpy(dt, "日期时间");
js2:	
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
js666:	
	printf("\t输入数字【0】：退出程序\n");
	printf("\t输入字母【A】：进入管理菜单\n");
	printf("\t输入字母【B】：进入启动菜单\n");
	printf("\t输入字母【C】：进入修复菜单\n");
	printf("\t输入字母【D】：查看全部搜索关键字\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("请输入要搜索的关键字（关键字仅用于启动系统程序和查看信息）：\n");
	fflush(stdin);
	gets(sh);
	if (_stricmp(chinese, sh) == 0)
	{
	system("cls");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t【功能】\n");
	printf("\t·通过简化命令提示符的命令实现对系统的管理与修复\n");
	printf("\t【作者】\n");
	printf("\t·CaseClosedX@outlook.com\n");
	printf("\t【版本】\n");
	printf("\t·v1.3.0.0（对应日期：某年4月30日）\n");
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
			printf("\n"); printf("\t确定进入待机模式：黑客帝国吗？\n\t\t输入y：确定||输入n：取消\n");
			printf("请输入：");
			fflush(stdin);
			scanf("%c", &ceshi);
			switch (ceshi)
			{
			case 121:break;
			case 110:goto js2;
			default:system("cls"); for (a = 0; a < eee; a++)
				printf("=");
				printf("\n"); printf("输入错误，请重新输入\n");  goto ce27;
			}
			system("cls");
			for (a = 0; a < eee; a++)
				printf("=");
			printf("\n");
			printf("请输入待机至时间（须精确到秒，如 12:30:50） ：");
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
		printf("\t当前所有进程\n");
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
	printf("\t全部搜索关键字\n");
	printf("     A·安全策略\n");
	printf("     B·版本\n");
	printf("\t步骤记录\n");
	printf("\t备份或还原\n");
	printf("     C·重启\n");
	printf("\t磁盘\n");
	printf("\t磁盘清理\n");
	printf("\t常用命令\n");
	printf("\t重置网络\n");
	printf("\t查看系统映像\n");
	printf("     D·待机\n");
	printf("\t当前进程\n");
	printf("     F·服务\n");
	printf("\t分区\n");
	printf("     G·关机\n");
	printf("\t关于\n");
	printf("\t管理体系\n");
	printf("     I·ip地址\n");
	printf("\tip地址侦测\n");
	printf("     J·激活\n");
	printf("\t键盘\n");
	printf("\t结果集\n");
	printf("\t计算器\n");
	printf("\t计划任务\n");
	printf("\t加密账户\n"); 
	printf("\t计算机管理\n");
	printf("     K·控制台\n");
	printf("\t控制面板\n");
	printf("     M·命令提示符\n");
	printf("     P·PowerShell\n");
	printf("     Q·签名\n");
	printf("\t全部账户\n");
	printf("     R·日期时间\n");
	printf("\t任务管理器\n");
	printf("     S·设备\n");
	printf("\t数据源\n");
	printf("\t刷新DNS\n");
	printf("\t事件查看\n");
	printf("\t刷新策略\n");
	printf("\t上帝模式\n");
	printf("\t锁定计算机\n");
	printf("     T·添加或删除\n");
	printf("     W·文本系统信息\n");
	printf("     X·许可证\n");
	printf("\t系统配置\n");
	printf("\t系统信息\n");
	printf("\t性能监视\n");
	printf("\t修复系统文件\n");
	printf("\t修复系统映像\n");
	printf("     Y·压缩\n");
	printf("\t用户和组\n");
	printf("\t远程桌面\n");
	printf("     Z·注销\n");
	printf("\t证书\n");
	printf("\t字符\n");
	printf("\t诊断\n");
	printf("\t组件\n");
	printf("\t注册表\n");
	printf("\t组策略\n");
	printf("\t掷骰子\n");
	printf("\t字符映射\n");
	printf("\t资源监视\n");
	printf("\t资源管理器\n");
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
	printf("\t查看并编辑日期和时间\n");
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
	printf("\t全部账户\n");
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
	printf("\t查看系统映像是否损坏\n");
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
	printf("\t刷新计算机策略\n");
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
	printf("\t联网修复系统映像\n");
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
	printf("\t修复系统文件\n");
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
	printf("\t锁定计算机\n");
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
	printf("\t刷新DNS缓存\n");
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
	printf("\t本机ip地址\n");
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
	printf("\t系统信息\n");
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
	printf("\t重置网络设置\n");
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
	printf("\t常用命令\n");
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
	printf("\t上帝模式\n");
	system("mkdir 上帝模式.{ED7BA470-8E54-465E-825C-99712043E01C}");
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
	printf("彩蛋：【真·qq号】\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t【作者的大号】\n");
	printf("\t·保密\n");
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
	printf("\n"); printf("\t确定开始游戏吗？\n\t\t输入y：确定||输入n：取消\n");
	printf("请输入：");
	fflush(stdin);
	scanf("%c", &ceshi);
	switch (ceshi)
	{
	case 121:break;
	case 110:	goto js2;
	default:
		system("cls"); for (a = 0; a < eee; a++)
	printf("=");
	printf("\n"); printf("输入错误，请重新输入\n");
	goto y;
	}
	tz99:	system("cls");
	srand((unsigned)time(NULL));
	number = rand() % 7;
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	printf("\t电脑骰子点数为 %d\n\n", number);
	n2 = rand() % 7;
	printf("\t你的骰子点数为 %d\n", n2);
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	if (n2 > number)
	printf("\t\t运气不错哦～\n");
	else if (n2 < number)
	printf("\t\t悲催啦～\n");
	else if (n2 == number)
	printf("\t\t你和电脑的运气一样哦～\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	y1:printf("\t是否再来一局？\n\t\t输入y：确定||输入n：取消\n");
	printf("请输入：");
	fflush(stdin);
	scanf("%c", &ceshi);
	switch (ceshi)
	{
	case 121:goto tz99; break;
	case 110:goto js2;
	default:system("cls"); for (a = 0; a < eee; a++)
	printf("=");
	printf("\n"); printf("输入错误，请重新输入\n");  for (a = 0; a < eee; a++)
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
	printf("抱歉，没有搜索到该关键字\n");
	printf("猜你想输入：\n");
	if (strpbrk(sh, aq) != NULL)
		printf("     A·安全策略\n");
	if (strpbrk(sh, bb) != NULL)
		printf("     B·版本\n");
	if (strpbrk(sh, bb) != NULL)
		printf("\t步骤记录\n");
	if (strpbrk(sh, bh) != NULL)
		printf("\t备份或还原\n");
	if (strpbrk(sh, r) != NULL)
		printf("     C·重启\n");
	if (strpbrk(sh, cp) != NULL)
		printf("\t磁盘\n");
	if (strpbrk(sh, cpql) != NULL)
		printf("\t磁盘清理\n");
	if (strpbrk(sh, all) != NULL)
		printf("\t常用命令\n");
	if (strpbrk(sh, net) != NULL)
		printf("\t重置网络\n");
	if (strpbrk(sh, ck) != NULL)
		printf("\t查看系统映像\n");
	if (strpbrk(sh, black) != NULL)
		printf("     D·待机\n");
	if (strpbrk(sh, task) != NULL)
		printf("\t当前进程\n");
	if (strpbrk(sh, fw) != NULL)
		printf("     F·服务\n");
	if (strpbrk(sh, dk) != NULL)
		printf("\t分区\n");
	if (strpbrk(sh, s) != NULL)
		printf("     G·关机\n");
	if (strpbrk(sh, chinese) != NULL)
		printf("\t关于\n");
	if (strpbrk(sh, gg) != NULL)
		printf("\t管理体系\n");
	if (strpbrk(sh, ip) != NULL)
		printf("     I·ip地址\n");
	if (strpbrk(sh, dz) != NULL)
		printf("\tip地址侦测\n");
	if (strpbrk(sh, jh) != NULL)
		printf("     J·激活\n");
	if (strpbrk(sh, jpp) != NULL)
		printf("\t键盘\n");
	if (strpbrk(sh, jj) != NULL)
		printf("\t结果集\n");
	if (strpbrk(sh, jsq) != NULL)
		printf("\t计算器\n");
	if (strpbrk(sh, jihua) != NULL)
		printf("\t计划任务\n");
	if (strpbrk(sh, key) != NULL)
		printf("\t加密账户\n");
	if (strpbrk(sh, jisuanjiguanli) != NULL)
		printf("\t计算机管理\n");
	if (strpbrk(sh, kzt) != NULL)
		printf("     K·控制台\n");
	if (strpbrk(sh, con) != NULL)
		printf("\t控制面板\n");
	if (strpbrk(sh, cmd) != NULL)
		printf("     M·命令提示符\n");
	if (strpbrk(sh, power) != NULL)
		printf("     P·PowerShell\n");
	if (strpbrk(sh, qm) != NULL)
		printf("     Q·签名\n");
	if (strpbrk(sh, use) != NULL)
		printf("\t全部账户\n");
	if (strpbrk(sh, dt) != NULL)
		printf("     R·日期时间\n");
	if (strpbrk(sh, renwu) != NULL)
		printf("\t任务管理器\n");
	if (strpbrk(sh, sb) != NULL)
		printf("     S·设备\n");
	if (strpbrk(sh, ss) != NULL)
		printf("\t数据源\n");
	if (strpbrk(sh, dns) != NULL)
		printf("\t刷新DNS\n");
	if (strpbrk(sh, sjck) != NULL)
		printf("\t事件查看\n");
	if (strpbrk(sh, f5) != NULL)
		printf("\t刷新策略\n");
	if (strpbrk(sh, sd) != NULL)
		printf("\t上帝模式\n");
	if (strpbrk(sh, l) != NULL)
		printf("\t锁定计算机\n");
	if (strpbrk(sh, ts) != NULL)
		printf("     T·添加或删除\n");
	if (strpbrk(sh, sys) != NULL)
		printf("     W·文本系统信息\n");
	if (strpbrk(sh, xk) != NULL)
		printf("     X·许可证\n");
	if (strpbrk(sh, xtpz) != NULL)
		printf("\t系统配置\n");
	if (strpbrk(sh, xtx) != NULL)
		printf("\t系统信息\n");
	if (strpbrk(sh, xnjs) != NULL)
		printf("\t性能监视\n");
	if (strpbrk(sh, sfc) != NULL)
		printf("\t修复系统文件\n");
	if (strpbrk(sh, xf) != NULL)
		printf("\t修复系统映像\n");
	if (strpbrk(sh, ys) != NULL)
		printf("     Y·压缩\n");
	if (strpbrk(sh, yh) != NULL)
		printf("\t用户和组\n");
	if (strpbrk(sh, yc) != NULL)
		printf("\t远程桌面\n");
	if (strpbrk(sh, zx) != NULL)
		printf("     Z·注销\n");
	if (strpbrk(sh, zs) != NULL)
		printf("\t证书\n");
	if (strpbrk(sh, zf) != NULL)
		printf("\t字符\n");
	if (strpbrk(sh, dir) != NULL)
		printf("\t诊断\n");
	if (strpbrk(sh, zz) != NULL)
		printf("\t组件\n");
	if (strpbrk(sh, zhucebiao) != NULL)
		printf("\t注册表\n");
	if (strpbrk(sh, zucelue) != NULL)
		printf("\t组策略\n");
	if (strpbrk(sh, zsz) != NULL)
		printf("\t掷骰子\n");
	if (strpbrk(sh, zzz) != NULL)
		printf("\t字符映射\n");
	if (strpbrk(sh, zyjs) != NULL)
		printf("\t资源监视\n");
	if (strpbrk(sh, zyg) != NULL)
		printf("\t资源管理器\n");
	for (a = 0; a < eee; a++)
	printf("=");
	printf("\n");
	goto js666;
	}
	js:;
}

