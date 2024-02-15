#include "MyForm.h"
#include"mix.h"
//using namespace nextpage;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	nextpage::MyForm form;
	nextpage::mix formmix;
	//Application::Run(gcnew MyForm());

    form.ShowDialog();
    while (true) {
        if (form.switchTomix) {
            formmix.ShowDialog();
            form.switchTomix = false;
        }
        else if (formmix.switchToMyForm) {
            form.ShowDialog();
            formmix.switchToMyForm = false;
        }
        else {
            break;
        }
    }
}	