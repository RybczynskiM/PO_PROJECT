#pragma once


namespace PROJECT_PO_EKA_INWENTORY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for overall_index
	/// </summary>
	public ref class overall_index : public System::Windows::Forms::Form
	{
	public:
		overall_index(void)
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
		~overall_index()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Label^  select_type;
	private: System::Windows::Forms::Label^  o_i_value;
	private: System::Windows::Forms::Label^  o_i_count;
	private: System::Windows::Forms::Button^  o_i_return;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->select_type = (gcnew System::Windows::Forms::Label());
			this->o_i_value = (gcnew System::Windows::Forms::Label());
			this->o_i_count = (gcnew System::Windows::Forms::Label());
			this->o_i_return = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Rezystory", L"Kondensatory", L"Cewki", L"inne" });
			this->comboBox1->Location = System::Drawing::Point(50, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(130, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Rodzaj elementu...";
			// 
			// select_type
			// 
			this->select_type->AutoSize = true;
			this->select_type->Location = System::Drawing::Point(47, 9);
			this->select_type->Name = L"select_type";
			this->select_type->Size = System::Drawing::Size(133, 13);
			this->select_type->TabIndex = 1;
			this->select_type->Text = L"Wybierz rodzaj elementów:";
			this->select_type->Click += gcnew System::EventHandler(this, &overall_index::select_type_Click);
			// 
			// o_i_value
			// 
			this->o_i_value->AutoSize = true;
			this->o_i_value->Location = System::Drawing::Point(47, 93);
			this->o_i_value->Name = L"o_i_value";
			this->o_i_value->Size = System::Drawing::Size(52, 13);
			this->o_i_value->TabIndex = 2;
			this->o_i_value->Text = L"Wartoœci:";
			// 
			// o_i_count
			// 
			this->o_i_count->AutoSize = true;
			this->o_i_count->Location = System::Drawing::Point(148, 93);
			this->o_i_count->Name = L"o_i_count";
			this->o_i_count->Size = System::Drawing::Size(32, 13);
			this->o_i_count->TabIndex = 3;
			this->o_i_count->Text = L"Iloœæ:";
			// 
			// o_i_return
			// 
			this->o_i_return->Cursor = System::Windows::Forms::Cursors::Hand;
			this->o_i_return->Location = System::Drawing::Point(71, 330);
			this->o_i_return->Name = L"o_i_return";
			this->o_i_return->Size = System::Drawing::Size(75, 23);
			this->o_i_return->TabIndex = 4;
			this->o_i_return->Text = L"Powrót";
			this->o_i_return->UseVisualStyleBackColor = true;
			this->o_i_return->Click += gcnew System::EventHandler(this, &overall_index::o_i_return_Click);
			// 
			// overall_index
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(226, 365);
			this->ControlBox = false;
			this->Controls->Add(this->o_i_return);
			this->Controls->Add(this->o_i_count);
			this->Controls->Add(this->o_i_value);
			this->Controls->Add(this->select_type);
			this->Controls->Add(this->comboBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"overall_index";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wykaz elementów";
			this->Load += gcnew System::EventHandler(this, &overall_index::overall_index_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void select_type_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void o_i_return_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 this->Close();
				 
				 
	}
private: System::Void overall_index_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
