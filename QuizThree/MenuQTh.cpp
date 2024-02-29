#include "MenuQTh.h"
#include "QTh.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	QuizThree::MenuQTh M3;
	QuizThree::QTh Q3;

	M3.ShowDialog();
	while (true) {
		if (M3.switchToQ3) {
			Q3.ShowDialog();
			M3.switchToQ3 = false;
			break;
		}
		else {
			break;
		}
	}
}

