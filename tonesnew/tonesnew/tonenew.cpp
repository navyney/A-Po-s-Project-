#include "tonenew.h"


using namespace tonesnew;

void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew tonenew());
}