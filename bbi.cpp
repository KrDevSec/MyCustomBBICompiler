/***********************************************************************/
/*    filename:bbi.cpp 메인 처리                                       */
/*    BBI 인터프리터 (Rev 1.01) Copyright (c) 2011 Haruhiko Hayashi    */
/*    Modified By Dongho, Lim ( korea.devsec@gmail.com ), 2016.06.12   */
/***********************************************************************/
#include "bbi.h"
#include "bbi_prot.h"

#define STRING_BUFFER 256

int main(int argc, char *argv[])
{
	char *pPath = NULL;					/* Path String Pointer */
	char szBuffer[STRING_BUFFER] = "";
	puts(" ------------------------------------------------------ ");
	puts(" [*] MyCompiler ");
	puts(" [*] Modified By Dongho Lim ");
	puts(" [*] korea.devsec@gmail.com ");
	puts(" ------------------------------------------------------ ");

	if( argc >= 2)
	{
		pPath = argv[1];				/* Link Pointer */
	}
	else	/* argc == 0, not exist lpCmdLine */
	{
		printf_s(" [*] Path >> ");
		gets_s(szBuffer, STRING_BUFFER);
		pPath = szBuffer;			/* Link Pointer */
		system("cls");				/* cmd : cls */
		RunMode_Compile(pPath);		/* Load Compiler */
		exit(1);
	}

	puts(" ------------------------------------------------------ ");

	return 0;
}

