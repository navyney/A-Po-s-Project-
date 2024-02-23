#include "MenuQuiz2.h"
#include "Quiz2.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Quiz2::MenuQuiz2 P1;
	Quiz2::Quiz2 Q2;

	P1.ShowDialog();
	while (true) {
		if (P1.switchToQ2) {
			Q2.ShowDialog();
			P1.switchToQ2 = false;
			break;
		}
		else {
			break;
		}
	}
}