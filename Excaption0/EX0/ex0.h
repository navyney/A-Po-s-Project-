﻿#pragma once

namespace EX0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ex0
	/// </summary>
	public ref class ex0 : public System::Windows::Forms::Form
	{
	public:
		ex0(void)
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
		~ex0()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ex0::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Location = System::Drawing::Point(12, 14);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1878, 900);
			this->panel1->TabIndex = 1;
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 31.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(160, 120);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(236, 70);
			this->label26->TabIndex = 60;
			this->label26->Text = L"ข้อยกเว้น\r\n\r\n";
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(25, 25);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(645, 70);
			this->label27->TabIndex = 59;
			this->label27->Text = L"Lesson 0 : Pinyin\r\n\r\n";
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel2->AutoScroll = true;
			this->panel2->AutoScrollMargin = System::Drawing::Size(0, 75);
			this->panel2->Controls->Add(this->radioButton17);
			this->panel2->Controls->Add(this->radioButton16);
			this->panel2->Controls->Add(this->radioButton15);
			this->panel2->Controls->Add(this->radioButton14);
			this->panel2->Controls->Add(this->radioButton13);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->radioButton12);
			this->panel2->Controls->Add(this->radioButton10);
			this->panel2->Controls->Add(this->radioButton9);
			this->panel2->Controls->Add(this->radioButton8);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->radioButton7);
			this->panel2->Controls->Add(this->radioButton6);
			this->panel2->Controls->Add(this->radioButton5);
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->radioButton3);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Controls->Add(this->radioButton11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(0, 222);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1875, 672);
			this->panel2->TabIndex = 62;
			// 
			// radioButton17
			// 
			this->radioButton17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton17->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton17.BackgroundImage")));
			this->radioButton17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton17->Location = System::Drawing::Point(439, 1290);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(36, 36);
			this->radioButton17->TabIndex = 114;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"\r\n";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton16->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton16.BackgroundImage")));
			this->radioButton16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton16->Location = System::Drawing::Point(224, 1290);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(36, 36);
			this->radioButton16->TabIndex = 113;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"\r\n";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton15->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton15.BackgroundImage")));
			this->radioButton15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton15->Location = System::Drawing::Point(804, 1210);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(36, 36);
			this->radioButton15->TabIndex = 112;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"\r\n";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton14->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton14.BackgroundImage")));
			this->radioButton14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton14->Location = System::Drawing::Point(191, 1090);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(36, 36);
			this->radioButton14->TabIndex = 111;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"\r\n";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton13->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton13.BackgroundImage")));
			this->radioButton13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton13->Location = System::Drawing::Point(651, 1011);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(36, 36);
			this->radioButton13->TabIndex = 110;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"\r\n";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(79, 1250);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 45);
			this->label16->TabIndex = 109;
			this->label16->Text = L"2\r\n\r\n\r\n\r\n\r\n";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(79, 1050);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(45, 45);
			this->label18->TabIndex = 108;
			this->label18->Text = L"1\r\n\r\n\r\n\r\n";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(159, 1050);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(1640, 160);
			this->label17->TabIndex = 107;
			this->label17->Text = L"หากคำที่มีเสียง 3 อยู่ติดกัน เช่น 你好 nǐhǎo สวัสดี ให้เปลี่ยนเสียงวรรณยุกต์คำหน้าเ"
				L"ป็นเสียง 2 โดยอ่านว่า\r\n\r\nníhǎo แต่ในการเขียนคำยังคงรูปวรรณยุกต์เดิมไว้\r\n\r\n\r\n\r\n";
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label24->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label24->Location = System::Drawing::Point(21, 900);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(1740, 70);
			this->label24->TabIndex = 106;
			this->label24->Text = L" 4.  เมื่อวรรณยุคไม้เอกอยู่ด้วยกัน \r\n";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label24->UseCompatibleTextRendering = true;
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(159, 1250);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(1640, 128);
			this->label23->TabIndex = 115;
			this->label23->Text = L"หากคำที่มีเสียง 3 อยู่ติดกันสามคำ เช่น 我想你 wǒxiǎngnǐ ฉันคิดถึงคุณ เวลาอ่านสามารถอ"
				L"อกเสียงได้ 2 แบบ คือ \r\n\r\nwǒxiángnǐ หรือ wóxiángnǐ ก็ได้ แต่ในการเขียนคำยังคงรูปว"
				L"รรณยุกต์เดิมไว้ \r\n\r\n\r\n\r\n\r\n";
			// 
			// radioButton12
			// 
			this->radioButton12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton12->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton12.BackgroundImage")));
			this->radioButton12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton12->Location = System::Drawing::Point(1109, 810);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(36, 36);
			this->radioButton12->TabIndex = 105;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"\r\n";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton10->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton10.BackgroundImage")));
			this->radioButton10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton10->Location = System::Drawing::Point(1109, 710);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(36, 36);
			this->radioButton10->TabIndex = 104;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"\r\n";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton9->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton9.BackgroundImage")));
			this->radioButton9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton9->Location = System::Drawing::Point(559, 810);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(36, 36);
			this->radioButton9->TabIndex = 103;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"\r\n";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton8->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton8.BackgroundImage")));
			this->radioButton8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton8->Location = System::Drawing::Point(534, 710);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(36, 36);
			this->radioButton8->TabIndex = 102;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"\r\n";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(944, 801);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(235, 45);
			this->label19->TabIndex = 101;
			this->label19->Text = L"y → yu\r\n\r\n";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(394, 800);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(235, 45);
			this->label20->TabIndex = 100;
			this->label20->Text = L"x → xu    \r\n\r\n";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(944, 700);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(235, 45);
			this->label21->TabIndex = 99;
			this->label21->Text = L"q → qu \r\n\r\n\r\n";
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(394, 700);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(235, 45);
			this->label22->TabIndex = 98;
			this->label22->Text = L"j → ju\r\n\r\n";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(189, 700);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 45);
			this->label2->TabIndex = 97;
			this->label2->Text = L"ตัวอย่าง\r\n\r\n\r\n";
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label25->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label25->Location = System::Drawing::Point(21, 600);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(1750, 70);
			this->label25->TabIndex = 96;
			this->label25->Text = L" 3.  เมื่อ ui un iu ü  อยู่ตัวเดียวจะกลายเป็น\r\n";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label25->UseCompatibleTextRendering = true;
			// 
			// radioButton7
			// 
			this->radioButton7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton7->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton7.BackgroundImage")));
			this->radioButton7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton7->Location = System::Drawing::Point(1162, 510);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(36, 36);
			this->radioButton7->TabIndex = 95;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"\r\n";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton6->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton6.BackgroundImage")));
			this->radioButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton6->Location = System::Drawing::Point(1164, 410);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(36, 36);
			this->radioButton6->TabIndex = 94;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"\r\n";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton5->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton5.BackgroundImage")));
			this->radioButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton5->Location = System::Drawing::Point(634, 510);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(36, 36);
			this->radioButton5->TabIndex = 93;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"\r\n";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton4->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton4.BackgroundImage")));
			this->radioButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton4->Location = System::Drawing::Point(592, 409);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(36, 36);
			this->radioButton4->TabIndex = 92;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"\r\n";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(939, 500);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(235, 45);
			this->label14->TabIndex = 91;
			this->label14->Text = L"uo  →  wo\r\n\r\n\r\n";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(394, 500);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(362, 45);
			this->label13->TabIndex = 90;
			this->label13->Text = L"iao  →  yao\r\n\r\n";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(939, 400);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(235, 45);
			this->label12->TabIndex = 89;
			this->label12->Text = L"ua  →  wa\r\n\r\n";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(394, 400);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(235, 45);
			this->label11->TabIndex = 88;
			this->label11->Text = L"ia  →  ya\r\n\r\n";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(189, 400);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 45);
			this->label1->TabIndex = 87;
			this->label1->Text = L"ตัวอย่าง\r\n\r\n\r\n";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(21, 300);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1750, 70);
			this->label4->TabIndex = 86;
			this->label4->Text = L" 2.  เมื่อ พยัญชนะ I u ไม่มีพยัญชนะอยู่ข้างหน้า จะทำการเปลี่ยน i เป็น y ,  u เป็น"
				L" w\r\n";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->UseCompatibleTextRendering = true;
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton3.BackgroundImage")));
			this->radioButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton3->Location = System::Drawing::Point(604, 210);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(36, 36);
			this->radioButton3->TabIndex = 79;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"\r\n";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton2.BackgroundImage")));
			this->radioButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton2->Location = System::Drawing::Point(584, 105);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(36, 36);
			this->radioButton2->TabIndex = 78;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"\r\n";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton1.BackgroundImage")));
			this->radioButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton1->Location = System::Drawing::Point(1149, 210);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(36, 36);
			this->radioButton1->TabIndex = 77;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"\r\n";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton11->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton11.BackgroundImage")));
			this->radioButton11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton11->Location = System::Drawing::Point(1149, 110);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(36, 36);
			this->radioButton11->TabIndex = 76;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"\r\n";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(939, 200);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(235, 45);
			this->label10->TabIndex = 75;
			this->label10->Text = L"yü  →  yu\r\n\r\n";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(939, 100);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(235, 45);
			this->label9->TabIndex = 74;
			this->label9->Text = L"xü  →  xu    \r\n\r\n";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(394, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(235, 45);
			this->label8->TabIndex = 73;
			this->label8->Text = L"qü  →  qu \r\n\r\n\r\n";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(394, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(235, 45);
			this->label7->TabIndex = 72;
			this->label7->Text = L"jü  →  ju\r\n\r\n";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(189, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 45);
			this->label5->TabIndex = 71;
			this->label5->Text = L"ตัวอย่าง\r\n\r\n\r\n";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label3->Location = System::Drawing::Point(21, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1750, 70);
			this->label3->TabIndex = 70;
			this->label3->Text = L" 1.  เมื่อ พยัญชนะ j q x y  เจอกับ ü จะทำการละตัวจุดด้านบน";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->UseCompatibleTextRendering = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->progressBar1->Location = System::Drawing::Point(500, 975);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(900, 20);
			this->progressBar1->TabIndex = 106;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button2->Location = System::Drawing::Point(12, 946);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 75);
			this->button2->TabIndex = 105;
			this->button2->Text = L"Previous";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button1->Location = System::Drawing::Point(1690, 946);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 75);
			this->button1->TabIndex = 107;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// ex0
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Name = L"ex0";
			this->Text = L"ex0";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
