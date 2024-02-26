#include "MyForm.h"
#include"MyForm1.h"
#include"tone.h"
#include"mix.h"
#include"Lyv0.h"
#include"MyForm0.h"
#include"Quiz.h"
#include "Vocab1.h"


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
    nextpage::Lyv0 formLy;
    nextpage::MyForm0 formBQuiz;
    nextpage::Quiz formQuiz;
    nextpage::Vocab1 formv1;

    form.ShowDialog();
    while (true) {
        //page
        //1 to 2
        if (form.switchToform1) {
            form1.ShowDialog();
            form.switchToform1 = false;
        }
        //2 to 1
        else if (form1.switchToform) {
            form.ShowDialog();
            form1.switchToform = false;
        }
        //2 to 3
        else if (form1.switchToformtone) {
            formtone.ShowDialog();
            form1.switchToformtone = false;
        }
        //3 to 2
        else if (formtone.switchToform1) {
            form1.ShowDialog();
            formtone.switchToform1 = false;
        }
        //3 to 4
        else if (formtone.switchToformmix) {
            formmix.ShowDialog();
            formtone.switchToformmix = false;
        }
        //4 to3
        else if (formmix.switchToformtone) {
            formtone.ShowDialog();
            formmix.switchToformtone = false;
        }
        // 4 to 5
        else if (formmix.switchToformLy) {
            formLy.ShowDialog();
            formmix.switchToformLy = false;
        }
        //5 to 4
        else if (formLy.switchToformmix) {
            formmix.ShowDialog();
            formLy.switchToformmix = false;
        }
        //before page Quiz
        else if (formLy.switchToformBQuiz) {
            formBQuiz.ShowDialog();
            formLy.switchToformBQuiz = false;
        }
        //back to Ly
        else if (formBQuiz.switchToformLy) {
            formLy.ShowDialog();
            formBQuiz.switchToformLy = false;
        }
        //Quiz 0
        else if (formBQuiz.switchToformQuiz) {
            formQuiz.ShowDialog();
            formBQuiz.switchToformQuiz = false;
        }
        else if (formQuiz.switchToformBQuiz) {
            formBQuiz.ShowDialog();
            formQuiz.switchToformBQuiz = false;
        }
        else if (formBQuiz.switchToformv1) {
            formv1.ShowDialog();
            formBQuiz.switchToformv1 = false;
        }
        else if (formv1.switchToformBQuiz) {
            formBQuiz.ShowDialog();
            formv1.switchToformBQuiz = false;
        }
        else {
            break;
        }
    };
}