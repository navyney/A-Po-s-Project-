#include "menu.h"
#include"conso.h"
#include"vo.h"
#include"tonenew.h"
#include"msound.h"
#include"ex0.h"
#include"HQuiz0.h"
#include"Quiz0.h"
#include"vo1.h"
#include"one.h"
//#include"HQuiz1.h"

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
    allmodel::ex0 formex0;
    allmodel::HQuiz0 formHQ0;
    allmodel::Quiz0 formQ0;
    allmodel::vo1 formvo01;
    allmodel::one formcon1;
   // allmodel::HQuiz1 formHQ1;

    form.ShowDialog();//menu page

    while (true) {
            if (form.switchToformcon) {
                formcon.ShowDialog();
                form.switchToformcon = false;//consonant page
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
        else if (formmix.switchToformex0) {
                formex0.ShowDialog();
                formmix.switchToformex0 = false; // Excaption0 page
            }
        else if (formex0.switchToformmix) {
                formmix.ShowDialog();
                formex0.switchToformmix = false;//back  mixsound page
            }
        else if (formex0.switchToformHQ0) {
                formHQ0.ShowDialog();
                formex0.switchToformHQ0 = false; // Before Quiz0 page
            }
        else if (formHQ0.switchToformex0) {
                formex0.ShowDialog();
                formHQ0.switchToformex0 = false;//back  Excaption0 page
            }
        else if (formHQ0.switchToformQ0) {
                formQ0.ShowDialog();
                formHQ0.switchToformQ0 = false; //  Quiz0 page
            }
        else if (formQ0.switchToformHQ0) {
                formHQ0.ShowDialog();
                formQ0.switchToformHQ0 = false;//back  Before Quiz0  page
            }
        else if (form.switchToformHQ0) {
                formHQ0.ShowDialog();
                form.switchToformHQ0 = false; // home to Quiz0 page
            }
        else if (formHQ0.switchToformvo01) {
                formvo01.ShowDialog();
                formHQ0.switchToformvo01 = false; //  vocab1 page
            }
        else if (formvo01.switchToformHQ0) {
                formHQ0.ShowDialog();
                formvo01.switchToformHQ0 = false;//back  Before Quiz0  page
            }
        else if (form.switchToformvo01) {
                formvo01.ShowDialog();
                form.switchToformvo01 = false; // home to vocab1 page
            }
        else if (formvo01.switchToformcon1) {
                formcon1.ShowDialog();
                formvo01.switchToformcon1 = false; //  consonant1 page
            }
        else if (formcon1.switchToformvo01) {
                formvo01.ShowDialog();
                formcon1.switchToformvo01= false;//back  Before consonant1   page
            }
        else {
            break;
        }
    }

}
