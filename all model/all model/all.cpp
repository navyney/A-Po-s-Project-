#include "all.h"
#include "newconsonant.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    nextpage::all form;
    nextpage::newconsonant formconso;
    form.ShowDialog();
    while (true) {
        if
    
    };
}