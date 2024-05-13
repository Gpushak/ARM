#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

ref class ClassNames
{
public:
    ClassNames();

    String^ numbertable;
    property String^ NumberTable
    {
        String^ get()
        {
            return numbertable;
        }
        void set(String^ value)
        {
            numbertable = value;
        }
    }

    String^ numberorder;
    property String^ NumberOrder
    {
        String^ get()
        {
            return numberorder;
        }
        void set(String^ value)
        {
            numberorder = value;
        }
    }

    String^ namefood;
    property String^ NameFood
    {
        String^ get()
        {
            return namefood;
        }
        void set(String^ value)
        {
            namefood = value;
        }
    }

    String^ status;
    property String^ Status
    {
        String^ get()
        {
            return status;
        }
        void set(String^ value)
        {
            status = value;
        }
    }
};

