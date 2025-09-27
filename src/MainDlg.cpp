#include "MainDlg.h"

BEGIN_MESSAGE_MAP(CMainDlg, CDialog)
    ON_COMMAND(IDC_BUTTON_ROLL, &CMainDlg::OnBnClickedRollDice)
END_MESSAGE_MAP()

void CMainDlg::OnBnClickedRollDice() {
    int dice = rand() % 6 + 1;
    CString msg;
    msg.Format(_T("You rolled: %d"), dice);
    MessageBox(msg);
}  