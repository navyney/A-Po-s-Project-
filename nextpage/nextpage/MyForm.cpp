#include "MyForm.h"
#include"mix.h"
#include"vocab.h"
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
    nextpage::vocab formvocab;
	

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
        else if (formmix.switchTovocab) {
            formvocab.ShowDialog();
            formmix.switchTovocab = false;
        }
        else if (formvocab.switchTomix) {
            formmix.ShowDialog();
            formvocab.switchTomix = false;
        }else {
           
            break;
        }
    }
}	