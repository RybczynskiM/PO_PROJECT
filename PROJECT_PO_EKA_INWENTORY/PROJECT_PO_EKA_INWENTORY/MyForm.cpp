#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PROJECT_PO_EKA_INWENTORY::MyForm form;
	Application::Run(%form);
}