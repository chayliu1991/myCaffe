#pragma once

#include <gflags/gflags.h>
#include <glog/logging.h>


#include <climits>
#include <cmath>
#include <fstream>  
#include <iostream>  
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>  
#include <vector>



namespace caffe
{
	using std::fstream;
	using std::ios;
	using std::isnan;
	using std::isinf;
	using std::iterator;
	using std::make_pair;
	using std::map;
	using std::ostringstream;
	using std::pair;
	using std::set;
	using std::string;
	using std::stringstream;
	using std::vector;


	//@ 全局初始化函数，需要在main函数中调用,目前使用该函数初始化 google flags,logging
	void GlobalInit(int* pargc, char*** pargv);
	

//@ Caffe是一个单例
//class Caffe
//{
//public:
//	~Caffe();
//	static Caffe& Get();
//
//	enum Brew {CPU,GPU};
//
//private:
//	Caffe();
//};

}


