
// DigiverterDlg.h : 头文件
//

#pragma once

#define MAX_BIT_LEN 64

typedef unsigned char BYTE;
typedef unsigned short WORD;
//typedef unsigned int DWORD;
typedef unsigned long long QWORD;


// CDigiverterDlg 对话框
class CDigiverterDlg : public CDialog
{
// 构造
public:
    CDigiverterDlg(CWnd* pParent = NULL);    // 标准构造函数

// 对话框数据
    enum { IDD = IDD_DIGIVERTER_DIALOG };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持


// 实现
protected:
    HICON m_hIcon;
    void BoardCastVaule(QWORD BoardNumber, WORD BlindId);
    BYTE GetBit(QWORD BoardNumber, BYTE BitPos);
    void OnEnChangeBit(BYTE BitPos);
    // 生成的消息映射函数
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()
	BOOL PreTranslateMessage(MSG* pMsg);

public:
    afx_msg void OnEnChangeHex();
    afx_msg void OnEnChangeDec();
    afx_msg void OnEnChangeBin();
    afx_msg void OnEnChangeBit1();
    afx_msg void OnEnChangeBit2();
    afx_msg void OnEnChangeBit3();
    afx_msg void OnEnChangeBit4();
    afx_msg void OnEnChangeBit5();
    afx_msg void OnEnChangeBit6();
    afx_msg void OnEnChangeBit7();
    afx_msg void OnEnChangeBit8();
    afx_msg void OnEnChangeBit9();
    afx_msg void OnEnChangeBit10();
    afx_msg void OnEnChangeBit11();
    afx_msg void OnEnChangeBit12();
    afx_msg void OnEnChangeBit13();
    afx_msg void OnEnChangeBit14();
    afx_msg void OnEnChangeBit15();
    afx_msg void OnEnChangeBit16();
    afx_msg void OnEnChangeBit17();
    afx_msg void OnEnChangeBit18();
    afx_msg void OnEnChangeBit19();
    afx_msg void OnEnChangeBit20();
    afx_msg void OnEnChangeBit21();
    afx_msg void OnEnChangeBit22();
    afx_msg void OnEnChangeBit23();
    afx_msg void OnEnChangeBit24();
    afx_msg void OnEnChangeBit25();
    afx_msg void OnEnChangeBit26();
    afx_msg void OnEnChangeBit27();
    afx_msg void OnEnChangeBit28();
    afx_msg void OnEnChangeBit29();
    afx_msg void OnEnChangeBit30();
    afx_msg void OnEnChangeBit31();
    afx_msg void OnEnChangeBit32();
    afx_msg void OnEnChangeBit33();
    afx_msg void OnEnChangeBit34();
    afx_msg void OnEnChangeBit35();
    afx_msg void OnEnChangeBit36();
    afx_msg void OnEnChangeBit37();
    afx_msg void OnEnChangeBit38();
    afx_msg void OnEnChangeBit39();
    afx_msg void OnEnChangeBit40();
    afx_msg void OnEnChangeBit41();
    afx_msg void OnEnChangeBit42();
    afx_msg void OnEnChangeBit43();
    afx_msg void OnEnChangeBit44();
    afx_msg void OnEnChangeBit45();
    afx_msg void OnEnChangeBit46();
    afx_msg void OnEnChangeBit47();
    afx_msg void OnEnChangeBit48();
    afx_msg void OnEnChangeBit49();
    afx_msg void OnEnChangeBit50();
    afx_msg void OnEnChangeBit51();
    afx_msg void OnEnChangeBit52();
    afx_msg void OnEnChangeBit53();
    afx_msg void OnEnChangeBit54();
    afx_msg void OnEnChangeBit55();
    afx_msg void OnEnChangeBit56();
    afx_msg void OnEnChangeBit57();
    afx_msg void OnEnChangeBit58();
    afx_msg void OnEnChangeBit59();
    afx_msg void OnEnChangeBit60();
    afx_msg void OnEnChangeBit61();
    afx_msg void OnEnChangeBit62();
    afx_msg void OnEnChangeBit63();
    afx_msg void OnEnChangeBit64();
};
