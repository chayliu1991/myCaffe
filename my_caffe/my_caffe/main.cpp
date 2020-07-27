// my_caffe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include "caffe/common.h"


int main(int argc, char** argv)
{
	caffe::GlobalInit(&argc,&argv);

    return 0;
}

