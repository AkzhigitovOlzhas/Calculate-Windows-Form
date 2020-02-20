#include "CalcForm.h"

using namespace Calculate;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектоа Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Создание главного окна и его запуск
	Application::Run(gcnew CalcForm());
	return 0;
}
