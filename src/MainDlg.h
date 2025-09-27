#pragma once
#include <afxwin.h>
#include "resource.h"

class CMainDlg : public CDialog {
public:
    CMainDlg() : CDialog(IDD_MAIN_DIALOG) {}

protected:
    afx_msg void OnBnClickedRollDice();
    DECLARE_MESSAGE_MAP()
};