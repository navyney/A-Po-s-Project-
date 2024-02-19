#include "MyForm.h"
#include"MyForm1.h"
#include"tone.h"
#include"mix.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    nextpage::MyForm form;
    nextpage::MyForm1 form1;
    nextpage::tone formtone;
    nextpage::mix formmix;

    form.ShowDialog();
    while (true) {
        if (form.switchToform1) {
            form1.ShowDialog();
            form.switchToform1 = false;
        }
        else if (form1.switchToform) {
            form.ShowDialog();
            form1.switchToform= false;
        }
        else if (form1.switchToformtone) {
            formtone.ShowDialog();
            form1.switchToformtone = false;
        }
        else if (formtone.switchToform1) {
            form1.ShowDialog();
            formtone.switchToform1 = false;
        }
        else {
            break;
        }
    }
}