#include "menu.h"
#include"conso.h"
#include"vo.h"
#include"tonenew.h"
#include"msound.h"
#include"ex0.h"
#include"HQuiz0.h"
#include"Quiz0.h"
#include"vo1.h"
#include"number.h"
#include"one.h"
#include"HQuiz1.h"
#include"Quiz1.h"
#include"vocab2v1.h"
#include"praTwo.h"
#include"sarm.h"
#include"Quiz2.h"
#include"MenuQuiz2.h"
#include"vocab3new.h"
#include"My7days.h"
#include"MenuQTh.h"
#include"QTh.h"


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
    allmodel::number formnum;
    allmodel::one formcon1;
    allmodel::HQuiz1 formHQ1;
    allmodel::Quiz1 formQ1;
    allmodel::vocab2v1 formvo2;
    allmodel::praTwo formcon2;
    allmodel::Quiz2 formQ2;
    allmodel::MenuQuiz2 formHQ2;
    allmodel::vocab3new formvo3;
    allmodel::My7days form7day;
    allmodel::sarm formcon3;
    allmodel::MenuQTh formHQ3;
    allmodel::QTh formQ3;


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
        else if (formvo01.switchToformnum) {
                formnum.ShowDialog();
                formvo01.switchToformnum = false; //  number page
            }
        else if (formnum.switchToformvo01) {
                formvo01.ShowDialog();
                formnum.switchToformvo01= false;//back  Before vocab1   page
            }
        else if (formnum.switchToformcon1) {
                formcon1.ShowDialog();
                formnum.switchToformcon1 = false; //  consonant 1 page
            }
        else if (formcon1.switchToformnum) {
                formnum.ShowDialog();
                formcon1.switchToformnum = false;//back  Before vocab1   page
            }
        else if (form.switchToformHQ1) {
                formHQ1.ShowDialog();
                form.switchToformHQ1 = false; // home to Quiz1 page
            }
        else if (formHQ1.switchToformcon1) {
                formcon1.ShowDialog();
                formHQ1.switchToformcon1 = false;//back  consonant 1  page
            }
        else if(formHQ1.switchToformQ1){
                formQ1.ShowDialog();
                formHQ1.switchToformQ1 = false;//  Quiz1 page
            }
        else if (formQ1.switchToformHQ1) {
            formHQ1.ShowDialog();
            formQ1.switchToformHQ1 = false;//back  Before  Quiz1 page
            }
        else if (formcon1.switchToformHQ1) {
                formHQ1.ShowDialog();
                formcon1.switchToformHQ1 = false;// Before  Quiz1  page
                }
        else if (form.switchToformHQ2) {
                    formHQ2.ShowDialog();
                    form.switchToformHQ2 = false; // home to Quiz3 page
                    }
        else if (formHQ1.switchToformvo2) {
                    formvo2.ShowDialog();
                    formHQ1.switchToformvo2 = false; // vocab2 page
                    }
        else if  (formvo2.switchToformHQ1) {
                  formHQ1.ShowDialog();
                  formvo2.switchToformHQ1 = false; // vocab2 page
                   }
        else if (formvo2.switchToformcon2) {
                    formcon2.ShowDialog();
                    formvo2.switchToformcon2 = false; //  consonant 2 page
                      }
        else if (formcon2.switchToformvo2) {
                    formvo2.ShowDialog();
                     formcon2.switchToformvo2 = false;//back  vocab2  page
                       }
        else if (formHQ2.switchToformcon2) {
                formcon2.ShowDialog();
                formHQ2.switchToformcon2 = false;//back  consonant 1  page
                }
        else if (formcon2.switchToformHQ2) {
                formHQ2.ShowDialog();
                formcon2.switchToformHQ2 = false; //    Before  Quiz2 page
                }
        else if (form.switchToformvo2) {
                formvo2.ShowDialog();
                form.switchToformvo2 = false; // home to vocab2 page
                }
        else if (formQ2.switchToformHQ2) {
                formHQ2.ShowDialog();
                formQ2.switchToformHQ2 = false;//back  Before  Quiz2 page
                }
        else if (formHQ2.switchToformQ2) {
                formQ2.ShowDialog();
                formHQ2.switchToformQ2 = false;// Quiz2 page
                }
        else if (formvo3.switchToformHQ2) {
            formHQ2.ShowDialog();
            formvo3.switchToformHQ2 = false;//back  Before  vocab3 page
            }
        else if (formHQ2.switchToformvo3) {
                formvo3.ShowDialog();
                formHQ2.switchToformvo3 = false;//  vocab3 page
            }
        else if (form.switchToformvo3) {
                formvo3.ShowDialog();
                form.switchToformvo3 = false; // home to vocab3 page
                }
        else if (formvo3.switchToform7day) {
            form7day.ShowDialog();
            formvo3.switchToform7day = false;//  vocab3 page
            }
        else if (form7day.switchToformvo3) {
                    formvo3.ShowDialog();
                    form7day.switchToformvo3 = false; //  back vocab3 page
                    }
        else if (form7day.switchToformvo3) {
                    formvo3.ShowDialog();
                    form7day.switchToformvo3 = false;//back  Before vocab3   page
                        }
        else if (form7day.switchToformcon3) {
            formcon3.ShowDialog();
            form7day.switchToformcon3 = false;//back  Before vocab3   page
            }
        else if (formcon3.switchToform7day) {
            form7day.ShowDialog();
            formcon3.switchToform7day = false;//back  Before vocab3   page
            }
        else if (form.switchToformHQ3) {
                  formHQ3.ShowDialog();
                  form.switchToformHQ3 = false; // home to Quiz3 page
                 }
        else if (formHQ3.switchToformcon3) {
                   formcon3.ShowDialog();
                   formHQ3.switchToformcon3 = false;//back  consonant 3  page
                   }
        else if (formcon3.switchToformHQ3) {
                   formHQ3.ShowDialog();
                   formcon3.switchToformHQ3 = false;//  Before Quiz3   page
                   }
        else if (formHQ3.switchToformQ3) {
                 formQ3.ShowDialog();
                  formHQ3.switchToformQ3 = false;// Quiz3 page
                 }
        else if (formQ3.switchToformHQ3) {
                   formHQ3.ShowDialog();
                   formQ3.switchToformHQ3 = false;// back Before Quiz3   page
                   }
        else if (formHQ0.switchToform) {
                     form.ShowDialog();
                     formHQ0.switchToform = false;//  Quiz0 to home  page
                     }
        else if (formHQ1.switchToform) {
                         form.ShowDialog();
                         formHQ1.switchToform = false;//  Quiz1 to home  page
                         }
        else if (formHQ2.switchToform) {
                             form.ShowDialog();
                             formHQ2.switchToform = false;//  Quiz2 to home  page
                             }
        else if (formHQ3.switchToform) {
              form.ShowDialog();
               formHQ3.switchToform = false;//  Quiz3 to home  page
       }

        else {
            break;
        }
    }

}
