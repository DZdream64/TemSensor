
// TemSensor.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTemSensorApp: 
// �йش����ʵ�֣������ TemSensor.cpp
//

class CTemSensorApp : public CWinApp
{
public:
	CTemSensorApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTemSensorApp theApp;