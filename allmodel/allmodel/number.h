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
		/// Summary for number
		/// </summary>
		public ref class number : public System::Windows::Forms::Form
		{
		public:
			number(void)
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
			~number()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
		private: System::Windows::Forms::Button^ button8;
		private: System::Windows::Forms::Button^ button9;



		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label24;
		private: System::Windows::Forms::Label^ label23;
		private: System::Windows::Forms::Label^ label22;
		private: System::Windows::Forms::Label^ label21;
		private: System::Windows::Forms::Label^ label20;
		private: System::Windows::Forms::Label^ label19;
		private: System::Windows::Forms::Label^ label18;
		private: System::Windows::Forms::Label^ label17;
		private: System::Windows::Forms::Label^ label16;
		private: System::Windows::Forms::Label^ label15;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::Label^ label30;
		private: System::Windows::Forms::Label^ label31;
		private: System::Windows::Forms::Label^ label28;
		private: System::Windows::Forms::Label^ label29;
		private: System::Windows::Forms::Label^ label32;
		private: System::Windows::Forms::Label^ label27;
		private: System::Windows::Forms::Label^ label26;
		private: System::Windows::Forms::Label^ label25;
		private: System::Windows::Forms::Button^ button12;
		private: System::Windows::Forms::Button^ button11;
		private: System::Windows::Forms::Button^ button10;
		private: System::Windows::Forms::Button^ button7;
		private: System::Windows::Forms::Button^ button6;
		private: System::Windows::Forms::Button^ button5;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::PictureBox^ nextbutton;
		private: System::Windows::Forms::PictureBox^ previousbutton;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ decorleft;
		private: System::Windows::Forms::ProgressBar^ progressBar2;
		private: System::Windows::Forms::Label^ label33;
		private: System::Windows::Forms::Label^ lesson3;















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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(number::typeid));
				this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
				this->button12 = (gcnew System::Windows::Forms::Button());
				this->button11 = (gcnew System::Windows::Forms::Button());
				this->button10 = (gcnew System::Windows::Forms::Button());
				this->button7 = (gcnew System::Windows::Forms::Button());
				this->button6 = (gcnew System::Windows::Forms::Button());
				this->button5 = (gcnew System::Windows::Forms::Button());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->label11 = (gcnew System::Windows::Forms::Label());
				this->label10 = (gcnew System::Windows::Forms::Label());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->label12 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label13 = (gcnew System::Windows::Forms::Label());
				this->label14 = (gcnew System::Windows::Forms::Label());
				this->label21 = (gcnew System::Windows::Forms::Label());
				this->label20 = (gcnew System::Windows::Forms::Label());
				this->label19 = (gcnew System::Windows::Forms::Label());
				this->label24 = (gcnew System::Windows::Forms::Label());
				this->label15 = (gcnew System::Windows::Forms::Label());
				this->label17 = (gcnew System::Windows::Forms::Label());
				this->label18 = (gcnew System::Windows::Forms::Label());
				this->label16 = (gcnew System::Windows::Forms::Label());
				this->label23 = (gcnew System::Windows::Forms::Label());
				this->label22 = (gcnew System::Windows::Forms::Label());
				this->label30 = (gcnew System::Windows::Forms::Label());
				this->label31 = (gcnew System::Windows::Forms::Label());
				this->label28 = (gcnew System::Windows::Forms::Label());
				this->label29 = (gcnew System::Windows::Forms::Label());
				this->label32 = (gcnew System::Windows::Forms::Label());
				this->label27 = (gcnew System::Windows::Forms::Label());
				this->label26 = (gcnew System::Windows::Forms::Label());
				this->label25 = (gcnew System::Windows::Forms::Label());
				this->button4 = (gcnew System::Windows::Forms::Button());
				this->button8 = (gcnew System::Windows::Forms::Button());
				this->button9 = (gcnew System::Windows::Forms::Button());
				this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
				this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->decorleft = (gcnew System::Windows::Forms::PictureBox());
				this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
				this->label33 = (gcnew System::Windows::Forms::Label());
				this->lesson3 = (gcnew System::Windows::Forms::Label());
				this->tableLayoutPanel1->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
				this->SuspendLayout();
				// 
				// tableLayoutPanel1
				// 
				this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
				this->tableLayoutPanel1->ColumnCount = 10;
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					10)));
				this->tableLayoutPanel1->Controls->Add(this->button12, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->button11, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->button10, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->button7, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->button6, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->button5, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->button3, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->button1, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->button2, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->label11, 8, 0);
				this->tableLayoutPanel1->Controls->Add(this->label10, 7, 0);
				this->tableLayoutPanel1->Controls->Add(this->label9, 6, 0);
				this->tableLayoutPanel1->Controls->Add(this->label8, 5, 0);
				this->tableLayoutPanel1->Controls->Add(this->label7, 4, 0);
				this->tableLayoutPanel1->Controls->Add(this->label6, 3, 0);
				this->tableLayoutPanel1->Controls->Add(this->label12, 9, 0);
				this->tableLayoutPanel1->Controls->Add(this->label5, 2, 0);
				this->tableLayoutPanel1->Controls->Add(this->label4, 1, 0);
				this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
				this->tableLayoutPanel1->Controls->Add(this->label13, 0, 1);
				this->tableLayoutPanel1->Controls->Add(this->label14, 1, 1);
				this->tableLayoutPanel1->Controls->Add(this->label21, 2, 1);
				this->tableLayoutPanel1->Controls->Add(this->label20, 3, 1);
				this->tableLayoutPanel1->Controls->Add(this->label19, 4, 1);
				this->tableLayoutPanel1->Controls->Add(this->label24, 5, 1);
				this->tableLayoutPanel1->Controls->Add(this->label15, 6, 1);
				this->tableLayoutPanel1->Controls->Add(this->label17, 7, 1);
				this->tableLayoutPanel1->Controls->Add(this->label18, 8, 1);
				this->tableLayoutPanel1->Controls->Add(this->label16, 9, 1);
				this->tableLayoutPanel1->Controls->Add(this->label23, 0, 2);
				this->tableLayoutPanel1->Controls->Add(this->label22, 1, 2);
				this->tableLayoutPanel1->Controls->Add(this->label30, 2, 2);
				this->tableLayoutPanel1->Controls->Add(this->label31, 3, 2);
				this->tableLayoutPanel1->Controls->Add(this->label28, 4, 2);
				this->tableLayoutPanel1->Controls->Add(this->label29, 5, 2);
				this->tableLayoutPanel1->Controls->Add(this->label32, 6, 2);
				this->tableLayoutPanel1->Controls->Add(this->label27, 7, 2);
				this->tableLayoutPanel1->Controls->Add(this->label26, 8, 2);
				this->tableLayoutPanel1->Controls->Add(this->label25, 9, 2);
				this->tableLayoutPanel1->Controls->Add(this->button4, 9, 3);
				this->tableLayoutPanel1->Location = System::Drawing::Point(285, 271);
				this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
				this->tableLayoutPanel1->RowCount = 4;
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
				this->tableLayoutPanel1->Size = System::Drawing::Size(1343, 543);
				this->tableLayoutPanel1->TabIndex = 0;
				this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &number::tableLayoutPanel1_Paint);
				// 
				// button12
				// 
				this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
				this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button12->Location = System::Drawing::Point(810, 411);
				this->button12->Name = L"button12";
				this->button12->Size = System::Drawing::Size(65, 65);
				this->button12->TabIndex = 39;
				this->button12->UseVisualStyleBackColor = true;
				this->button12->Click += gcnew System::EventHandler(this, &number::button12_Click);
				// 
				// button11
				// 
				this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
				this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button11->Location = System::Drawing::Point(274, 411);
				this->button11->Name = L"button11";
				this->button11->Size = System::Drawing::Size(65, 65);
				this->button11->TabIndex = 38;
				this->button11->UseVisualStyleBackColor = true;
				this->button11->Click += gcnew System::EventHandler(this, &number::button11_Click);
				// 
				// button10
				// 
				this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
				this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button10->Location = System::Drawing::Point(408, 411);
				this->button10->Name = L"button10";
				this->button10->Size = System::Drawing::Size(65, 65);
				this->button10->TabIndex = 37;
				this->button10->UseVisualStyleBackColor = true;
				this->button10->Click += gcnew System::EventHandler(this, &number::button10_Click);
				// 
				// button7
				// 
				this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
				this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button7->Location = System::Drawing::Point(6, 411);
				this->button7->Name = L"button7";
				this->button7->Size = System::Drawing::Size(65, 65);
				this->button7->TabIndex = 36;
				this->button7->UseVisualStyleBackColor = true;
				this->button7->Click += gcnew System::EventHandler(this, &number::button7_Click);
				// 
				// button6
				// 
				this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
				this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button6->Location = System::Drawing::Point(140, 411);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(65, 65);
				this->button6->TabIndex = 35;
				this->button6->UseVisualStyleBackColor = true;
				this->button6->Click += gcnew System::EventHandler(this, &number::button6_Click);
				// 
				// button5
				// 
				this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
				this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button5->Location = System::Drawing::Point(542, 411);
				this->button5->Name = L"button5";
				this->button5->Size = System::Drawing::Size(65, 65);
				this->button5->TabIndex = 34;
				this->button5->UseVisualStyleBackColor = true;
				this->button5->Click += gcnew System::EventHandler(this, &number::button5_Click);
				// 
				// button3
				// 
				this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
				this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button3->Location = System::Drawing::Point(944, 411);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(65, 65);
				this->button3->TabIndex = 32;
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &number::button3_Click);
				// 
				// button1
				// 
				this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
				this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button1->Location = System::Drawing::Point(1078, 411);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(65, 65);
				this->button1->TabIndex = 31;
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &number::button1_Click);
				// 
				// button2
				// 
				this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
				this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button2->Location = System::Drawing::Point(676, 411);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(65, 65);
				this->button2->TabIndex = 30;
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &number::button2_Click);
				// 
				// label11
				// 
				this->label11->AutoSize = true;
				this->label11->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label11->Location = System::Drawing::Point(1077, 3);
				this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label11->Name = L"label11";
				this->label11->Size = System::Drawing::Size(65, 76);
				this->label11->TabIndex = 8;
				this->label11->Text = L"9";
				this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label10
				// 
				this->label10->AutoSize = true;
				this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label10->Location = System::Drawing::Point(943, 3);
				this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label10->Name = L"label10";
				this->label10->Size = System::Drawing::Size(65, 76);
				this->label10->TabIndex = 7;
				this->label10->Text = L"8";
				this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label9
				// 
				this->label9->AutoSize = true;
				this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label9->Location = System::Drawing::Point(809, 3);
				this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(65, 76);
				this->label9->TabIndex = 6;
				this->label9->Text = L"7";
				this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label8->Location = System::Drawing::Point(675, 3);
				this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(65, 76);
				this->label8->TabIndex = 5;
				this->label8->Text = L"6";
				this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label7->Location = System::Drawing::Point(541, 3);
				this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(65, 76);
				this->label7->TabIndex = 4;
				this->label7->Text = L"5";
				this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label6->Location = System::Drawing::Point(407, 3);
				this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(65, 76);
				this->label6->TabIndex = 3;
				this->label6->Text = L"4";
				this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label6->Click += gcnew System::EventHandler(this, &number::label6_Click);
				// 
				// label12
				// 
				this->label12->AutoSize = true;
				this->label12->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label12->Location = System::Drawing::Point(1211, 3);
				this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label12->Name = L"label12";
				this->label12->Size = System::Drawing::Size(98, 76);
				this->label12->TabIndex = 9;
				this->label12->Text = L"10";
				this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label12->Click += gcnew System::EventHandler(this, &number::label12_Click);
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label5->Location = System::Drawing::Point(273, 3);
				this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(65, 76);
				this->label5->TabIndex = 2;
				this->label5->Text = L"3";
				this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label4->Location = System::Drawing::Point(139, 3);
				this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(65, 76);
				this->label4->TabIndex = 1;
				this->label4->Text = L"2";
				this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->Location = System::Drawing::Point(5, 3);
				this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(65, 76);
				this->label3->TabIndex = 0;
				this->label3->Text = L"1";
				this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label3->Click += gcnew System::EventHandler(this, &number::label3_Click);
				// 
				// label13
				// 
				this->label13->AutoSize = true;
				this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label13->Location = System::Drawing::Point(5, 138);
				this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label13->Name = L"label13";
				this->label13->Size = System::Drawing::Size(91, 76);
				this->label13->TabIndex = 10;
				this->label13->Text = L"一";
				this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label14
				// 
				this->label14->AutoSize = true;
				this->label14->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label14->Location = System::Drawing::Point(139, 138);
				this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label14->Name = L"label14";
				this->label14->Size = System::Drawing::Size(91, 76);
				this->label14->TabIndex = 11;
				this->label14->Text = L"二";
				this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label21
				// 
				this->label21->AutoSize = true;
				this->label21->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label21->Location = System::Drawing::Point(273, 138);
				this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label21->Name = L"label21";
				this->label21->Size = System::Drawing::Size(91, 76);
				this->label21->TabIndex = 18;
				this->label21->Text = L"三";
				this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label20
				// 
				this->label20->AutoSize = true;
				this->label20->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label20->Location = System::Drawing::Point(407, 138);
				this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label20->Name = L"label20";
				this->label20->Size = System::Drawing::Size(91, 76);
				this->label20->TabIndex = 17;
				this->label20->Text = L"四";
				this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label19
				// 
				this->label19->AutoSize = true;
				this->label19->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label19->Location = System::Drawing::Point(541, 138);
				this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label19->Name = L"label19";
				this->label19->Size = System::Drawing::Size(91, 76);
				this->label19->TabIndex = 16;
				this->label19->Text = L"五";
				this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label24
				// 
				this->label24->AutoSize = true;
				this->label24->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label24->Location = System::Drawing::Point(675, 138);
				this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label24->Name = L"label24";
				this->label24->Size = System::Drawing::Size(91, 76);
				this->label24->TabIndex = 21;
				this->label24->Text = L"六";
				this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label15
				// 
				this->label15->AutoSize = true;
				this->label15->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label15->Location = System::Drawing::Point(809, 138);
				this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label15->Name = L"label15";
				this->label15->Size = System::Drawing::Size(91, 76);
				this->label15->TabIndex = 12;
				this->label15->Text = L"七";
				this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label17
				// 
				this->label17->AutoSize = true;
				this->label17->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label17->Location = System::Drawing::Point(943, 138);
				this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label17->Name = L"label17";
				this->label17->Size = System::Drawing::Size(91, 76);
				this->label17->TabIndex = 14;
				this->label17->Text = L"八";
				this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label18
				// 
				this->label18->AutoSize = true;
				this->label18->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label18->Location = System::Drawing::Point(1077, 138);
				this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label18->Name = L"label18";
				this->label18->Size = System::Drawing::Size(91, 76);
				this->label18->TabIndex = 15;
				this->label18->Text = L"九";
				this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label16
				// 
				this->label16->AutoSize = true;
				this->label16->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label16->Location = System::Drawing::Point(1211, 138);
				this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label16->Name = L"label16";
				this->label16->Size = System::Drawing::Size(91, 76);
				this->label16->TabIndex = 13;
				this->label16->Text = L"十";
				this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label23
				// 
				this->label23->AutoSize = true;
				this->label23->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label23->Location = System::Drawing::Point(5, 273);
				this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label23->Name = L"label23";
				this->label23->Size = System::Drawing::Size(77, 68);
				this->label23->TabIndex = 20;
				this->label23->Text = L"Yī";
				this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label22
				// 
				this->label22->AutoSize = true;
				this->label22->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label22->Location = System::Drawing::Point(139, 273);
				this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label22->Name = L"label22";
				this->label22->Size = System::Drawing::Size(81, 68);
				this->label22->TabIndex = 19;
				this->label22->Text = L"Èr";
				this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label22->Click += gcnew System::EventHandler(this, &number::label22_Click);
				// 
				// label30
				// 
				this->label30->AutoSize = true;
				this->label30->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label30->Location = System::Drawing::Point(273, 273);
				this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label30->Name = L"label30";
				this->label30->Size = System::Drawing::Size(123, 68);
				this->label30->TabIndex = 27;
				this->label30->Text = L"Sān";
				this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label31
				// 
				this->label31->AutoSize = true;
				this->label31->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label31->Location = System::Drawing::Point(407, 273);
				this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label31->Name = L"label31";
				this->label31->Size = System::Drawing::Size(76, 68);
				this->label31->TabIndex = 28;
				this->label31->Text = L"Sì";
				this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label28
				// 
				this->label28->AutoSize = true;
				this->label28->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label28->Location = System::Drawing::Point(541, 273);
				this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label28->Name = L"label28";
				this->label28->Size = System::Drawing::Size(107, 68);
				this->label28->TabIndex = 25;
				this->label28->Text = L"Wǔ";
				this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label29
				// 
				this->label29->AutoSize = true;
				this->label29->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label29->Location = System::Drawing::Point(675, 273);
				this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label29->Name = L"label29";
				this->label29->Size = System::Drawing::Size(106, 68);
				this->label29->TabIndex = 26;
				this->label29->Text = L"Liù";
				this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label32
				// 
				this->label32->AutoSize = true;
				this->label32->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label32->Location = System::Drawing::Point(809, 273);
				this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label32->Name = L"label32";
				this->label32->Size = System::Drawing::Size(82, 68);
				this->label32->TabIndex = 29;
				this->label32->Text = L"Qī";
				this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label27
				// 
				this->label27->AutoSize = true;
				this->label27->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label27->Location = System::Drawing::Point(943, 273);
				this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label27->Name = L"label27";
				this->label27->Size = System::Drawing::Size(95, 68);
				this->label27->TabIndex = 24;
				this->label27->Text = L"Bā";
				this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label26
				// 
				this->label26->AutoSize = true;
				this->label26->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label26->Location = System::Drawing::Point(1077, 273);
				this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label26->Name = L"label26";
				this->label26->Size = System::Drawing::Size(95, 68);
				this->label26->TabIndex = 23;
				this->label26->Text = L"Jiǔ";
				this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// label25
				// 
				this->label25->AutoSize = true;
				this->label25->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label25->Location = System::Drawing::Point(1211, 273);
				this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label25->Name = L"label25";
				this->label25->Size = System::Drawing::Size(107, 68);
				this->label25->TabIndex = 22;
				this->label25->Text = L"Shí";
				this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// button4
				// 
				this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
				this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button4->Location = System::Drawing::Point(1212, 411);
				this->button4->Name = L"button4";
				this->button4->Size = System::Drawing::Size(65, 65);
				this->button4->TabIndex = 33;
				this->button4->UseVisualStyleBackColor = true;
				this->button4->Click += gcnew System::EventHandler(this, &number::button4_Click);
				// 
				// button8
				// 
				this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->button8->AutoSize = true;
				this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
				this->button8->Location = System::Drawing::Point(644, 1425);
				this->button8->MaximumSize = System::Drawing::Size(400, 200);
				this->button8->MinimumSize = System::Drawing::Size(136, 60);
				this->button8->Name = L"button8";
				this->button8->Size = System::Drawing::Size(240, 107);
				this->button8->TabIndex = 28;
				this->button8->Text = L"Previous";
				this->button8->UseVisualStyleBackColor = true;
				// 
				// button9
				// 
				this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->button9->AutoSize = true;
				this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
				this->button9->Location = System::Drawing::Point(2469, 1425);
				this->button9->MaximumSize = System::Drawing::Size(400, 200);
				this->button9->MinimumSize = System::Drawing::Size(136, 60);
				this->button9->Name = L"button9";
				this->button9->Size = System::Drawing::Size(240, 107);
				this->button9->TabIndex = 29;
				this->button9->Text = L"Next";
				this->button9->UseVisualStyleBackColor = true;
				// 
				// nextbutton
				// 
				this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
				this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->nextbutton->Location = System::Drawing::Point(1584, 897);
				this->nextbutton->Name = L"nextbutton";
				this->nextbutton->Size = System::Drawing::Size(282, 133);
				this->nextbutton->TabIndex = 61;
				this->nextbutton->TabStop = false;
				this->nextbutton->Click += gcnew System::EventHandler(this, &number::nextbutton_Click);
				// 
				// previousbutton
				// 
				this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
				this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->previousbutton->Location = System::Drawing::Point(33, 897);
				this->previousbutton->Name = L"previousbutton";
				this->previousbutton->Size = System::Drawing::Size(300, 130);
				this->previousbutton->TabIndex = 60;
				this->previousbutton->TabStop = false;
				this->previousbutton->Click += gcnew System::EventHandler(this, &number::previousbutton_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->Location = System::Drawing::Point(1442, 13);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(450, 450);
				this->pictureBox1->TabIndex = 59;
				this->pictureBox1->TabStop = false;
				// 
				// decorleft
				// 
				this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
				this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->decorleft->Location = System::Drawing::Point(12, 13);
				this->decorleft->Name = L"decorleft";
				this->decorleft->Size = System::Drawing::Size(450, 450);
				this->decorleft->TabIndex = 58;
				this->decorleft->TabStop = false;
				// 
				// progressBar2
				// 
				this->progressBar2->Location = System::Drawing::Point(443, 946);
				this->progressBar2->Name = L"progressBar2";
				this->progressBar2->Size = System::Drawing::Size(1000, 35);
				this->progressBar2->TabIndex = 57;
				this->progressBar2->Value = 93;
				// 
				// label33
				// 
				this->label33->AutoSize = true;
				this->label33->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label33->Location = System::Drawing::Point(765, 160);
				this->label33->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->label33->Name = L"label33";
				this->label33->Size = System::Drawing::Size(353, 82);
				this->label33->TabIndex = 56;
				this->label33->Text = L"vocabulary";
				// 
				// lesson3
				// 
				this->lesson3->AutoSize = true;
				this->lesson3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 87.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lesson3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->lesson3->Location = System::Drawing::Point(470, 10);
				this->lesson3->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->lesson3->Name = L"lesson3";
				this->lesson3->Size = System::Drawing::Size(968, 150);
				this->lesson3->TabIndex = 55;
				this->lesson3->Text = L"Lesson 1 : Hello!";
				// 
				// number
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->nextbutton);
				this->Controls->Add(this->previousbutton);
				this->Controls->Add(this->progressBar2);
				this->Controls->Add(this->label33);
				this->Controls->Add(this->lesson3);
				this->Controls->Add(this->button9);
				this->Controls->Add(this->button8);
				this->Controls->Add(this->tableLayoutPanel1);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->decorleft);
				this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"number";
				this->Text = L"number";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				this->tableLayoutPanel1->ResumeLayout(false);
				this->tableLayoutPanel1->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		
#pragma endregion
		public:bool switchToformvo01 = false;
		public:bool switchToformcon1 = false;
		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformvo01 = true;
		}
		private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformcon1 = true;
		}
		
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("一.wav"), NULL, SND_SYNC);
		}
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("二.wav"), NULL, SND_SYNC);
		}
		private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("三.wav"), NULL, SND_SYNC);
		}
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("四.wav"), NULL, SND_SYNC);
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("五.wav"), NULL, SND_SYNC);
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("六.wav"), NULL, SND_SYNC);
		}
		private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("七.wav"), NULL, SND_SYNC);
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("八.wav"), NULL, SND_SYNC);
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("九.wav"), NULL, SND_SYNC);
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			PlaySound(TEXT("十.wav"), NULL, SND_SYNC);
		}
	};
}
