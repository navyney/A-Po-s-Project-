#include "MyForm.h"
#include "MyForm0.h"
using namespace QUIZZ;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
}

  