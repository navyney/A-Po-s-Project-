#pragma once
#include <iostream>
#include <windows.h>
#include "mmSystem.h"

namespace allmodel {

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
		private: System::Windows::Forms::PictureBox^ nextbutton;
		protected:
		private: System::Windows::Forms::PictureBox^ previousbutton;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ decorleft;
		private: System::Windows::Forms::ProgressBar^ progressBar2;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ lesson3;
		private: System::Windows::Forms::Panel^ panel2;
		private: System::Windows::Forms::Button^ Button17;
		private: System::Windows::Forms::Button^ Button16;
		private: System::Windows::Forms::Button^ Button15;
		private: System::Windows::Forms::Button^Button14;
		private: System::Windows::Forms::Button^ Button13;
		private: System::Windows::Forms::Label^ label16;
		private: System::Windows::Forms::Label^ label18;
		private: System::Windows::Forms::Label^ label17;
		private: System::Windows::Forms::Label^ label24;
		private: System::Windows::Forms::Label^ label23;
		private: System::Windows::Forms::Button^ Button12;
		private: System::Windows::Forms::Button^ Button10;
		private: System::Windows::Forms::Button^ Button9;
		private: System::Windows::Forms::Button^ Button8;
		private: System::Windows::Forms::Label^ label19;
		private: System::Windows::Forms::Label^ label20;
		private: System::Windows::Forms::Label^ label21;
		private: System::Windows::Forms::Label^ label22;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label25;
		private: System::Windows::Forms::Button^ Button7;
		private: System::Windows::Forms::Button^ Button6;
		private: System::Windows::Forms::Button^ Button5;
		private: System::Windows::Forms::Button^ Button4;
		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Button^ Button3;
		private: System::Windows::Forms::Button^ Button2;
		private: System::Windows::Forms::Button^ Button1;
		private: System::Windows::Forms::Button^ Button11;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Panel^ panel1;

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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ex0::typeid));
				this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
				this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->decorleft = (gcnew System::Windows::Forms::PictureBox());
				this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->lesson3 = (gcnew System::Windows::Forms::Label());
				this->panel2 = (gcnew System::Windows::Forms::Panel());
				this->Button17 = (gcnew System::Windows::Forms::Button());
				this->Button16 = (gcnew System::Windows::Forms::Button());
				this->Button15 = (gcnew System::Windows::Forms::Button());
				this->Button14 = (gcnew System::Windows::Forms::Button());
				this->Button13 = (gcnew System::Windows::Forms::Button());
				this->label16 = (gcnew System::Windows::Forms::Label());
				this->label18 = (gcnew System::Windows::Forms::Label());
				this->label17 = (gcnew System::Windows::Forms::Label());
				this->label24 = (gcnew System::Windows::Forms::Label());
				this->label23 = (gcnew System::Windows::Forms::Label());
				this->Button12 = (gcnew System::Windows::Forms::Button());
				this->Button10 = (gcnew System::Windows::Forms::Button());
				this->Button9 = (gcnew System::Windows::Forms::Button());
				this->Button8 = (gcnew System::Windows::Forms::Button());
				this->label19 = (gcnew System::Windows::Forms::Label());
				this->label20 = (gcnew System::Windows::Forms::Label());
				this->label21 = (gcnew System::Windows::Forms::Label());
				this->label22 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label25 = (gcnew System::Windows::Forms::Label());
				this->Button7 = (gcnew System::Windows::Forms::Button());
				this->Button6 = (gcnew System::Windows::Forms::Button());
				this->Button5 = (gcnew System::Windows::Forms::Button());
				this->Button4 = (gcnew System::Windows::Forms::Button());
				this->label14 = (gcnew System::Windows::Forms::Label());
				this->label13 = (gcnew System::Windows::Forms::Label());
				this->label12 = (gcnew System::Windows::Forms::Label());
				this->label11 = (gcnew System::Windows::Forms::Label());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->Button3 = (gcnew System::Windows::Forms::Button());
				this->Button2 = (gcnew System::Windows::Forms::Button());
				this->Button1 = (gcnew System::Windows::Forms::Button());
				this->Button11 = (gcnew System::Windows::Forms::Button());
				this->label10 = (gcnew System::Windows::Forms::Label());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->panel1 = (gcnew System::Windows::Forms::Panel());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
				this->panel2->SuspendLayout();
				this->panel1->SuspendLayout();
				this->SuspendLayout();
				// 
				// nextbutton
				// 
				this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
				this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->nextbutton->Location = System::Drawing::Point(1584, 897);
				this->nextbutton->Name = L"nextbutton";
				this->nextbutton->Size = System::Drawing::Size(282, 133);
				this->nextbutton->TabIndex = 114;
				this->nextbutton->TabStop = false;
				this->nextbutton->Click += gcnew System::EventHandler(this, &ex0::nextbutton_Click);
				// 
				// previousbutton
				// 
				this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
				this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->previousbutton->Location = System::Drawing::Point(33, 897);
				this->previousbutton->Name = L"previousbutton";
				this->previousbutton->Size = System::Drawing::Size(300, 130);
				this->previousbutton->TabIndex = 113;
				this->previousbutton->TabStop = false;
				this->previousbutton->Click += gcnew System::EventHandler(this, &ex0::previousbutton_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(1442, 13);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(450, 450);
				this->pictureBox1->TabIndex = 112;
				this->pictureBox1->TabStop = false;
				// 
				// decorleft
				// 
				this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
				this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->decorleft->Location = System::Drawing::Point(12, 13);
				this->decorleft->Name = L"decorleft";
				this->decorleft->Size = System::Drawing::Size(450, 450);
				this->decorleft->TabIndex = 111;
				this->decorleft->TabStop = false;
				// 
				// progressBar2
				// 
				this->progressBar2->Location = System::Drawing::Point(443, 946);
				this->progressBar2->Name = L"progressBar2";
				this->progressBar2->Size = System::Drawing::Size(1000, 35);
				this->progressBar2->TabIndex = 110;
				this->progressBar2->Value = 100;
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label6->Location = System::Drawing::Point(767, 160);
				this->label6->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(245, 82);
				this->label6->TabIndex = 109;
				this->label6->Text = L"ข้อยกเว้น";
				// 
				// lesson3
				// 
				this->lesson3->AutoSize = true;
				this->lesson3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 87.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lesson3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->lesson3->Location = System::Drawing::Point(473, 10);
				this->lesson3->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->lesson3->Name = L"lesson3";
				this->lesson3->Size = System::Drawing::Size(973, 150);
				this->lesson3->TabIndex = 108;
				this->lesson3->Text = L"Lesson 0 : pinyin";
				// 
				// panel2
				// 
				this->panel2->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->panel2->AutoScroll = true;
				this->panel2->AutoScrollMargin = System::Drawing::Size(0, 75);
				this->panel2->Controls->Add(this->Button17);
				this->panel2->Controls->Add(this->Button16);
				this->panel2->Controls->Add(this->Button15);
				this->panel2->Controls->Add(this->Button14);
				this->panel2->Controls->Add(this->Button13);
				this->panel2->Controls->Add(this->label16);
				this->panel2->Controls->Add(this->label18);
				this->panel2->Controls->Add(this->label17);
				this->panel2->Controls->Add(this->label24);
				this->panel2->Controls->Add(this->label23);
				this->panel2->Controls->Add(this->Button12);
				this->panel2->Controls->Add(this->Button10);
				this->panel2->Controls->Add(this->Button9);
				this->panel2->Controls->Add(this->Button8);
				this->panel2->Controls->Add(this->label19);
				this->panel2->Controls->Add(this->label20);
				this->panel2->Controls->Add(this->label21);
				this->panel2->Controls->Add(this->label22);
				this->panel2->Controls->Add(this->label2);
				this->panel2->Controls->Add(this->label25);
				this->panel2->Controls->Add(this->Button7);
				this->panel2->Controls->Add(this->Button6);
				this->panel2->Controls->Add(this->Button5);
				this->panel2->Controls->Add(this->Button4);
				this->panel2->Controls->Add(this->label14);
				this->panel2->Controls->Add(this->label13);
				this->panel2->Controls->Add(this->label12);
				this->panel2->Controls->Add(this->label11);
				this->panel2->Controls->Add(this->label1);
				this->panel2->Controls->Add(this->label4);
				this->panel2->Controls->Add(this->Button3);
				this->panel2->Controls->Add(this->Button2);
				this->panel2->Controls->Add(this->Button1);
				this->panel2->Controls->Add(this->Button11);
				this->panel2->Controls->Add(this->label10);
				this->panel2->Controls->Add(this->label9);
				this->panel2->Controls->Add(this->label8);
				this->panel2->Controls->Add(this->label7);
				this->panel2->Controls->Add(this->label5);
				this->panel2->Controls->Add(this->label3);
				this->panel2->Location = System::Drawing::Point(0, 2);
				this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->panel2->Name = L"panel2";
				this->panel2->Size = System::Drawing::Size(1406, 624);
				this->panel2->TabIndex = 62;
				// 
				// Button17
				// 
				this->Button17->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button17.BackgroundImage")));
				this->Button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button17->Location = System::Drawing::Point(333, 1048);
				this->Button17->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button17->Name = L"Button17";
				this->Button17->Size = System::Drawing::Size(40, 40);
				this->Button17->TabIndex = 114;
				this->Button17->Text = L"\r\n";
				this->Button17->UseVisualStyleBackColor = true;
				this->Button17->Click += gcnew System::EventHandler(this, &ex0::Button17_Click);
				// 
				// Button16
				// 
				this->Button16->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button16.BackgroundImage")));
				this->Button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button16->Location = System::Drawing::Point(159, 1048);
				this->Button16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button16->Name = L"Button16";
				this->Button16->Size = System::Drawing::Size(40, 40);
				this->Button16->TabIndex = 113;
				this->Button16->Text = L"\r\n";
				this->Button16->UseVisualStyleBackColor = true;
				this->Button16->Click += gcnew System::EventHandler(this, &ex0::Button16_Click);
				// 
				// Button15
				// 
				this->Button15->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button15.BackgroundImage")));
				this->Button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button15->Location = System::Drawing::Point(603, 974);
				this->Button15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button15->Name = L"Button15";
				this->Button15->Size = System::Drawing::Size(40, 40);
				this->Button15->TabIndex = 112;
				this->Button15->Text = L"\r\n";
				this->Button15->UseVisualStyleBackColor = true;
				this->Button15->Click += gcnew System::EventHandler(this, &ex0::Button15_Click);
				// 
				// Button14
				// 
				this->Button14->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button14.BackgroundImage")));
				this->Button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button14->Location = System::Drawing::Point(140, 880);
				this->Button14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button14->Name = L"Button14";
				this->Button14->Size = System::Drawing::Size(40, 40);
				this->Button14->TabIndex = 111;
				this->Button14->Text = L"\r\n";
				this->Button14->UseVisualStyleBackColor = true;
				this->Button14->Click += gcnew System::EventHandler(this, &ex0::Button14_Click);
				// 
				// Button13
				// 
				this->Button13->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button13.BackgroundImage")));
				this->Button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button13->Location = System::Drawing::Point(492, 811);
				this->Button13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button13->Name = L"Button13";
				this->Button13->Size = System::Drawing::Size(40, 40);
				this->Button13->TabIndex = 110;
				this->Button13->Text = L"\r\n";
				this->Button13->UseVisualStyleBackColor = true;
				this->Button13->Click += gcnew System::EventHandler(this, &ex0::Button13_Click);
				// 
				// label16
				// 
				this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label16->ForeColor = System::Drawing::SystemColors::Control;
				this->label16->Location = System::Drawing::Point(50, 1016);
				this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label16->Name = L"label16";
				this->label16->Size = System::Drawing::Size(34, 37);
				this->label16->TabIndex = 109;
				this->label16->Text = L"2\r\n\r\n\r\n\r\n\r\n";
				// 
				// label18
				// 
				this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label18->ForeColor = System::Drawing::SystemColors::Control;
				this->label18->Location = System::Drawing::Point(50, 853);
				this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label18->Name = L"label18";
				this->label18->Size = System::Drawing::Size(34, 37);
				this->label18->TabIndex = 108;
				this->label18->Text = L"1\r\n\r\n\r\n\r\n";
				// 
				// label17
				// 
				this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label17->Location = System::Drawing::Point(110, 853);
				this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label17->Name = L"label17";
				this->label17->Size = System::Drawing::Size(1230, 130);
				this->label17->TabIndex = 107;
				this->label17->Text = L"หากคำที่มีเสียง 3 อยู่ติดกัน เช่น 你好 nǐhǎo สวัสดี ให้เปลี่ยนเสียงวรรณยุกต์คำหน้าเ"
					L"ป็นเสียง 2 โดยอ่านว่า\r\n\r\nníhǎo แต่ในการเขียนคำยังคงรูปวรรณยุกต์เดิมไว้\r\n\r\n\r\n\r\n";
				// 
				// label24
				// 
				this->label24->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(222)));
				this->label24->ForeColor = System::Drawing::SystemColors::Control;
				this->label24->Location = System::Drawing::Point(7, 731);
				this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label24->Name = L"label24";
				this->label24->Size = System::Drawing::Size(1306, 57);
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
				this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label23->Location = System::Drawing::Point(110, 1016);
				this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label23->Name = L"label23";
				this->label23->Size = System::Drawing::Size(1230, 104);
				this->label23->TabIndex = 115;
				this->label23->Text = L"หากคำที่มีเสียง 3 อยู่ติดกันสามคำ เช่น 我想你 wǒxiǎngnǐ ฉันคิดถึงคุณ เวลาอ่านสามารถอ"
					L"อกเสียงได้ 2 แบบ คือ \r\n\r\nwǒxiángnǐ หรือ wóxiángnǐ ก็ได้ แต่ในการเขียนคำยังคงรูปว"
					L"รรณยุกต์เดิมไว้ \r\n\r\n\r\n\r\n\r\n";
				// 
				// Button12
				// 
				this->Button12->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button12.BackgroundImage")));
				this->Button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button12->Location = System::Drawing::Point(823, 650);
				this->Button12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button12->Name = L"Button12";
				this->Button12->Size = System::Drawing::Size(40, 40);
				this->Button12->TabIndex = 105;
				this->Button12->Text = L"\r\n";
				this->Button12->UseVisualStyleBackColor = true;
				this->Button12->Click += gcnew System::EventHandler(this, &ex0::Button12_Click);
				// 
				// Button10
				// 
				this->Button10->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button10.BackgroundImage")));
				this->Button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button10->Location = System::Drawing::Point(823, 570);
				this->Button10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button10->Name = L"Button10";
				this->Button10->Size = System::Drawing::Size(40, 40);
				this->Button10->TabIndex = 104;
				this->Button10->Text = L"\r\n";
				this->Button10->UseVisualStyleBackColor = true;
				this->Button10->Click += gcnew System::EventHandler(this, &ex0::Button10_Click);
				// 
				// Button9
				// 
				this->Button9->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button9.BackgroundImage")));
				this->Button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button9->Location = System::Drawing::Point(410, 650);
				this->Button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button9->Name = L"Button9";
				this->Button9->Size = System::Drawing::Size(40, 40);
				this->Button9->TabIndex = 103;
				this->Button9->Text = L"\r\n";
				this->Button9->UseVisualStyleBackColor = true;
				this->Button9->Click += gcnew System::EventHandler(this, &ex0::Button9_Click);
				// 
				// Button8
				// 
				this->Button8->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button8.BackgroundImage")));
				this->Button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button8->Location = System::Drawing::Point(391, 570);
				this->Button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button8->Name = L"Button8";
				this->Button8->Size = System::Drawing::Size(40, 40);
				this->Button8->TabIndex = 102;
				this->Button8->Text = L"\r\n";
				this->Button8->UseVisualStyleBackColor = true;
				this->Button8->Click += gcnew System::EventHandler(this, &ex0::Button8_Click);
				// 
				// label19
				// 
				this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label19->Location = System::Drawing::Point(699, 651);
				this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label19->Name = L"label19";
				this->label19->Size = System::Drawing::Size(176, 37);
				this->label19->TabIndex = 101;
				this->label19->Text = L"y → yu\r\n\r\n";
				// 
				// label20
				// 
				this->label20->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label20->Location = System::Drawing::Point(287, 650);
				this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label20->Name = L"label20";
				this->label20->Size = System::Drawing::Size(176, 37);
				this->label20->TabIndex = 100;
				this->label20->Text = L"x → xu    \r\n\r\n";
				// 
				// label21
				// 
				this->label21->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label21->Location = System::Drawing::Point(699, 569);
				this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label21->Name = L"label21";
				this->label21->Size = System::Drawing::Size(176, 37);
				this->label21->TabIndex = 99;
				this->label21->Text = L"q → qu \r\n\r\n\r\n";
				// 
				// label22
				// 
				this->label22->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label22->Location = System::Drawing::Point(287, 569);
				this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label22->Name = L"label22";
				this->label22->Size = System::Drawing::Size(176, 37);
				this->label22->TabIndex = 98;
				this->label22->Text = L"j → ju\r\n\r\n";
				// 
				// label2
				// 
				this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label2->Location = System::Drawing::Point(133, 569);
				this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(128, 37);
				this->label2->TabIndex = 97;
				this->label2->Text = L"ตัวอย่าง\r\n\r\n\r\n";
				// 
				// label25
				// 
				this->label25->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(222)));
				this->label25->ForeColor = System::Drawing::SystemColors::Control;
				this->label25->Location = System::Drawing::Point(7, 488);
				this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label25->Name = L"label25";
				this->label25->Size = System::Drawing::Size(1313, 57);
				this->label25->TabIndex = 96;
				this->label25->Text = L" 3.  เมื่อ ui un iu ü  อยู่ตัวเดียวจะกลายเป็น\r\n";
				this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->label25->UseCompatibleTextRendering = true;
				// 
				// Button7
				// 
				this->Button7->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button7.BackgroundImage")));
				this->Button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button7->Location = System::Drawing::Point(863, 408);
				this->Button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button7->Name = L"Button7";
				this->Button7->Size = System::Drawing::Size(40, 40);
				this->Button7->TabIndex = 95;
				this->Button7->Text = L"\r\n";
				this->Button7->UseVisualStyleBackColor = true;
				this->Button7->Click += gcnew System::EventHandler(this, &ex0::Button7_Click);
				// 
				// Button6
				// 
				this->Button6->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button6.BackgroundImage")));
				this->Button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button6->Location = System::Drawing::Point(864, 327);
				this->Button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button6->Name = L"Button6";
				this->Button6->Size = System::Drawing::Size(40, 40);
				this->Button6->TabIndex = 94;
				this->Button6->Text = L"\r\n";
				this->Button6->UseVisualStyleBackColor = true;
				this->Button6->Click += gcnew System::EventHandler(this, &ex0::Button6_Click);
				// 
				// Button5
				// 
				this->Button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button5.BackgroundImage")));
				this->Button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button5->Location = System::Drawing::Point(467, 408);
				this->Button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button5->Name = L"Button5";
				this->Button5->Size = System::Drawing::Size(40, 40);
				this->Button5->TabIndex = 93;
				this->Button5->Text = L"\r\n";
				this->Button5->UseVisualStyleBackColor = true;
				this->Button5->Click += gcnew System::EventHandler(this, &ex0::Button5_Click);
				// 
				// Button4
				// 
				this->Button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button4.BackgroundImage")));
				this->Button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button4->Location = System::Drawing::Point(435, 327);
				this->Button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button4->Name = L"Button4";
				this->Button4->Size = System::Drawing::Size(40, 40);
				this->Button4->TabIndex = 92;
				this->Button4->Text = L"\r\n";
				this->Button4->UseVisualStyleBackColor = true;
				this->Button4->Click += gcnew System::EventHandler(this, &ex0::Button4_Click);
				// 
				// label14
				// 
				this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label14->Location = System::Drawing::Point(695, 406);
				this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label14->Name = L"label14";
				this->label14->Size = System::Drawing::Size(176, 37);
				this->label14->TabIndex = 91;
				this->label14->Text = L"uo  →  wo\r\n\r\n\r\n";
				// 
				// label13
				// 
				this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label13->Location = System::Drawing::Point(287, 406);
				this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label13->Name = L"label13";
				this->label13->Size = System::Drawing::Size(272, 37);
				this->label13->TabIndex = 90;
				this->label13->Text = L"iao  →  yao\r\n\r\n";
				// 
				// label12
				// 
				this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label12->Location = System::Drawing::Point(695, 325);
				this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label12->Name = L"label12";
				this->label12->Size = System::Drawing::Size(176, 37);
				this->label12->TabIndex = 89;
				this->label12->Text = L"ua  →  wa\r\n\r\n";
				// 
				// label11
				// 
				this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label11->Location = System::Drawing::Point(287, 325);
				this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label11->Name = L"label11";
				this->label11->Size = System::Drawing::Size(176, 37);
				this->label11->TabIndex = 88;
				this->label11->Text = L"ia  →  ya\r\n\r\n";
				// 
				// label1
				// 
				this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label1->Location = System::Drawing::Point(133, 325);
				this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(128, 37);
				this->label1->TabIndex = 87;
				this->label1->Text = L"ตัวอย่าง\r\n\r\n\r\n";
				// 
				// label4
				// 
				this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(222)));
				this->label4->ForeColor = System::Drawing::SystemColors::Control;
				this->label4->Location = System::Drawing::Point(7, 244);
				this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(1313, 57);
				this->label4->TabIndex = 86;
				this->label4->Text = L" 2.  เมื่อ พยัญชนะ I u ไม่มีพยัญชนะอยู่ข้างหน้า จะทำการเปลี่ยน i เป็น y ,  u เป็น"
					L" w\r\n";
				this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->label4->UseCompatibleTextRendering = true;
				// 
				// Button3
				// 
				this->Button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button3.BackgroundImage")));
				this->Button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button3->Location = System::Drawing::Point(444, 165);
				this->Button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button3->Name = L"Button3";
				this->Button3->Size = System::Drawing::Size(40, 40);
				this->Button3->TabIndex = 79;
				this->Button3->Text = L"\r\n";
				this->Button3->UseVisualStyleBackColor = true;
				this->Button3->Click += gcnew System::EventHandler(this, &ex0::Button3_Click);
				// 
				// Button2
				// 
				this->Button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button2.BackgroundImage")));
				this->Button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button2->Location = System::Drawing::Point(429, 82);
				this->Button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button2->Name = L"Button2";
				this->Button2->Size = System::Drawing::Size(40, 40);
				this->Button2->TabIndex = 78;
				this->Button2->Text = L"\r\n";
				this->Button2->UseVisualStyleBackColor = true;
				this->Button2->Click += gcnew System::EventHandler(this, &ex0::Button2_Click);
				// 
				// Button1
				// 
				this->Button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button1.BackgroundImage")));
				this->Button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button1->Location = System::Drawing::Point(853, 165);
				this->Button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button1->Name = L"Button1";
				this->Button1->Size = System::Drawing::Size(40, 40);
				this->Button1->TabIndex = 77;
				this->Button1->Text = L"\r\n";
				this->Button1->UseVisualStyleBackColor = true;
				this->Button1->Click += gcnew System::EventHandler(this, &ex0::Button1_Click);
				// 
				// Button11
				// 
				this->Button11->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->Button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button11.BackgroundImage")));
				this->Button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->Button11->Location = System::Drawing::Point(853, 82);
				this->Button11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Button11->Name = L"Button11";
				this->Button11->Size = System::Drawing::Size(40, 40);
				this->Button11->TabIndex = 76;
				this->Button11->Text = L"\r\n";
				this->Button11->UseVisualStyleBackColor = true;
				this->Button11->Click += gcnew System::EventHandler(this, &ex0::Button11_Click);
				// 
				// label10
				// 
				this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label10->Location = System::Drawing::Point(695, 162);
				this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label10->Name = L"label10";
				this->label10->Size = System::Drawing::Size(176, 37);
				this->label10->TabIndex = 75;
				this->label10->Text = L"yü  →  yu\r\n\r\n";
				// 
				// label9
				// 
				this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label9->Location = System::Drawing::Point(695, 81);
				this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(176, 37);
				this->label9->TabIndex = 74;
				this->label9->Text = L"xü  →  xu    \r\n\r\n";
				// 
				// label8
				// 
				this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label8->Location = System::Drawing::Point(287, 162);
				this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(176, 37);
				this->label8->TabIndex = 73;
				this->label8->Text = L"qü  →  qu \r\n\r\n\r\n";
				// 
				// label7
				// 
				this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label7->Location = System::Drawing::Point(287, 81);
				this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(176, 37);
				this->label7->TabIndex = 72;
				this->label7->Text = L"jü  →  ju\r\n\r\n";
				// 
				// label5
				// 
				this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label5->Location = System::Drawing::Point(133, 81);
				this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(128, 37);
				this->label5->TabIndex = 71;
				this->label5->Text = L"ตัวอย่าง\r\n\r\n\r\n";
				// 
				// label3
				// 
				this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(222)));
				this->label3->ForeColor = System::Drawing::SystemColors::Control;
				this->label3->Location = System::Drawing::Point(7, 0);
				this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(1313, 57);
				this->label3->TabIndex = 70;
				this->label3->Text = L" 1.  เมื่อ พยัญชนะ j q x y  เจอกับ ü จะทำการละตัวจุดด้านบน";
				this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->label3->UseCompatibleTextRendering = true;
				// 
				// panel1
				// 
				this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->panel1->Controls->Add(this->panel2);
				this->panel1->Location = System::Drawing::Point(719, 255);
				this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->panel1->Name = L"panel1";
				this->panel1->Size = System::Drawing::Size(1408, 629);
				this->panel1->TabIndex = 1;
				// 
				// ex0
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->nextbutton);
				this->Controls->Add(this->previousbutton);
				this->Controls->Add(this->progressBar2);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->panel1);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->decorleft);
				this->Controls->Add(this->lesson3);
				this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"ex0";
				this->Text = L"ex0";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
				this->panel2->ResumeLayout(false);
				this->panel1->ResumeLayout(false);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion

		public:bool switchToformmix = false;
		public:bool switchToformHQ0 = false;
		private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformmix = true;
		}
		private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformHQ0 = true;
		}
		private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("jü.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("xü.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("qü.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("yü.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("ya.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("yao.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("wa.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("wo.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("jü.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("qü.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("xü.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("yü.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button13_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("你 好.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("níhǎo.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button15_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("我 想 你.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button16_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("wóxiángnǐ.wav"), NULL, SND_SYNC);
		}
		private: System::Void Button17_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("wǒxiángnǐ.wav"), NULL, SND_SYNC);
		}
};
	}
