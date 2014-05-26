#pragma once

namespace PROJECT_PO_EKA_INWENTORY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for take_form
	/// </summary>
	public ref class take_form : public System::Windows::Forms::Form
	{
	public:
		take_form(void)
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
		~take_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox_rodzaj;
	protected:

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  left_count;
	private: System::Windows::Forms::Label^  count;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  bar_count;

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
			this->comboBox_rodzaj = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->left_count = (gcnew System::Windows::Forms::Label());
			this->count = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->bar_count = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox_rodzaj
			// 
			this->comboBox_rodzaj->FormattingEnabled = true;
			this->comboBox_rodzaj->Location = System::Drawing::Point(27, 33);
			this->comboBox_rodzaj->Name = L"comboBox_rodzaj";
			this->comboBox_rodzaj->Size = System::Drawing::Size(121, 21);
			this->comboBox_rodzaj->TabIndex = 0;
			this->comboBox_rodzaj->Text = L"Rodzaj Elementu";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(27, 60);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->Text = L"Wartoœæ";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(27, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Pobierz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &take_form::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(27, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Powrót";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &take_form::button2_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(27, 87);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 5;
			this->comboBox3->Text = L"Tolerancja";
			// 
			// left_count
			// 
			this->left_count->AutoSize = true;
			this->left_count->Location = System::Drawing::Point(27, 215);
			this->left_count->Name = L"left_count";
			this->left_count->Size = System::Drawing::Size(58, 13);
			this->left_count->TabIndex = 6;
			this->left_count->Text = L"Pozosta³o:";
			// 
			// count
			// 
			this->count->AutoSize = true;
			this->count->Location = System::Drawing::Point(129, 215);
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(19, 13);
			this->count->TabIndex = 7;
			this->count->Text = L"99";
			// 
			// trackBar1
			// 
			this->trackBar1->Cursor = System::Windows::Forms::Cursors::NoMoveHoriz;
			this->trackBar1->Location = System::Drawing::Point(27, 141);
			this->trackBar1->Maximum = 20;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 45);
			this->trackBar1->TabIndex = 8;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &take_form::trackBar1_Scroll);
			// 
			// bar_count
			// 
			this->bar_count->AutoSize = true;
			this->bar_count->Location = System::Drawing::Point(62, 163);
			this->bar_count->Name = L"bar_count";
			this->bar_count->Size = System::Drawing::Size(34, 13);
			this->bar_count->TabIndex = 9;
			this->bar_count->Text = L"count";
			this->bar_count->Click += gcnew System::EventHandler(this, &take_form::bar_count_Click);
			// 
			// take_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(183, 295);
			this->ControlBox = false;
			this->Controls->Add(this->bar_count);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->count);
			this->Controls->Add(this->left_count);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox_rodzaj);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"take_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pobieranie z magazynu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->Close();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (trackBar1->Value == 0)
			 { 
				 MessageBox::Show("      Podaj iloœæ!"); 
			 }

			 else
			 {
				 MessageBox::Show("      Pomyœlnie pobrano\n     element z magazynu!");
			 }
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bar_count_Click(System::Object^  sender, System::EventArgs^  e) {

			 
}
};
}
