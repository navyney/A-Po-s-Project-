#include "MyForm.h"
#include "test69.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    
    mungi::MyForm form;
    mungi::test69 form69;

    form.ShowDialog();
    while (true) {
        if (form.switchTo69) {
            form69.ShowDialog();
            form.switchTo69 = false;
        }
        else if(form69.switchToMyform) {
            form.ShowDialog();
            form69.switchToMyform = false;
        }
        else {
            break;
        }
    }


}
