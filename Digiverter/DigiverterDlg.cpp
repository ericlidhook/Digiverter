
// DigiverterDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Digiverter.h"
#include "DigiverterDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

QWORD g_CurNumber = 0;
// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

int BIT_IDC[MAX_BIT_LEN] =
{
    IDC_BIT1, IDC_BIT2, IDC_BIT3, IDC_BIT4, IDC_BIT5, IDC_BIT6, IDC_BIT7, IDC_BIT8,
    IDC_BIT9, IDC_BIT10, IDC_BIT11, IDC_BIT12, IDC_BIT13, IDC_BIT14, IDC_BIT15, IDC_BIT16,
    IDC_BIT17, IDC_BIT18, IDC_BIT19, IDC_BIT20, IDC_BIT21, IDC_BIT22, IDC_BIT23, IDC_BIT24,
    IDC_BIT25, IDC_BIT26, IDC_BIT27, IDC_BIT28, IDC_BIT29, IDC_BIT30, IDC_BIT31, IDC_BIT32,
    IDC_BIT33, IDC_BIT34, IDC_BIT35, IDC_BIT36, IDC_BIT37, IDC_BIT38, IDC_BIT39, IDC_BIT40,
    IDC_BIT41, IDC_BIT42, IDC_BIT43, IDC_BIT44, IDC_BIT45, IDC_BIT46, IDC_BIT47, IDC_BIT48,
    IDC_BIT49, IDC_BIT50, IDC_BIT51, IDC_BIT52, IDC_BIT53, IDC_BIT54, IDC_BIT55, IDC_BIT56,
    IDC_BIT57, IDC_BIT58, IDC_BIT59, IDC_BIT60, IDC_BIT61, IDC_BIT62, IDC_BIT63, IDC_BIT64,
};

class CAboutDlg : public CDialog
{
public:
    CAboutDlg();

// 对话框数据
    enum { IDD = IDD_ABOUTBOX };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
    DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CDigiverterDlg 对话框



CDigiverterDlg::CDigiverterDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CDigiverterDlg::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDigiverterDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CDigiverterDlg, CDialog)
    ON_WM_SYSCOMMAND()
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    ON_EN_CHANGE(IDC_HEX, &CDigiverterDlg::OnEnChangeHex)
    ON_EN_CHANGE(IDC_DEC, &CDigiverterDlg::OnEnChangeDec)
    ON_EN_CHANGE(IDC_BIN, &CDigiverterDlg::OnEnChangeBin)
    ON_EN_CHANGE(IDC_BIT1, &CDigiverterDlg::OnEnChangeBit1)
    ON_EN_CHANGE(IDC_BIT2, &CDigiverterDlg::OnEnChangeBit2)
    ON_EN_CHANGE(IDC_BIT3, &CDigiverterDlg::OnEnChangeBit3)
    ON_EN_CHANGE(IDC_BIT4, &CDigiverterDlg::OnEnChangeBit4)
    ON_EN_CHANGE(IDC_BIT5, &CDigiverterDlg::OnEnChangeBit5)
    ON_EN_CHANGE(IDC_BIT6, &CDigiverterDlg::OnEnChangeBit6)
    ON_EN_CHANGE(IDC_BIT7, &CDigiverterDlg::OnEnChangeBit7)
    ON_EN_CHANGE(IDC_BIT8, &CDigiverterDlg::OnEnChangeBit8)
    ON_EN_CHANGE(IDC_BIT9, &CDigiverterDlg::OnEnChangeBit9)
    ON_EN_CHANGE(IDC_BIT10, &CDigiverterDlg::OnEnChangeBit10)
    ON_EN_CHANGE(IDC_BIT11, &CDigiverterDlg::OnEnChangeBit11)
    ON_EN_CHANGE(IDC_BIT12, &CDigiverterDlg::OnEnChangeBit12)
    ON_EN_CHANGE(IDC_BIT13, &CDigiverterDlg::OnEnChangeBit13)
    ON_EN_CHANGE(IDC_BIT14, &CDigiverterDlg::OnEnChangeBit14)
    ON_EN_CHANGE(IDC_BIT15, &CDigiverterDlg::OnEnChangeBit15)
    ON_EN_CHANGE(IDC_BIT16, &CDigiverterDlg::OnEnChangeBit16)
    ON_EN_CHANGE(IDC_BIT17, &CDigiverterDlg::OnEnChangeBit17)
    ON_EN_CHANGE(IDC_BIT18, &CDigiverterDlg::OnEnChangeBit18)
    ON_EN_CHANGE(IDC_BIT19, &CDigiverterDlg::OnEnChangeBit19)
    ON_EN_CHANGE(IDC_BIT20, &CDigiverterDlg::OnEnChangeBit20)
    ON_EN_CHANGE(IDC_BIT21, &CDigiverterDlg::OnEnChangeBit21)
    ON_EN_CHANGE(IDC_BIT22, &CDigiverterDlg::OnEnChangeBit22)
    ON_EN_CHANGE(IDC_BIT23, &CDigiverterDlg::OnEnChangeBit23)
    ON_EN_CHANGE(IDC_BIT24, &CDigiverterDlg::OnEnChangeBit24)
    ON_EN_CHANGE(IDC_BIT25, &CDigiverterDlg::OnEnChangeBit25)
    ON_EN_CHANGE(IDC_BIT26, &CDigiverterDlg::OnEnChangeBit26)
    ON_EN_CHANGE(IDC_BIT27, &CDigiverterDlg::OnEnChangeBit27)
    ON_EN_CHANGE(IDC_BIT28, &CDigiverterDlg::OnEnChangeBit28)
    ON_EN_CHANGE(IDC_BIT29, &CDigiverterDlg::OnEnChangeBit29)
    ON_EN_CHANGE(IDC_BIT30, &CDigiverterDlg::OnEnChangeBit30)
    ON_EN_CHANGE(IDC_BIT31, &CDigiverterDlg::OnEnChangeBit31)
    ON_EN_CHANGE(IDC_BIT32, &CDigiverterDlg::OnEnChangeBit32)
    ON_EN_CHANGE(IDC_BIT33, &CDigiverterDlg::OnEnChangeBit33)
    ON_EN_CHANGE(IDC_BIT34, &CDigiverterDlg::OnEnChangeBit34)
    ON_EN_CHANGE(IDC_BIT35, &CDigiverterDlg::OnEnChangeBit35)
    ON_EN_CHANGE(IDC_BIT36, &CDigiverterDlg::OnEnChangeBit36)
    ON_EN_CHANGE(IDC_BIT37, &CDigiverterDlg::OnEnChangeBit37)
    ON_EN_CHANGE(IDC_BIT38, &CDigiverterDlg::OnEnChangeBit38)
    ON_EN_CHANGE(IDC_BIT39, &CDigiverterDlg::OnEnChangeBit39)
    ON_EN_CHANGE(IDC_BIT40, &CDigiverterDlg::OnEnChangeBit40)
    ON_EN_CHANGE(IDC_BIT41, &CDigiverterDlg::OnEnChangeBit41)
    ON_EN_CHANGE(IDC_BIT42, &CDigiverterDlg::OnEnChangeBit42)
    ON_EN_CHANGE(IDC_BIT43, &CDigiverterDlg::OnEnChangeBit43)
    ON_EN_CHANGE(IDC_BIT44, &CDigiverterDlg::OnEnChangeBit44)
    ON_EN_CHANGE(IDC_BIT45, &CDigiverterDlg::OnEnChangeBit45)
    ON_EN_CHANGE(IDC_BIT46, &CDigiverterDlg::OnEnChangeBit46)
    ON_EN_CHANGE(IDC_BIT47, &CDigiverterDlg::OnEnChangeBit47)
    ON_EN_CHANGE(IDC_BIT48, &CDigiverterDlg::OnEnChangeBit48)
    ON_EN_CHANGE(IDC_BIT49, &CDigiverterDlg::OnEnChangeBit49)
    ON_EN_CHANGE(IDC_BIT50, &CDigiverterDlg::OnEnChangeBit50)
    ON_EN_CHANGE(IDC_BIT51, &CDigiverterDlg::OnEnChangeBit51)
    ON_EN_CHANGE(IDC_BIT52, &CDigiverterDlg::OnEnChangeBit52)
    ON_EN_CHANGE(IDC_BIT53, &CDigiverterDlg::OnEnChangeBit53)
    ON_EN_CHANGE(IDC_BIT54, &CDigiverterDlg::OnEnChangeBit54)
    ON_EN_CHANGE(IDC_BIT55, &CDigiverterDlg::OnEnChangeBit55)
    ON_EN_CHANGE(IDC_BIT56, &CDigiverterDlg::OnEnChangeBit56)
    ON_EN_CHANGE(IDC_BIT57, &CDigiverterDlg::OnEnChangeBit57)
    ON_EN_CHANGE(IDC_BIT58, &CDigiverterDlg::OnEnChangeBit58)
    ON_EN_CHANGE(IDC_BIT59, &CDigiverterDlg::OnEnChangeBit59)
    ON_EN_CHANGE(IDC_BIT60, &CDigiverterDlg::OnEnChangeBit60)
    ON_EN_CHANGE(IDC_BIT61, &CDigiverterDlg::OnEnChangeBit61)
    ON_EN_CHANGE(IDC_BIT62, &CDigiverterDlg::OnEnChangeBit62)
    ON_EN_CHANGE(IDC_BIT63, &CDigiverterDlg::OnEnChangeBit63)
    ON_EN_CHANGE(IDC_BIT64, &CDigiverterDlg::OnEnChangeBit64)
END_MESSAGE_MAP()


// CDigiverterDlg 消息处理程序

BOOL CDigiverterDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    // 将“关于...”菜单项添加到系统菜单中。

    // IDM_ABOUTBOX 必须在系统命令范围内。
    ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
    ASSERT(IDM_ABOUTBOX < 0xF000);

    CMenu* pSysMenu = GetSystemMenu(FALSE);
    if (pSysMenu != NULL)
    {
        BOOL bNameValid;
        CString strAboutMenu;
        bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
        ASSERT(bNameValid);
        if (!strAboutMenu.IsEmpty())
        {
            pSysMenu->AppendMenu(MF_SEPARATOR);
            pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
        }
    }

    // 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
    //  执行此操作
    SetIcon(m_hIcon, TRUE);            // 设置大图标
    SetIcon(m_hIcon, FALSE);        // 设置小图标

    // TODO:  在此添加额外的初始化代码
    GetDlgItem(IDC_BIN)->SetWindowText(_T("0"));
    GetDlgItem(IDC_DEC)->SetWindowText(_T("0"));
    GetDlgItem(IDC_HEX)->SetWindowText(_T("0x0"));
    for (int i = 0; i < MAX_BIT_LEN; i++)
    {
        GetDlgItem(BIT_IDC[i])->SetWindowText(_T("0"));
    }

    return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CDigiverterDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
    if ((nID & 0xFFF0) == IDM_ABOUTBOX)
    {
        CAboutDlg dlgAbout;
        dlgAbout.DoModal();
    }
    else
    {
        CDialog::OnSysCommand(nID, lParam);
    }
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CDigiverterDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this); // 用于绘制的设备上下文

        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

        // 使图标在工作区矩形中居中
        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        // 绘制图标
        dc.DrawIcon(x, y, m_hIcon);
    }
    else
    {
        CDialog::OnPaint();
    }
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CDigiverterDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}

BOOL CDigiverterDlg::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE)
	{
		return TRUE;
	}

	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN)
	{
		return TRUE;
	}

	return CDialog::PreTranslateMessage(pMsg);
}


BYTE CDigiverterDlg::GetBit(QWORD BoardNumber, BYTE BitPos)
{
    return ((BoardNumber >> (BitPos - 1)) & 1);
}

void CDigiverterDlg::OnEnChangeBit(BYTE BitPos)
{
    CString str;
    BYTE BitVaule = 0;
    QWORD llNumber = 0;

    GetDlgItem(BIT_IDC[BitPos])->GetWindowText(str);
    BitVaule = (BYTE)_strtoui64(CT2A(str), NULL, 10);

    if ((str != "0") && (str != "1"))
    {
        GetDlgItem(BIT_IDC[BitPos])->SetWindowText(_T(""));
    }

    if (BitVaule == GetBit(g_CurNumber, (BitPos+1)))
    {
        return;
    }

    for (BYTE i = 0; i < MAX_BIT_LEN; i++)
    {
        GetDlgItem(BIT_IDC[i])->GetWindowText(str);
        BitVaule = (BYTE)_strtoui64(CT2A(str), NULL, 10);

        llNumber += (QWORD)(BitVaule * pow((double)2, i));
    }

    if (llNumber != g_CurNumber)
    {
        g_CurNumber = llNumber;
        BoardCastVaule(g_CurNumber, BIT_IDC[BitPos]);
    }

    return;
}

void CDigiverterDlg::BoardCastVaule(QWORD BoardNumber, WORD BlindId)
{
    CString str;
    CString binstr;

    BYTE bitVaule = 0;

    if (BlindId != IDC_DEC)
    {
        str.Format(_T("%I64u"), BoardNumber);
        GetDlgItem(IDC_DEC)->SetWindowText(str);
    }

    if (BlindId != IDC_HEX)
    {
        str.Format(_T("0x%I64x"), BoardNumber);
        GetDlgItem(IDC_HEX)->SetWindowText(str);
    }

    for (BYTE i = 0; i < MAX_BIT_LEN; i++)
    {
        if (BlindId != BIT_IDC[i])
        {
            str.Format(_T("%d"), GetBit(BoardNumber, (i + 1)));
            GetDlgItem(BIT_IDC[i])->SetWindowText(str);
        }
    }

    if (BlindId != IDC_BIN)
    {
        while (BoardNumber != 0)
        {
            str.Format(_T("%d"), BoardNumber % 2);
            BoardNumber = BoardNumber / 2;
            binstr.Insert(0,str);

        }
        GetDlgItem(IDC_BIN)->SetWindowText(binstr);
    }

    return;
}

void CDigiverterDlg::OnEnChangeHex()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    CString str;
    QWORD llNumber = 0;

    GetDlgItem(IDC_HEX)->GetWindowText(str);
    BYTE nLenth = GetDlgItem(IDC_HEX)->GetWindowTextLength();
    if (nLenth > ((MAX_BIT_LEN/4) + 2))
    {
        str.Delete(nLenth - 1);
		GetDlgItem(IDC_HEX)->SetWindowText(str);
    }

    llNumber = _strtoui64(CT2A(str), NULL, 16);
    if (llNumber != g_CurNumber)
    {
        g_CurNumber = llNumber;
        BoardCastVaule(g_CurNumber, IDC_HEX);
    }

    nLenth = GetDlgItem(IDC_HEX)->GetWindowTextLength();
    ((CEdit*)GetDlgItem(IDC_HEX))->SetSel(nLenth, nLenth, false);

    return;
}


void CDigiverterDlg::OnEnChangeDec()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    CString str;
    QWORD llNumber = 0;

    GetDlgItem(IDC_DEC)->GetWindowText(str);
    llNumber = _strtoui64(CT2A(str), NULL, 10);

    if (llNumber != g_CurNumber)
    {
        g_CurNumber = llNumber;
        BoardCastVaule(g_CurNumber, IDC_DEC);
    }

    BYTE nLenth = GetDlgItem(IDC_DEC)->GetWindowTextLength();
    ((CEdit*)GetDlgItem(IDC_DEC))->SetSel(nLenth, nLenth, false);

    return;

}

void CDigiverterDlg::OnEnChangeBin()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    CString str;
    QWORD llNumber = 0;
    GetDlgItem(IDC_BIN)->GetWindowText(str);
    
    BYTE iLength = str.GetLength();
    for (BYTE i = 0; i < iLength; i++)
    {
        BYTE iCharacter = (int)str.GetAt(i);

        if (((iCharacter != 0x30) && (iCharacter != 0x31))
            || (iLength == (MAX_BIT_LEN + 1)))
        {
            str.Delete(iLength - 1);
            GetDlgItem(IDC_BIN)->SetWindowText(str);
        }
    }
    
    llNumber = _strtoui64(CT2A(str), NULL, 2);

    if (llNumber != g_CurNumber)
    {
        g_CurNumber = llNumber;
        BoardCastVaule(g_CurNumber, IDC_BIN);
    }

    BYTE nLenth = GetDlgItem(IDC_BIN)->GetWindowTextLength();
    ((CEdit*)GetDlgItem(IDC_BIN))->SetSel(nLenth, nLenth, false);
    return;
}


void CDigiverterDlg::OnEnChangeBit1()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码

    OnEnChangeBit(0);
    return;
}

void CDigiverterDlg::OnEnChangeBit2()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码

    OnEnChangeBit(1);
    return;
}


void CDigiverterDlg::OnEnChangeBit3()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(2);
    return;
}


void CDigiverterDlg::OnEnChangeBit4()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(3);
    return;
}


void CDigiverterDlg::OnEnChangeBit5()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(4);
    return;
}


void CDigiverterDlg::OnEnChangeBit6()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(5);
    return;
}


void CDigiverterDlg::OnEnChangeBit7()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(6);
    return;
}


void CDigiverterDlg::OnEnChangeBit8()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(7);
    return;
}


void CDigiverterDlg::OnEnChangeBit9()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(8);
    return;
}


void CDigiverterDlg::OnEnChangeBit10()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(9);
    return;
}


void CDigiverterDlg::OnEnChangeBit11()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(10);
    return;
}


void CDigiverterDlg::OnEnChangeBit12()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(11);
    return;
}


void CDigiverterDlg::OnEnChangeBit13()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(12);
    return;
}


void CDigiverterDlg::OnEnChangeBit14()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(13);
    return;
}


void CDigiverterDlg::OnEnChangeBit15()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(14);
    return;
}


void CDigiverterDlg::OnEnChangeBit16()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(15);
    return;
}


void CDigiverterDlg::OnEnChangeBit17()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(16);
    return;
}

void CDigiverterDlg::OnEnChangeBit18()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(17);
    return;
}


void CDigiverterDlg::OnEnChangeBit19()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(18);
    return;
}


void CDigiverterDlg::OnEnChangeBit20()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(19);
    return;
}


void CDigiverterDlg::OnEnChangeBit21()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(20);
    return;
}


void CDigiverterDlg::OnEnChangeBit22()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(21);
    return;
}



void CDigiverterDlg::OnEnChangeBit23()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(22);
    return;
}



void CDigiverterDlg::OnEnChangeBit24()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(23);
    return;
}



void CDigiverterDlg::OnEnChangeBit25()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(24);
    return;
}



void CDigiverterDlg::OnEnChangeBit26()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(25);
    return;
}


void CDigiverterDlg::OnEnChangeBit27()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(26);
    return;
}



void CDigiverterDlg::OnEnChangeBit28()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(27);
    return;
}



void CDigiverterDlg::OnEnChangeBit29()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(28);
    return;
}



void CDigiverterDlg::OnEnChangeBit30()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(29);
    return;
}



void CDigiverterDlg::OnEnChangeBit31()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(30);
    return;
}



void CDigiverterDlg::OnEnChangeBit32()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(31);
    return;
}



void CDigiverterDlg::OnEnChangeBit33()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(32);
    return;
}


void CDigiverterDlg::OnEnChangeBit34()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(33);
    return;
}


void CDigiverterDlg::OnEnChangeBit35()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(34);
    return;
}


void CDigiverterDlg::OnEnChangeBit36()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(35);
    return;
}


void CDigiverterDlg::OnEnChangeBit37()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(36);
    return;
}


void CDigiverterDlg::OnEnChangeBit38()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(37);
    return;
}


void CDigiverterDlg::OnEnChangeBit39()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(38);
    return;
}


void CDigiverterDlg::OnEnChangeBit40()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(39);
    return;
}


void CDigiverterDlg::OnEnChangeBit41()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(40);
    return;
}


void CDigiverterDlg::OnEnChangeBit42()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(41);
    return;
}


void CDigiverterDlg::OnEnChangeBit43()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(42);
    return;
}


void CDigiverterDlg::OnEnChangeBit44()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(43);
    return;
}


void CDigiverterDlg::OnEnChangeBit45()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(44);
    return;
}


void CDigiverterDlg::OnEnChangeBit46()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(45);
    return;
}


void CDigiverterDlg::OnEnChangeBit47()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(46);
    return;
}


void CDigiverterDlg::OnEnChangeBit48()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(47);
    return;
}

void CDigiverterDlg::OnEnChangeBit49()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(48);
    return;
}

void CDigiverterDlg::OnEnChangeBit50()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(49);
    return;
}


void CDigiverterDlg::OnEnChangeBit51()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(50);
    return;
}

void CDigiverterDlg::OnEnChangeBit52()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(51);
    return;
}


void CDigiverterDlg::OnEnChangeBit53()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(52);
    return;
}


void CDigiverterDlg::OnEnChangeBit54()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(53);
    return;
}


void CDigiverterDlg::OnEnChangeBit55()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(54);
    return;
}


void CDigiverterDlg::OnEnChangeBit56()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(55);
    return;
}


void CDigiverterDlg::OnEnChangeBit57()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(56);
    return;
}

void CDigiverterDlg::OnEnChangeBit58()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(57);
    return;
}

void CDigiverterDlg::OnEnChangeBit59()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(58);
    return;
}


void CDigiverterDlg::OnEnChangeBit60()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(59);
    return;
}

void CDigiverterDlg::OnEnChangeBit61()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(60);
    return;
}

void CDigiverterDlg::OnEnChangeBit62()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(61);
    return;
}



void CDigiverterDlg::OnEnChangeBit63()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(62);
    return;
}


void CDigiverterDlg::OnEnChangeBit64()
{
    // TODO:  如果该控件是 RICHEDIT 控件，它将不
    // 发送此通知，除非重写 CDialogEx::OnInitDialog()
    // 函数并调用 CRichEditCtrl().SetEventMask()，
    // 同时将 ENM_CHANGE 标志“或”运算到掩码中。

    // TODO:  在此添加控件通知处理程序代码
    OnEnChangeBit(63);
    return;
}

