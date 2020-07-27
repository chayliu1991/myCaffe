
#include "caffe/common.h"

namespace caffe
{ 
void GlobalInit(int* pargc, char*** pargv)
{
	//@ 初始化 google flags
	google::ParseCommandLineFlags(pargc, pargv,true);
	//@ 初始化 google logging
	google::InitGoogleLogging(*(pargv)[0]);
	//@ 程序出现严重错误时打印信息
	google::InstallFailureSignalHandler();
}

}