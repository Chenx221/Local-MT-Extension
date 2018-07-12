#include "stdafx.h"

#define CURRENT_SELECT 0x1000

extern "C"
{
	/**
	* Param sentence: wstring of the sentence received by NextHooker
	* Param info: 64 bit integer that has bit flags set that convey additional info
	* Return value: wstring of the sentence that NextHooker should transform the original into
	* THIS FUNCTION MAY BE RUN SEVERAL TIMES CONCURRENTLY: PLEASE ENSURE THAT IT IS THREAD SAFE!
	*/
	std::wstring __declspec(dllexport) NewSentence(std::wstring sentence, DWORD64 info)
	{
		return sentence;
	}
}
