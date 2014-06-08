#pragma once
#include "overall_index.h"
#include "take_form.h"
#include "dod_el.h"



namespace PROJECT_PO_EKA_INWENTORY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_index;
	protected:
	private: System::Windows::Forms::Button^  button_take;
	private: System::Windows::Forms::Button^  button_add;
	private: System::Windows::Forms::Button^  button_inv;
	private: System::Windows::Forms::Label^  label_overall;
	private: System::Windows::Forms::Label^  label_inv_overall;
	private: System::Windows::Forms::Label^  label_types_count;
	private: System::Windows::Forms::Button^  button_remove;
	private: System::Windows::Forms::PictureBox^  LOGO;
	private: System::Windows::Forms::Label^  Program_by;
	private: System::Windows::Forms::Label^  names;
	private: System::Windows::Forms::Button^  TURN_OFF;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_index = (gcnew System::Windows::Forms::Button());
			this->button_take = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_inv = (gcnew System::Windows::Forms::Button());
			this->label_overall = (gcnew System::Windows::Forms::Label());
			this->label_inv_overall = (gcnew System::Windows::Forms::Label());
			this->label_types_count = (gcnew System::Windows::Forms::Label());
			this->button_remove = (gcnew System::Windows::Forms::Button());
			this->LOGO = (gcnew System::Windows::Forms::PictureBox());
			this->Program_by = (gcnew System::Windows::Forms::Label());
			this->names = (gcnew System::Windows::Forms::Label());
			this->TURN_OFF = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->BeginInit();
			this->SuspendLayout();
			// 
			// button_index
			// 
			this->button_index->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button_index, L"button_index");
			this->button_index->Name = L"button_index";
			this->button_index->UseVisualStyleBackColor = true;
			this->button_index->Click += gcnew System::EventHandler(this, &MyForm::button_index_Click);
			// 
			// button_take
			// 
			this->button_take->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button_take, L"button_take");
			this->button_take->Name = L"button_take";
			this->button_take->UseVisualStyleBackColor = true;
			this->button_take->Click += gcnew System::EventHandler(this, &MyForm::button_take_Click);
			// 
			// button_add
			// 
			this->button_add->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button_add, L"button_add");
			this->button_add->Name = L"button_add";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_inv
			// 
			this->button_inv->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button_inv, L"button_inv");
			this->button_inv->Name = L"button_inv";
			this->button_inv->UseVisualStyleBackColor = true;
			// 
			// label_overall
			// 
			resources->ApplyResources(this->label_overall, L"label_overall");
			this->label_overall->Name = L"label_overall";
			// 
			// label_inv_overall
			// 
			resources->ApplyResources(this->label_inv_overall, L"label_inv_overall");
			this->label_inv_overall->Name = L"label_inv_overall";
			this->label_inv_overall->Click += gcnew System::EventHandler(this, &MyForm::label_inv_overall_Click);
			// 
			// label_types_count
			// 
			resources->ApplyResources(this->label_types_count, L"label_types_count");
			this->label_types_count->Name = L"label_types_count";
			// 
			// button_remove
			// 
			this->button_remove->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button_remove, L"button_remove");
			this->button_remove->Name = L"button_remove";
			this->button_remove->UseVisualStyleBackColor = true;
			// 
			// LOGO
			// 
			this->LOGO->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->LOGO, L"LOGO");
			this->LOGO->Name = L"LOGO";
			this->LOGO->TabStop = false;
			this->LOGO->Click += gcnew System::EventHandler(this, &MyForm::LOGO_Click);
			// 
			// Program_by
			// 
			resources->ApplyResources(this->Program_by, L"Program_by");
			this->Program_by->Name = L"Program_by";
			this->Program_by->Click += gcnew System::EventHandler(this, &MyForm::Program_by_Click);
			// 
			// names
			// 
			resources->ApplyResources(this->names, L"names");
			this->names->Name = L"names";
			// 
			// TURN_OFF
			// 
			this->TURN_OFF->BackColor = System::Drawing::SystemColors::HotTrack;
			resources->ApplyResources(this->TURN_OFF, L"TURN_OFF");
			this->TURN_OFF->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TURN_OFF->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->TURN_OFF->FlatAppearance->BorderSize = 5;
			this->TURN_OFF->ForeColor = System::Drawing::Color::Red;
			this->TURN_OFF->Name = L"TURN_OFF";
			this->TURN_OFF->UseVisualStyleBackColor = false;
			this->TURN_OFF->Click += gcnew System::EventHandler(this, &MyForm::TURN_OFF_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ControlBox = false;
			this->Controls->Add(this->TURN_OFF);
			this->Controls->Add(this->names);
			this->Controls->Add(this->Program_by);
			this->Controls->Add(this->LOGO);
			this->Controls->Add(this->button_remove);
			this->Controls->Add(this->label_types_count);
			this->Controls->Add(this->label_inv_overall);
			this->Controls->Add(this->label_overall);
			this->Controls->Add(this->button_inv);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button_take);
			this->Controls->Add(this->button_index);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label_inv_overall_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Program_by_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void LOGO_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button_index_Click(System::Object^  sender, System::EventArgs^  e) {			//Przycisk Wykaz Elementów

			 overall_index^ form2 = gcnew overall_index();	//Tworzy zmienna form2
			 form2->Show();	//Pokazuje menu po kliknieciu w Wykaz elementow	
			 

}

private: System::Void button_take_Click(System::Object^  sender, System::EventArgs^  e) {			//Przycisk Pobierz z magazynu

			 take_form^ form3 = gcnew take_form();
			 form3->Show();

}
private: System::Void TURN_OFF_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e) {
			 dod_el^ form4 = gcnew dod_el();
			 form4->Show();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
