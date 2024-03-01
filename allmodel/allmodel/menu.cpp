#include "menu.h"
#include"conso.h"
#include"vo.h"
#include"tonenew.h"
#include"msound.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    allmodel::menu form;
    allmodel::conso formcon;
    allmodel::vo formvo;
    allmodel::tonenew formtone;
    allmodel::msound formmix;

    form.ShowDialog();//menu page

    while (true) {
            if (form.switchTocon) {
                formcon.ShowDialog();
                form.switchTocon = false;//consonant page
         }
        else if (formcon.switchToformhome) {
                form.ShowDialog();
                formcon.switchToformhome = false;//back menu page
        }
        else if (formcon.switchToformvo) {
                formvo.ShowDialog();
                formcon.switchToformvo = false;//vowel page
            }
        else if (formvo.switchToformcon) {
                formcon.ShowDialog();
                formvo.switchToformcon = false;//back consonant page
            }
        else if (formvo.switchToformtone) {
                formtone.ShowDialog();
                formvo.switchToformtone = false; //tone page
            }
        else if (formtone.switchToformvo) {
                formvo.ShowDialog();
                formtone.switchToformvo = false;//back vowel page
            }
        else if (formtone.switchToformmix) {
                formmix.ShowDialog();
                formtone.switchToformmix = false; //mixsound page
            }
        else if (formmix.switchToformtone) {
                formtone.ShowDialog();
                formmix.switchToformtone = false;//back tone page
            }
        else {
            break;
        }
    }

}

