#pragma once

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->BeginInit();
			this->SuspendLayout();
			// 
			// button_index
			// 
			this->button_index->Location = System::Drawing::Point(12, 86);
			this->button_index->Name = L"button_index";
			this->button_index->Size = System::Drawing::Size(109, 23);
			this->button_index->TabIndex = 0;
			this->button_index->Text = L"Wykaz elementów";
			this->button_index->UseVisualStyleBackColor = true;
			// 
			// button_take
			// 
			this->button_take->Location = System::Drawing::Point(12, 115);
			this->button_take->Name = L"button_take";
			this->button_take->Size = System::Drawing::Size(109, 23);
			this->button_take->TabIndex = 1;
			this->button_take->Text = L"Pobierz z magazynu";
			this->button_take->UseVisualStyleBackColor = true;
			// 
			// button_add
			// 
			this->button_add->Location = System::Drawing::Point(12, 144);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(109, 23);
			this->button_add->TabIndex = 2;
			this->button_add->Text = L"Dodaj do magazynu";
			this->button_add->UseVisualStyleBackColor = true;
			// 
			// button_inv
			// 
			this->button_inv->Location = System::Drawing::Point(12, 173);
			this->button_inv->Name = L"button_inv";
			this->button_inv->Size = System::Drawing::Size(109, 23);
			this->button_inv->TabIndex = 3;
			this->button_inv->Text = L"Inwentaryzacja";
			this->button_inv->UseVisualStyleBackColor = true;
			// 
			// label_overall
			// 
			this->label_overall->AutoSize = true;
			this->label_overall->Location = System::Drawing::Point(205, 96);
			this->label_overall->Name = L"label_overall";
			this->label_overall->Size = System::Drawing::Size(195, 13);
			this->label_overall->TabIndex = 4;
			this->label_overall->Text = L"£¹czna suma elementów w magazynie: ";
			// 
			// label_inv_overall
			// 
			this->label_inv_overall->AutoSize = true;
			this->label_inv_overall->Location = System::Drawing::Point(250, 125);
			this->label_inv_overall->Name = L"label_inv_overall";
			this->label_inv_overall->Size = System::Drawing::Size(150, 13);
			this->label_inv_overall->TabIndex = 5;
			this->label_inv_overall->Text = L"Rzeczywista iloœæ elementów: ";
			this->label_inv_overall->Click += gcnew System::EventHandler(this, &MyForm::label_inv_overall_Click);
			// 
			// label_types_count
			// 
			this->label_types_count->AutoSize = true;
			this->label_types_count->Location = System::Drawing::Point(261, 154);
			this->label_types_count->Name = L"label_types_count";
			this->label_types_count->Size = System::Drawing::Size(139, 13);
			this->label_types_count->TabIndex = 6;
			this->label_types_count->Text = L"Iloœæ Rodzajów elementów: ";
			// 
			// button_remove
			// 
			this->button_remove->Location = System::Drawing::Point(12, 202);
			this->button_remove->Name = L"button_remove";
			this->button_remove->Size = System::Drawing::Size(139, 23);
			this->button_remove->TabIndex = 7;
			this->button_remove->Text = L"Usuñ element z magazynu";
			this->button_remove->UseVisualStyleBackColor = true;
			// 
			// LOGO
			// 
			this->LOGO->BackColor = System::Drawing::Color::Transparent;
			this->LOGO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LOGO.Image")));
			this->LOGO->Location = System::Drawing::Point(12, 12);
			this->LOGO->Name = L"LOGO";
			this->LOGO->Size = System::Drawing::Size(444, 68);
			this->LOGO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->LOGO->TabIndex = 8;
			this->LOGO->TabStop = false;
			this->LOGO->Click += gcnew System::EventHandler(this, &MyForm::LOGO_Click);
			// 
			// Program_by
			// 
			this->Program_by->AutoSize = true;
			this->Program_by->Location = System::Drawing::Point(93, 268);
			this->Program_by->Name = L"Program_by";
			this->Program_by->Size = System::Drawing::Size(63, 13);
			this->Program_by->TabIndex = 9;
			this->Program_by->Text = L"Program by:";
			this->Program_by->Click += gcnew System::EventHandler(this, &MyForm::Program_by_Click);
			// 
			// names
			// 
			this->names->AutoSize = true;
			this->names->Location = System::Drawing::Point(162, 268);
			this->names->Name = L"names";
			this->names->Size = System::Drawing::Size(294, 13);
			this->names->TabIndex = 10;
			this->names->Text = L"Rybczyñski Micha³, Jêdrzej Przybyszewski, Mateusz Œwiêtek";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 290);
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
			this->Name = L"MyForm";
			this->Text = L"Inwentarz Elektronika 2014";
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
};
}
