#pragma once

namespace mungi{

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










	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;








	private: System::Windows::Forms::TextBox^ textBox5;











	private: System::Windows::Forms::TextBox^ textBox9;



	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
<<<<<<< Updated upstream:mungi/MyForm.h
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ NEXT;

=======
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h










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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->NEXT = (gcnew System::Windows::Forms::Button());
=======
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
<<<<<<< Updated upstream:mungi/MyForm.h
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox1->Location = System::Drawing::Point(88, 99);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(526, 71);
=======
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox1->Location = System::Drawing::Point(95, 65);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(514, 60);
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"lesson 0 : Pinyin";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// treeView1
			// 
<<<<<<< Updated upstream:mungi/MyForm.h
			this->treeView1->Location = System::Drawing::Point(46, 42);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(1801, 959);
=======
			this->treeView1->Location = System::Drawing::Point(35, 37);
			this->treeView1->Margin = System::Windows::Forms::Padding(4);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(1683, 757);
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->treeView1->TabIndex = 1;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
<<<<<<< Updated upstream:mungi/MyForm.h
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox2->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox2->Location = System::Drawing::Point(88, 210);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(337, 337);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"\r\n b    ปัว\r\n\r\n p    พัว\r\n\r\n m    มัว\r\n\r\n f    ฟัว";
			// 
=======
			this->textBox2->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 19.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox2->Location = System::Drawing::Point(151, 156);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(337, 292);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"\r\n b    ปัว\r\n\r\n p    พัว\r\n\r\n m    มัว\r\n\r\n f    ฟัว";
			// 
			// button0b
			// 
			this->button0b->BackColor = System::Drawing::Color::White;
			this->button0b->ForeColor = System::Drawing::SystemColors::Control;
			this->button0b->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button0b.Image")));
			this->button0b->Location = System::Drawing::Point(359, 192);
			this->button0b->Margin = System::Windows::Forms::Padding(4);
			this->button0b->Name = L"button0b";
			this->button0b->Size = System::Drawing::Size(73, 38);
			this->button0b->TabIndex = 3;
			this->button0b->UseVisualStyleBackColor = false;
			this->button0b->Click += gcnew System::EventHandler(this, &MyForm::button0b_Click);
			// 
			// button0p
			// 
			this->button0p->BackColor = System::Drawing::Color::White;
			this->button0p->ForeColor = System::Drawing::SystemColors::Control;
			this->button0p->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button0p.Image")));
			this->button0p->Location = System::Drawing::Point(359, 258);
			this->button0p->Margin = System::Windows::Forms::Padding(4);
			this->button0p->Name = L"button0p";
			this->button0p->Size = System::Drawing::Size(73, 38);
			this->button0p->TabIndex = 4;
			this->button0p->UseVisualStyleBackColor = false;
			// 
			// button0m
			// 
			this->button0m->BackColor = System::Drawing::Color::White;
			this->button0m->ForeColor = System::Drawing::SystemColors::Control;
			this->button0m->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button0m.Image")));
			this->button0m->Location = System::Drawing::Point(359, 322);
			this->button0m->Margin = System::Windows::Forms::Padding(4);
			this->button0m->Name = L"button0m";
			this->button0m->Size = System::Drawing::Size(73, 38);
			this->button0m->TabIndex = 5;
			this->button0m->UseVisualStyleBackColor = false;
			// 
			// button0f
			// 
			this->button0f->BackColor = System::Drawing::Color::White;
			this->button0f->ForeColor = System::Drawing::SystemColors::Control;
			this->button0f->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button0f.Image")));
			this->button0f->Location = System::Drawing::Point(359, 390);
			this->button0f->Margin = System::Windows::Forms::Padding(4);
			this->button0f->Name = L"button0f";
			this->button0f->Size = System::Drawing::Size(73, 38);
			this->button0f->TabIndex = 6;
			this->button0f->UseVisualStyleBackColor = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox3->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox3->Location = System::Drawing::Point(151, 468);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(337, 292);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"\r\n zh   จรือ\r\n\r\n ch   ชรือ\r\n\r\n sh   ซรือ\r\n\r\n r    ยรือ";
			// 
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button4->Location = System::Drawing::Point(324, 761);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 46);
=======
			this->button4->Location = System::Drawing::Point(359, 503);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 38);
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->button4->TabIndex = 8;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button5->Location = System::Drawing::Point(324, 686);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 46);
=======
			this->button5->Location = System::Drawing::Point(359, 571);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 38);
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->button5->TabIndex = 9;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button6->Location = System::Drawing::Point(324, 916);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 46);
=======
			this->button6->Location = System::Drawing::Point(359, 638);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 38);
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->button6->TabIndex = 10;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button7->Location = System::Drawing::Point(324, 847);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(73, 46);
			this->button7->TabIndex = 11;
			this->button7->UseVisualStyleBackColor = false;
			// 
=======
			this->button7->Location = System::Drawing::Point(359, 698);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(73, 38);
			this->button7->TabIndex = 11;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox4->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox4->Location = System::Drawing::Point(560, 156);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(722, 292);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"   \r\n   d   เตอ\t       t   เทอ\t\r\n\t\r\n   n   เนอ\t       l   เลอ\t\r\n\t\r\n   g   เกอ\t   "
				L"    k   เคอ\t\r\n\t\r\n            h   เฮอ";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(795, 192);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(73, 38);
			this->button8->TabIndex = 13;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(795, 258);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(73, 38);
			this->button9->TabIndex = 14;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(795, 322);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(73, 38);
			this->button10->TabIndex = 15;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(947, 390);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 38);
			this->button11->TabIndex = 16;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(1185, 322);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 38);
			this->button12->TabIndex = 17;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(1185, 258);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(73, 38);
			this->button13->TabIndex = 18;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->ForeColor = System::Drawing::SystemColors::Control;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(1185, 192);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(73, 38);
			this->button14->TabIndex = 19;
			this->button14->UseVisualStyleBackColor = false;
			// 
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
<<<<<<< Updated upstream:mungi/MyForm.h
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox5->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox5->Location = System::Drawing::Point(915, 210);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(321, 337);
=======
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox5->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox5->Location = System::Drawing::Point(1331, 156);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(314, 292);
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->textBox5->TabIndex = 20;
			this->textBox5->Text = L"\r\n j    จี\r\n\r\n q    ชี\r\n\r\n x    ซี\r\n\r\n y    อี";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox9
			// 
<<<<<<< Updated upstream:mungi/MyForm.h
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox9->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox9->Location = System::Drawing::Point(1316, 210);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(321, 337);
			this->textBox9->TabIndex = 32;
			this->textBox9->Text = L"   \r\n  t   เทอ\t\r\n\t\r\n  l   เลอ\t\r\n\t\r\n  k   เคอ\t\r\n";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(915, 899);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(619, 63);
			this->progressBar1->TabIndex = 36;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::White;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox8->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox8->Location = System::Drawing::Point(88, 648);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(337, 332);
			this->textBox8->TabIndex = 7;
			this->textBox8->Text = L"\r\n zh   จรือ\r\n\r\n ch   ชรือ\r\n\r\n sh   ซรือ\r\n\r\n r    ยรือ";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Enabled = false;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox10->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox10->Location = System::Drawing::Point(512, 648);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(321, 305);
			this->textBox10->TabIndex = 25;
			this->textBox10->Text = L"\r\n z    จือ\r\n\r\n c    ชือ\r\n\r\n s    ซือ";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::White;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Enabled = false;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox11->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox11->Location = System::Drawing::Point(915, 648);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(321, 53);
			this->textBox11->TabIndex = 29;
			this->textBox11->Text = L" w    อู\r\n\r\n";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
=======
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->ForeColor = System::Drawing::SystemColors::Control;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(1531, 192);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(73, 38);
			this->button15->TabIndex = 21;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(1531, 258);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(73, 38);
			this->button16->TabIndex = 22;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->ForeColor = System::Drawing::SystemColors::Control;
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(1531, 322);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(73, 38);
			this->button17->TabIndex = 23;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->ForeColor = System::Drawing::SystemColors::Control;
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(1531, 390);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(73, 38);
			this->button18->TabIndex = 24;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox6->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox6->Location = System::Drawing::Point(560, 468);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(349, 236);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"\r\n z    จือ\r\n\r\n c    ชือ\r\n\r\n s    ซือ";
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button1->Location = System::Drawing::Point(726, 761);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 46);
			this->button1->TabIndex = 37;
=======
			this->button1->Location = System::Drawing::Point(765, 503);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 38);
			this->button1->TabIndex = 26;
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button2->Location = System::Drawing::Point(726, 847);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 46);
			this->button2->TabIndex = 39;
=======
			this->button2->Location = System::Drawing::Point(765, 571);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 38);
			this->button2->TabIndex = 27;
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button3->Location = System::Drawing::Point(726, 686);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 46);
			this->button3->TabIndex = 38;
=======
			this->button3->Location = System::Drawing::Point(765, 638);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 38);
			this->button3->TabIndex = 28;
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(1122, 652);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 46);
			this->button12->TabIndex = 40;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox4->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox4->Location = System::Drawing::Point(517, 210);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(316, 337);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"   \r\n  d   เตอ\r\n\t\r\n  n   เนอ\t\r\n\t\r\n  g   เกอ\t\r\n\t\r\n  h   เฮอ";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(324, 330);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(73, 46);
			this->button8->TabIndex = 41;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(324, 404);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(73, 46);
			this->button9->TabIndex = 44;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(324, 479);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(73, 46);
			this->button10->TabIndex = 43;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(324, 251);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 46);
			this->button11->TabIndex = 42;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(726, 330);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(73, 46);
			this->button13->TabIndex = 45;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->ForeColor = System::Drawing::SystemColors::Control;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(726, 404);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(73, 46);
			this->button14->TabIndex = 48;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->ForeColor = System::Drawing::SystemColors::Control;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(726, 479);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(73, 46);
			this->button15->TabIndex = 47;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(726, 251);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(73, 46);
			this->button16->TabIndex = 46;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->ForeColor = System::Drawing::SystemColors::Control;
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(1122, 330);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(73, 46);
			this->button17->TabIndex = 49;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->ForeColor = System::Drawing::SystemColors::Control;
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(1122, 404);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(73, 46);
			this->button18->TabIndex = 52;
			this->button18->UseVisualStyleBackColor = false;
=======
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox7->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox7->Location = System::Drawing::Point(947, 468);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(335, 48);
			this->textBox7->TabIndex = 29;
			this->textBox7->Text = L" w    อู\r\n\r\n";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->ForeColor = System::Drawing::SystemColors::Control;
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
<<<<<<< Updated upstream:mungi/MyForm.h
			this->button19->Location = System::Drawing::Point(1122, 479);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(73, 46);
			this->button19->TabIndex = 51;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->ForeColor = System::Drawing::SystemColors::Control;
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->Location = System::Drawing::Point(1122, 251);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(73, 46);
			this->button20->TabIndex = 50;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->ForeColor = System::Drawing::SystemColors::Control;
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(1541, 330);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(73, 46);
			this->button21->TabIndex = 53;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->ForeColor = System::Drawing::SystemColors::Control;
			this->button22->Location = System::Drawing::Point(1541, 404);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(73, 46);
			this->button22->TabIndex = 56;
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->ForeColor = System::Drawing::SystemColors::Control;
			this->button24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.Image")));
			this->button24->Location = System::Drawing::Point(1541, 251);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(73, 46);
			this->button24->TabIndex = 54;
			this->button24->UseVisualStyleBackColor = false;
			// 
			// NEXT
			// 
			this->NEXT->Location = System::Drawing::Point(1601, 899);
			this->NEXT->Name = L"NEXT";
			this->NEXT->Size = System::Drawing::Size(189, 63);
			this->NEXT->TabIndex = 57;
			this->NEXT->Text = L"NEXT";
			this->NEXT->UseVisualStyleBackColor = true;
			this->NEXT->Click += gcnew System::EventHandler(this, &MyForm::NEXT_Click);
=======
			this->button19->Location = System::Drawing::Point(1156, 471);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(73, 38);
			this->button19->TabIndex = 30;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->progressBar1->Location = System::Drawing::Point(560, 724);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(698, 23);
			this->progressBar1->TabIndex = 31;
			this->progressBar1->Value = 100;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(560, 753);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(698, 23);
			this->progressBar2->TabIndex = 32;
			this->progressBar2->Value = 100;
			this->progressBar2->Click += gcnew System::EventHandler(this, &MyForm::progressBar2_Click);
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
<<<<<<< Updated upstream:mungi/MyForm.h
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->NEXT);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button24);
=======
			this->ClientSize = System::Drawing::Size(1759, 810);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button18);
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->treeView1);
			this->Margin = System::Windows::Forms::Padding(1, 4, 1, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
<<<<<<< Updated upstream:mungi/MyForm.h
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	public: bool switchTo69 = false;
	private: System::Void NEXT_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		switchTo69 = true;
	//	treeView1->Hide();
	}
=======

private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar2_Click(System::Object^ sender, System::EventArgs^ e) {
}
>>>>>>> Stashed changes:pin-in/pin-in/MyForm.h
};
}