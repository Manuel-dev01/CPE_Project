#include <afxwin.h>
#include <MainDlg.h>

class MFCQuizApp : public CWinApp {
public:
    BOOL InitInstance() override {
        CMainDlg dlg;
        m_pMainWnd = &dlg
        dlg.DoModal();
        return FALSE;
    }
}; 

CPEQuizApp theApp;