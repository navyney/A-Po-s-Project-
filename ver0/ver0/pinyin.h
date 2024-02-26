#pragma once

namespace Project0 {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button0b;

	private: System::Windows::Forms::Button^ button0p;

	private: System::Windows::Forms::Button^ button0m;
	private: System::Windows::Forms::Button^ button0f;



	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button19;










	protected:






	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button0b = (gcnew System::Windows::Forms::Button());
			this->button0p = (gcnew System::Windows::Forms::Button());
			this->button0m = (gcnew System::Windows::Forms::Button());
			this->button0f = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox1->Location = System::Drawing::Point(71, 53);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(386, 49);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"lesson 0 : Pinyin";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(26, 30);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(1263, 616);
			this->treeView1->TabIndex = 1;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox2->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox2->Location = System::Drawing::Point(113, 127);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(253, 238);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"\r\n b    ปัว\r\n\r\n p    พัว\r\n\r\n m    มัว\r\n\r\n f    ฟัว";
			// 
			// button0b
			// 
			this->button0b->BackColor = System::Drawing::Color::White;
			this->button0b->ForeColor = System::Drawing::SystemColors::Control;
			this->button0b->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button0b.Image")));
			this->button0b->Location = System::Drawing::Point(269, 156);
			this->button0b->Name = L"button0b";
			this->button0b->Size = System::Drawing::Size(55, 31);
			this->button0b->TabIndex = 3;
			this->button0b->UseVisualStyleBackColor = false;
			this->button0b->Click += gcnew System::EventHandler(this, &MyForm::button0b_Click);
			// 
			// button0p
			// 
			this->button0p->BackColor = System::Drawing::Color::White;
			this->button0p->ForeColor = System::Drawing::SystemColors::Control;
			this->button0p->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button0p.Image")));
			this->button0p->Location = System::Drawing::Point(269, 210);
			this->button0p->Name = L"button0p";
			this->button0p->Size = System::Drawing::Size(55, 31);
			this->button0p->TabIndex = 4;
			this->button0p->UseVisualStyleBackColor = false;
			// 
			// button0m
			// 
			this->button0m->BackColor = System::Drawing::Color::White;
			this->button0m->ForeColor = System::Drawing::SystemColors::Control;
			this->button0m->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button0m.Image")));
			this->button0m->Location = System::Drawing::Point(269, 262);
			this->button0m->Name = L"button0m";
			this->button0m->Size = System::Drawing::Size(55, 31);
			this->button0m->TabIndex = 5;
			this->button0m->UseVisualStyleBackColor = false;
			// 
			// button0f
			// 
			this->button0f->BackColor = System::Drawing::Color::White;
			this->button0f->ForeColor = System::Drawing::SystemColors::Control;
			this->button0f->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button0f.Image")));
			this->button0f->Location = System::Drawing::Point(269, 317);
			this->button0f->Name = L"button0f";
			this->button0f->Size = System::Drawing::Size(55, 31);
			this->button0f->TabIndex = 6;
			this->button0f->UseVisualStyleBackColor = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox3->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox3->Location = System::Drawing::Point(113, 380);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(253, 238);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"\r\n zh   จรือ\r\n\r\n ch   ชรือ\r\n\r\n sh   ซรือ\r\n\r\n r    ยรือ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(269, 409);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 31);
			this->button4->TabIndex = 8;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(269, 464);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 31);
			this->button5->TabIndex = 9;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(269, 518);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 31);
			this->button6->TabIndex = 10;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(269, 567);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 31);
			this->button7->TabIndex = 11;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox4->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox4->Location = System::Drawing::Point(420, 127);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(542, 238);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"   \r\n   d   เตอ\t       t   เทอ\t\r\n\t\r\n   n   เนอ\t       l   เลอ\t\r\n\t\r\n   g   เกอ\t   "
				L"    k   เคอ\t\r\n\t\r\n            h   เฮอ";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(596, 156);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 31);
			this->button8->TabIndex = 13;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(596, 210);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 31);
			this->button9->TabIndex = 14;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(596, 262);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 31);
			this->button10->TabIndex = 15;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(710, 317);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 31);
			this->button11->TabIndex = 16;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(889, 262);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 31);
			this->button12->TabIndex = 17;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(889, 210);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 31);
			this->button13->TabIndex = 18;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->ForeColor = System::Drawing::SystemColors::Control;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(889, 156);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 31);
			this->button14->TabIndex = 19;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox5->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox5->Location = System::Drawing::Point(998, 127);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(236, 238);
			this->textBox5->TabIndex = 20;
			this->textBox5->Text = L"\r\n j    จี\r\n\r\n q    ชี\r\n\r\n x    ซี\r\n\r\n y    อี";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->ForeColor = System::Drawing::SystemColors::Control;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(1148, 156);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 31);
			this->button15->TabIndex = 21;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(1148, 210);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 31);
			this->button16->TabIndex = 22;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->ForeColor = System::Drawing::SystemColors::Control;
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(1148, 262);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 31);
			this->button17->TabIndex = 23;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->ForeColor = System::Drawing::SystemColors::Control;
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(1148, 317);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 31);
			this->button18->TabIndex = 24;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox6->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox6->Location = System::Drawing::Point(420, 380);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(262, 192);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"\r\n z    จือ\r\n\r\n c    ชือ\r\n\r\n s    ซือ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(574, 409);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 31);
			this->button1->TabIndex = 26;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(574, 464);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 31);
			this->button2->TabIndex = 27;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(574, 518);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 31);
			this->button3->TabIndex = 28;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox7->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox7->Location = System::Drawing::Point(710, 380);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(252, 39);
			this->textBox7->TabIndex = 29;
			this->textBox7->Text = L" w    อู\r\n\r\n";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->ForeColor = System::Drawing::SystemColors::Control;
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(867, 383);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 31);
			this->button19->TabIndex = 30;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1319, 658);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button0f);
			this->Controls->Add(this->button0m);
			this->Controls->Add(this->button0p);
			this->Controls->Add(this->button0b);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->treeView1);
			this->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void button0b_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}