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



























	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ NEXT;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;

	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;



















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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->NEXT = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox1->Location = System::Drawing::Point(71, 69);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(386, 49);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"lesson 0 : Pinyin";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(53, 53);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(1801, 947);
			this->treeView1->TabIndex = 1;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox6->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox6->Location = System::Drawing::Point(1476, 138);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(313, 317);
			this->textBox6->TabIndex = 36;
			this->textBox6->Text = L"\r\n ang  อัง\r\n\r\n er   เออร์\r\n\r\n iu   ยิว\t\r\n\r\n uai  อไว";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox9->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox9->Location = System::Drawing::Point(424, 138);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(313, 446);
			this->textBox9->TabIndex = 2;
			this->textBox9->Text = L"\r\n a   อา\t\r\n\r\n o   โอ\t\r\n\r\n e   เออ\t\r\n\t\r\n i   อี\r\n\t\t\r\n u   อู\r\n\t\t\r\n ?   วี";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox10->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox10->Location = System::Drawing::Point(71, 138);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(313, 446);
			this->textBox10->TabIndex = 15;
			this->textBox10->Text = L"\r\n ai   อาย\r\n\r\n ong  อง\t\r\n\r\n ei   เอย\t\r\n\t\r\n ia   เอีย\t\r\n\t\r\n ua   อา\r\n\t\t\r\n ?e   อว"
				L"ีย";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::White;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox11->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox11->Location = System::Drawing::Point(767, 138);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(313, 446);
			this->textBox11->TabIndex = 16;
			this->textBox11->Text = L"\r\n ao   เอา\t\r\n\r\n ou   โอว\t\r\n\r\n en   เอิน\t\r\n\t\r\n iao  เอียว\r\n\t\t\r\n uo   อัว\t\r\n\t\r\n ?a"
				L"n  อเวียน";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::White;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox12->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox12->Location = System::Drawing::Point(1124, 138);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(313, 388);
			this->textBox12->TabIndex = 23;
			this->textBox12->Text = L"\r\n an   อัน\t\r\n\r\n eng   เอิง\r\n\t\r\n ie   อีเย\t\r\n\r\n ui   อุย\t\r\n\r\n ?n   อวิน";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged_1);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::White;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox13->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox13->Location = System::Drawing::Point(71, 601);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(313, 390);
			this->textBox13->TabIndex = 41;
			this->textBox13->Text = L"\r\n ian เอียน\t\r\n\r\n uan อวน  \r\n\r\n iang เอียง\t\r\n\r\n un อุน\r\n\r\n in   อิน";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::White;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox14->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox14->Location = System::Drawing::Point(424, 601);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(313, 390);
			this->textBox14->TabIndex = 42;
			this->textBox14->Text = L"\r\n uang อวง\r\n\r\n ing อิง\t\r\n\r\n ueng เวิง\t\r\n\r\n iong อี-โอง\r\n";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(813, 906);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(724, 58);
			this->progressBar1->TabIndex = 43;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// NEXT
			// 
			this->NEXT->Location = System::Drawing::Point(1569, 906);
			this->NEXT->Name = L"NEXT";
			this->NEXT->Size = System::Drawing::Size(189, 58);
			this->NEXT->TabIndex = 58;
			this->NEXT->Text = L"NEXT";
			this->NEXT->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(284, 248);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(73, 46);
			this->button8->TabIndex = 59;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(284, 321);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(73, 46);
			this->button9->TabIndex = 62;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(284, 394);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(73, 46);
			this->button10->TabIndex = 61;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(284, 176);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 46);
			this->button11->TabIndex = 60;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(284, 464);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 46);
			this->button1->TabIndex = 63;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(284, 530);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 46);
			this->button2->TabIndex = 64;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(613, 530);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 46);
			this->button3->TabIndex = 70;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(613, 464);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 46);
			this->button4->TabIndex = 69;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(613, 248);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 46);
			this->button5->TabIndex = 65;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(613, 321);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 46);
			this->button6->TabIndex = 68;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(613, 394);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(73, 46);
			this->button7->TabIndex = 67;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(613, 176);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 46);
			this->button12->TabIndex = 66;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(979, 176);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(73, 46);
			this->button13->TabIndex = 66;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->ForeColor = System::Drawing::SystemColors::Control;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(979, 394);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(73, 46);
			this->button14->TabIndex = 67;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->ForeColor = System::Drawing::SystemColors::Control;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(979, 321);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(73, 46);
			this->button15->TabIndex = 68;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(979, 248);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(73, 46);
			this->button16->TabIndex = 65;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->ForeColor = System::Drawing::SystemColors::Control;
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(979, 464);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(73, 46);
			this->button17->TabIndex = 69;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->ForeColor = System::Drawing::SystemColors::Control;
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(979, 530);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(73, 46);
			this->button18->TabIndex = 70;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->ForeColor = System::Drawing::SystemColors::Control;
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(1323, 176);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(73, 46);
			this->button19->TabIndex = 66;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->ForeColor = System::Drawing::SystemColors::Control;
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->Location = System::Drawing::Point(1323, 394);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(73, 46);
			this->button20->TabIndex = 67;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->ForeColor = System::Drawing::SystemColors::Control;
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(1323, 321);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(73, 46);
			this->button21->TabIndex = 68;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->ForeColor = System::Drawing::SystemColors::Control;
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(1323, 248);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(73, 46);
			this->button22->TabIndex = 65;
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->ForeColor = System::Drawing::SystemColors::Control;
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(1323, 464);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(73, 46);
			this->button23->TabIndex = 69;
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->ForeColor = System::Drawing::SystemColors::Control;
			this->button29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.Image")));
			this->button29->Location = System::Drawing::Point(284, 918);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(73, 46);
			this->button29->TabIndex = 69;
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->ForeColor = System::Drawing::SystemColors::Control;
			this->button28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.Image")));
			this->button28->Location = System::Drawing::Point(284, 702);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(73, 46);
			this->button28->TabIndex = 65;
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->ForeColor = System::Drawing::SystemColors::Control;
			this->button27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.Image")));
			this->button27->Location = System::Drawing::Point(284, 775);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(73, 46);
			this->button27->TabIndex = 68;
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->ForeColor = System::Drawing::SystemColors::Control;
			this->button26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.Image")));
			this->button26->Location = System::Drawing::Point(284, 848);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(73, 46);
			this->button26->TabIndex = 67;
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->ForeColor = System::Drawing::SystemColors::Control;
			this->button25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.Image")));
			this->button25->Location = System::Drawing::Point(284, 630);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(73, 46);
			this->button25->TabIndex = 66;
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::White;
			this->button34->ForeColor = System::Drawing::SystemColors::Control;
			this->button34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.Image")));
			this->button34->Location = System::Drawing::Point(636, 848);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(73, 46);
			this->button34->TabIndex = 78;
			this->button34->UseVisualStyleBackColor = false;
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::White;
			this->button35->ForeColor = System::Drawing::SystemColors::Control;
			this->button35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.Image")));
			this->button35->Location = System::Drawing::Point(636, 632);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(73, 46);
			this->button35->TabIndex = 75;
			this->button35->UseVisualStyleBackColor = false;
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::White;
			this->button36->ForeColor = System::Drawing::SystemColors::Control;
			this->button36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.Image")));
			this->button36->Location = System::Drawing::Point(636, 705);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(73, 46);
			this->button36->TabIndex = 77;
			this->button36->UseVisualStyleBackColor = false;
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::White;
			this->button37->ForeColor = System::Drawing::SystemColors::Control;
			this->button37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.Image")));
			this->button37->Location = System::Drawing::Point(636, 778);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(73, 46);
			this->button37->TabIndex = 76;
			this->button37->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->ForeColor = System::Drawing::SystemColors::Control;
			this->button30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.Image")));
			this->button30->Location = System::Drawing::Point(1685, 391);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(73, 46);
			this->button30->TabIndex = 82;
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->ForeColor = System::Drawing::SystemColors::Control;
			this->button31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.Image")));
			this->button31->Location = System::Drawing::Point(1685, 175);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(73, 46);
			this->button31->TabIndex = 79;
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->ForeColor = System::Drawing::SystemColors::Control;
			this->button32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.Image")));
			this->button32->Location = System::Drawing::Point(1685, 248);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(73, 46);
			this->button32->TabIndex = 81;
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->ForeColor = System::Drawing::SystemColors::Control;
			this->button33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.Image")));
			this->button33->Location = System::Drawing::Point(1685, 321);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(73, 46);
			this->button33->TabIndex = 80;
			this->button33->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->NEXT);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
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
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}