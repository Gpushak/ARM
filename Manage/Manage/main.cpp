#include "ManageForm.h"
using namespace Manage;
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ManageForm^ form = gcnew ManageForm();
    Application::Run(form);

    return 0;
}