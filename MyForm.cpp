#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // �������� � ������ �����
    Zavdanny_2::MyForm^ form = gcnew Zavdanny_2::MyForm();
    Application::Run(form);
}