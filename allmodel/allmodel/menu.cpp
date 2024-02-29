#include "menu.h"
#include"conso.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    allmodel::menu form;
    allmodel::conso formcon;

    form.ShowDialog();

    while (true) {
            if (form.switchTocon) {
              formcon.ShowDialog();
                form.switchTocon = false;
         }
        else if (formcon.switchToformhome) {
            form.ShowDialog();
            formcon.switchToformhome = false;
        }
        else {
            break;
        }
    }

}

