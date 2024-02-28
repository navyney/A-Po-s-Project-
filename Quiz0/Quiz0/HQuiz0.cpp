#include "HQuiz0.h"
#include "Quiz0.h"

using namespace Quiz0;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew HQuiz0());
}