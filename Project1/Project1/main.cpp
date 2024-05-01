#include "OrderTrackingForm.h"
using namespace Project1;
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    OrderTrackingForm^ form = gcnew OrderTrackingForm();
    Application::Run(form);

    return 0;
}
