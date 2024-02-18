#pragma once

namespace nextpage {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ NEXT;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ GoBack;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button01;

	private: System::Windows::Forms::Button^ button04;

	private: System::Windows::Forms::Button^ button03;

	private: System::Windows::Forms::Button^ button02;
	private: System::Windows::Forms::Button^ button12;


	private: System::Windows::Forms::Button^ button08;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button11;









	private: System::Windows::Forms::Button^ button10;



	private: System::Windows::Forms::Button^ button07;
	private: System::Windows::Forms::Button^ button13;



	private: System::Windows::Forms::Button^ button06;
	private: System::Windows::Forms::Button^ button09;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button18;




	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button17;



	private: System::Windows::Forms::Button^ button200;


	private: System::Windows::Forms::Button^ button05;
	private: System::Windows::Forms::Button^ button16;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button08 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button04 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button07 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button06 = (gcnew System::Windows::Forms::Button());
			this->button09 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button03 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button200 = (gcnew System::Windows::Forms::Button());
			this->button05 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button02 = (gcnew System::Windows::Forms::Button());
			this->button01 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->GoBack = (gcnew System::Windows::Forms::Button());
			this->NEXT = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button08);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button04);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button07);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button06);
			this->panel1->Controls->Add(this->button09);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button03);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button200);
			this->panel1->Controls->Add(this->button05);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button02);
			this->panel1->Controls->Add(this->button01);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->GoBack);
			this->panel1->Controls->Add(this->NEXT);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(63, 55);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1786, 939);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button12
			// 
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(980, 380);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(57, 47);
			this->button12->TabIndex = 14;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button08
			// 
			this->button08->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button08.Image")));
			this->button08->Location = System::Drawing::Point(615, 380);
			this->button08->Name = L"button08";
			this->button08->Size = System::Drawing::Size(57, 47);
			this->button08->TabIndex = 14;
			this->button08->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(990, 520);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(57, 47);
			this->button23->TabIndex = 14;
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(243, 748);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(57, 47);
			this->button19->TabIndex = 14;
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button04
			// 
			this->button04->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button04.Image")));
			this->button04->Location = System::Drawing::Point(243, 380);
			this->button04->Name = L"button04";
			this->button04->Size = System::Drawing::Size(57, 47);
			this->button04->TabIndex = 14;
			this->button04->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(1374, 309);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(57, 47);
			this->button15->TabIndex = 13;
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(1374, 239);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(57, 47);
			this->button14->TabIndex = 12;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(980, 309);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(57, 47);
			this->button11->TabIndex = 13;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(980, 239);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(57, 47);
			this->button10->TabIndex = 12;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button07
			// 
			this->button07->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button07.Image")));
			this->button07->Location = System::Drawing::Point(615, 309);
			this->button07->Name = L"button07";
			this->button07->Size = System::Drawing::Size(57, 47);
			this->button07->TabIndex = 13;
			this->button07->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(1374, 161);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(57, 47);
			this->button13->TabIndex = 11;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button01_Click);
			// 
			// button06
			// 
			this->button06->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button06.Image")));
			this->button06->Location = System::Drawing::Point(615, 239);
			this->button06->Name = L"button06";
			this->button06->Size = System::Drawing::Size(57, 47);
			this->button06->TabIndex = 12;
			this->button06->UseVisualStyleBackColor = true;
			// 
			// button09
			// 
			this->button09->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button09.Image")));
			this->button09->Location = System::Drawing::Point(980, 161);
			this->button09->Name = L"button09";
			this->button09->Size = System::Drawing::Size(57, 47);
			this->button09->TabIndex = 11;
			this->button09->UseVisualStyleBackColor = true;
			this->button09->Click += gcnew System::EventHandler(this, &MyForm::button01_Click);
			// 
			// button22
			// 
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(615, 677);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(57, 47);
			this->button22->TabIndex = 13;
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(243, 677);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(57, 47);
			this->button18->TabIndex = 13;
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button03
			// 
			this->button03->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button03.Image")));
			this->button03->Location = System::Drawing::Point(243, 309);
			this->button03->Name = L"button03";
			this->button03->Size = System::Drawing::Size(57, 47);
			this->button03->TabIndex = 13;
			this->button03->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(615, 607);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(57, 47);
			this->button21->TabIndex = 12;
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(243, 607);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(57, 47);
			this->button17->TabIndex = 12;
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button200
			// 
			this->button200->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button200.Image")));
			this->button200->Location = System::Drawing::Point(615, 529);
			this->button200->Name = L"button200";
			this->button200->Size = System::Drawing::Size(57, 47);
			this->button200->TabIndex = 11;
			this->button200->UseVisualStyleBackColor = true;
			this->button200->Click += gcnew System::EventHandler(this, &MyForm::button01_Click);
			// 
			// button05
			// 
			this->button05->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button05.Image")));
			this->button05->Location = System::Drawing::Point(615, 161);
			this->button05->Name = L"button05";
			this->button05->Size = System::Drawing::Size(57, 47);
			this->button05->TabIndex = 11;
			this->button05->UseVisualStyleBackColor = true;
			this->button05->Click += gcnew System::EventHandler(this, &MyForm::button01_Click);
			// 
			// button16
			// 
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(243, 529);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(57, 47);
			this->button16->TabIndex = 11;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button01_Click);
			// 
			// button02
			// 
			this->button02->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button02.Image")));
			this->button02->Location = System::Drawing::Point(243, 239);
			this->button02->Name = L"button02";
			this->button02->Size = System::Drawing::Size(57, 47);
			this->button02->TabIndex = 12;
			this->button02->UseVisualStyleBackColor = true;
			// 
			// button01
			// 
			this->button01->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button01.Image")));
			this->button01->Location = System::Drawing::Point(243, 161);
			this->button01->Name = L"button01";
			this->button01->Size = System::Drawing::Size(57, 47);
			this->button01->TabIndex = 11;
			this->button01->UseVisualStyleBackColor = true;
			this->button01->Click += gcnew System::EventHandler(this, &MyForm::button01_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(416, 861);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(923, 53);
			this->progressBar1->TabIndex = 9;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox8->Location = System::Drawing::Point(798, 486);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(309, 110);
			this->textBox8->TabIndex = 8;
			this->textBox8->Text = L"\r\n w    อู\r\n\r\n\r\n";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox7->Location = System::Drawing::Point(414, 486);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(309, 337);
			this->textBox7->TabIndex = 7;
			this->textBox7->Text = L"\r\n z    จือ\r\n\r\n c    ชือ\r\n\r\n s    ซือ\r\n";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox6->Location = System::Drawing::Point(44, 486);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(310, 337);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"\r\n zh   จรือ\r\n\r\n ch   ชรือ\r\n\r\n sh   ซรือ\r\n\r\n r    ยรือ\r\n";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox5->Location = System::Drawing::Point(1179, 119);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(318, 337);
			this->textBox5->TabIndex = 5;
			this->textBox5->Text = L"   \r\n  t   เทอ\t\r\n\t\r\n  l   เลอ\t\r\n\t\r\n  k   เคอ\t\r\n\r\n";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox4->Location = System::Drawing::Point(798, 119);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(309, 337);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"\r\n j    จี\r\n\r\n q    ชี\r\n\r\n x    ซี\r\n\r\n y    อี\r\n";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// GoBack
			// 
			this->GoBack->Location = System::Drawing::Point(44, 858);
			this->GoBack->Name = L"GoBack";
			this->GoBack->Size = System::Drawing::Size(172, 56);
			this->GoBack->TabIndex = 3;
			this->GoBack->Text = L"PREVIOUS";
			this->GoBack->UseVisualStyleBackColor = true;
			// 
			// NEXT
			// 
			this->NEXT->Location = System::Drawing::Point(1572, 858);
			this->NEXT->Name = L"NEXT";
			this->NEXT->Size = System::Drawing::Size(172, 56);
			this->NEXT->TabIndex = 1;
			this->NEXT->Text = L"NEXT\r\n";
			this->NEXT->UseVisualStyleBackColor = true;
			this->NEXT->Click += gcnew System::EventHandler(this, &MyForm::NEXT_Click);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox3->Location = System::Drawing::Point(414, 128);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(309, 337);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"    \r\n  d   เตอ\r\n\t\r\n  n   เนอ\t\r\n\t\r\n  g   เกอ\t\r\n\t\r\n  h   เฮอ\r\n";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox2->Location = System::Drawing::Point(44, 128);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 337);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"\r\n b    ปัว\r\n\r\n p    พัว\r\n\r\n m    มัว\r\n\r\n f    ฟัว\r\n\r\n";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox1->Location = System::Drawing::Point(31, 20);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(442, 82);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L" lesson 0 : Pinyin";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	public: bool switchTomix = false;
	private: System::Void NEXT_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		switchTomix = true;
		
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button01_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
