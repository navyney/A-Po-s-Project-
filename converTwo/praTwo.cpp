<<<<<<<< HEAD:converOne/one.cpp
#include "one.h"

using namespace converOne;
========
#include "praTwo.h"

using namespace converTwo;
>>>>>>>> d6f69fe83cb435475ab6a5ade334a9e72ae379c4:converTwo/praTwo.cpp

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
<<<<<<<< HEAD:converOne/one.cpp
	Application::Run(gcnew one());
}
========
	Application::Run(gcnew praTwo());
}

>>>>>>>> d6f69fe83cb435475ab6a5ade334a9e72ae379c4:converTwo/praTwo.cpp
