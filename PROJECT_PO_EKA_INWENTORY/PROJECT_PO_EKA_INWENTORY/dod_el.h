#pragma once
#include "Element.h"
#include <fstream>
#include <iostream>

namespace PROJECT_PO_EKA_INWENTORY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for dod_el
	/// </summary>
	public ref class dod_el : public System::Windows::Forms::Form
	{
	public:
		
		dod_el(void)
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
		~dod_el()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  ic;
	private: System::Windows::Forms::TextBox^  ik;


	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::TextBox^  ir;
	private: System::Windows::Forms::TextBox^  ityr;
	private: System::Windows::Forms::TextBox^  itra;




	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  ind;
	private: System::Windows::Forms::TextBox^  pp;
	private: System::Windows::Forms::TextBox^  poj;
	private: System::Windows::Forms::TextBox^  rez;
	private: System::Windows::Forms::TextBox^  pgra;
	private: System::Windows::Forms::TextBox^  napnas;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ic = (gcnew System::Windows::Forms::TextBox());
			this->ik = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->ir = (gcnew System::Windows::Forms::TextBox());
			this->ityr = (gcnew System::Windows::Forms::TextBox());
			this->itra = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->ind = (gcnew System::Windows::Forms::TextBox());
			this->pp = (gcnew System::Windows::Forms::TextBox());
			this->poj = (gcnew System::Windows::Forms::TextBox());
			this->rez = (gcnew System::Windows::Forms::TextBox());
			this->pgra = (gcnew System::Windows::Forms::TextBox());
			this->napnas = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Magazyn";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(323, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 25);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Dodaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &dod_el::button1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Rezystor";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Cewka";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Kondensator";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Tranzystor";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Dioda";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Tyrystor";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(104, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Ilosc";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(264, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Parametr Glowny";
			// 
			// ic
			// 
			this->ic->Location = System::Drawing::Point(90, 47);
			this->ic->Name = L"ic";
			this->ic->Size = System::Drawing::Size(72, 20);
			this->ic->TabIndex = 17;
			this->ic->TextChanged += gcnew System::EventHandler(this, &dod_el::textBox1_TextChanged);
			// 
			// ik
			// 
			this->ik->Location = System::Drawing::Point(90, 99);
			this->ik->Name = L"ik";
			this->ik->Size = System::Drawing::Size(72, 20);
			this->ik->TabIndex = 18;
			this->ik->TextChanged += gcnew System::EventHandler(this, &dod_el::ik_TextChanged);
			// 
			// id
			// 
			this->id->Location = System::Drawing::Point(90, 73);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(72, 20);
			this->id->TabIndex = 19;
			this->id->TextChanged += gcnew System::EventHandler(this, &dod_el::id_TextChanged);
			// 
			// ir
			// 
			this->ir->Location = System::Drawing::Point(90, 125);
			this->ir->Name = L"ir";
			this->ir->Size = System::Drawing::Size(72, 20);
			this->ir->TabIndex = 20;
			this->ir->TextChanged += gcnew System::EventHandler(this, &dod_el::ir_TextChanged);
			// 
			// ityr
			// 
			this->ityr->Location = System::Drawing::Point(90, 151);
			this->ityr->Name = L"ityr";
			this->ityr->Size = System::Drawing::Size(72, 20);
			this->ityr->TabIndex = 21;
			this->ityr->TextChanged += gcnew System::EventHandler(this, &dod_el::ityr_TextChanged);
			// 
			// itra
			// 
			this->itra->Location = System::Drawing::Point(90, 177);
			this->itra->Name = L"itra";
			this->itra->Size = System::Drawing::Size(72, 20);
			this->itra->TabIndex = 22;
			this->itra->TextChanged += gcnew System::EventHandler(this, &dod_el::itra_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(380, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"[H]";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(179, 73);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"P. Przebicia";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(382, 102);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"[F]";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(380, 125);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(35, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"[Ohm]";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(380, 154);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 13);
			this->label14->TabIndex = 27;
			this->label14->Text = L"[mA]";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(179, 180);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(83, 13);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Nap. Nasycenia";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(179, 50);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(70, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"Indukcyjnosc";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(380, 76);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"[mA]";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(179, 99);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(59, 13);
			this->label18->TabIndex = 31;
			this->label18->Text = L"Pojemnosc";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(179, 125);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(65, 13);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Rezystancja";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(179, 151);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 13);
			this->label20->TabIndex = 33;
			this->label20->Text = L"P. Graniczny";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(380, 180);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(20, 13);
			this->label21->TabIndex = 34;
			this->label21->Text = L"[V]";
			// 
			// ind
			// 
			this->ind->Location = System::Drawing::Point(279, 47);
			this->ind->Name = L"ind";
			this->ind->Size = System::Drawing::Size(72, 20);
			this->ind->TabIndex = 35;
			this->ind->TextChanged += gcnew System::EventHandler(this, &dod_el::textBox7_TextChanged);
			// 
			// pp
			// 
			this->pp->Location = System::Drawing::Point(279, 73);
			this->pp->Name = L"pp";
			this->pp->Size = System::Drawing::Size(72, 20);
			this->pp->TabIndex = 36;
			this->pp->TextChanged += gcnew System::EventHandler(this, &dod_el::textBox8_TextChanged);
			// 
			// poj
			// 
			this->poj->Location = System::Drawing::Point(279, 99);
			this->poj->Name = L"poj";
			this->poj->Size = System::Drawing::Size(72, 20);
			this->poj->TabIndex = 37;
			this->poj->TextChanged += gcnew System::EventHandler(this, &dod_el::textBox9_TextChanged);
			// 
			// rez
			// 
			this->rez->Location = System::Drawing::Point(279, 125);
			this->rez->Name = L"rez";
			this->rez->Size = System::Drawing::Size(72, 20);
			this->rez->TabIndex = 38;
			this->rez->TextChanged += gcnew System::EventHandler(this, &dod_el::textBox10_TextChanged);
			// 
			// pgra
			// 
			this->pgra->Location = System::Drawing::Point(279, 151);
			this->pgra->Name = L"pgra";
			this->pgra->Size = System::Drawing::Size(72, 20);
			this->pgra->TabIndex = 39;
			this->pgra->TextChanged += gcnew System::EventHandler(this, &dod_el::textBox11_TextChanged);
			// 
			// napnas
			// 
			this->napnas->Location = System::Drawing::Point(279, 177);
			this->napnas->Name = L"napnas";
			this->napnas->Size = System::Drawing::Size(72, 20);
			this->napnas->TabIndex = 40;
			this->napnas->TextChanged += gcnew System::EventHandler(this, &dod_el::textBox12_TextChanged);
			// 
			// dod_el
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(426, 295);
			this->Controls->Add(this->napnas);
			this->Controls->Add(this->pgra);
			this->Controls->Add(this->rez);
			this->Controls->Add(this->poj);
			this->Controls->Add(this->pp);
			this->Controls->Add(this->ind);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->itra);
			this->Controls->Add(this->ityr);
			this->Controls->Add(this->ir);
			this->Controls->Add(this->id);
			this->Controls->Add(this->ik);
			this->Controls->Add(this->ic);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Name = L"dod_el";
			this->Text = L"dod_el";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Element cew;
			 cew.ilosc = Double::Parse(ic->Text);


}
private: System::Void id_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Element dio;
			 dio.ilosc = Double::Parse(id->Text);
}
private: System::Void ik_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Element kon;
			 kon.ilosc = Double::Parse(ik->Text);
}
private: System::Void ir_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Element rez;
			 rez.ilosc = Double::Parse(ir->Text);
}
private: System::Void ityr_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Element tyr;
			 tyr.ilosc = Double::Parse(ityr->Text);
}
private: System::Void itra_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Element tra;
			 tra.ilosc = Double::Parse(itra->Text);
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Element cew,dio,kon,reza,tyr,tra;
			 cew.ilosc = Double::Parse(ic->Text);
			 dio.ilosc = Double::Parse(id->Text);
			 kon.ilosc = Double::Parse(ik->Text);
			 reza.ilosc = Double::Parse(ir->Text);
			 tyr.ilosc = Double::Parse(ityr->Text);
			 tra.ilosc = Double::Parse(itra->Text);

			 String^filename = "Logi.txt";
			 StreamWriter^sw = gcnew StreamWriter(filename);
			 sw->WriteLine("Podczas ostatniej operacji dodano do magazynu :");
			 sw->WriteLine(ic->Text);
			 sw->WriteLine("Cewek o parametrach  "+(ind->Text)+("  [H]"));
			 sw->WriteLine(id->Text);
			 sw->WriteLine("Diod o parametrach  "+(pp->Text)+("  [mA]"));
			 sw->WriteLine(ik->Text);
			 sw->WriteLine("Kondensatorow o parametrach  "+(poj->Text)+("   [F]"));
			 sw->WriteLine(ir->Text);
			 sw->WriteLine("Rezystorow o parametrach  "+(rez->Text)+("   [Ohm]"));
			 sw->WriteLine(ityr->Text);
			 sw->WriteLine("Tyrystorow o parametrach  "+(pgra->Text)+("   [mA]"));
			 sw->WriteLine(itra->Text);
			 sw->WriteLine("Tranzystorow o Parametrach  "+(napnas->Text)+("  [V]"));
			 sw->Close(); 
			 MessageBox::Show("Dodano do magazynu Informacja zapamietana w pliku");
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Cewka a;
			 a.indukcyjnosc = Double::Parse(ind->Text);
			 
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Dioda a;
			 a.prad_przebicia = Double::Parse(pp->Text);
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Kondensator a;
			 a.pojemnosc = Double::Parse(poj->Text);
}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Rezystor a;
			 a.rezystancja = Double::Parse(rez->Text);
}
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Tyrystor a;
			 a.prad_gran_obciazenia = Double::Parse(pgra->Text);
}
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Tranzystor a;
			 a.napiecie_nasycenia = Double::Parse(napnas->Text);
}
};
}
