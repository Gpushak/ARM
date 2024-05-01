#include "OrderTrackingForm.h"
#include <vector>
#include <string>

using namespace Project1;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace std;
/*
OrderTrackingForm::OrderTrackingForm()
{
    AddButton = gcnew Button();
    AddButton->Text = "Add Order";
    AddButton->Location = Point(10, 10);
    AddButton->Size = Size(75, 23);
    AddButton->Click += gcnew EventHandler(this, &OrderTrackingForm::OnClick);
    Controls->Add(AddButton);

    filterButton = gcnew Button();
    filterButton->Text = "Filter";
    filterButton->Location = Point(90, 10);
    filterButton->Size = Size(75, 23);
    filterButton->Click += gcnew EventHandler(this, &OrderTrackingForm::OnClick);
    Controls->Add(filterButton);

    statusComboBox = gcnew ComboBox();
    statusComboBox->Items->Add("New");
    statusComboBox->Items->Add("In Progress");
    statusComboBox->Items->Add("Completed");
    statusComboBox->Location = Point(170, 10);
    statusComboBox->Size = Size(121, 21);
    Controls->Add(statusComboBox);

    orderDataGridView = gcnew DataGridView();
    orderDataGridView->Location = Point(10, 40);
    orderDataGridView->Size = Size(280, 200);
    orderDataGridView->Columns->Add("Order ID", "Order ID");
    orderDataGridView->Columns->Add("Status", "Status");
    Controls->Add(orderDataGridView);
}

void OrderTrackingForm::OnLoad(EventArgs^ e)
{
    Text = "Order Tracking";
    Size = Size(300, 250);
    StartPosition = FormStartPosition::CenterScreen;
}

void OrderTrackingForm::OnClick(Object^ sender, EventArgs^ e)
{
    if (sender == AddButton)
    {
        // Add a new order
        orders.push_back("New");
        orderDataGridView->Rows->Add(orders.size(), "New");
    }
    else if (sender == filterButton)
    {
        // Filter orders by status
        orderDataGridView->Rows->Clear();
        for (int i = 0; i < orders.size(); i++)
        {
            if (orders[i] == statusComboBox->SelectedItem)
            {
                orderDataGridView->Rows->Add(i + 1, orders[i]);
            }
        }
    }
}
*/